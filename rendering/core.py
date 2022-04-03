import cupy as cp
import numpy as np
import os
import typing
from ._mathbase import to_bytes, from_bytes, size_in_bytes
import rendering._math_defs as mds
import math
from enum import IntEnum
import copy


__CURRENT_PATH__ = os.path.dirname(os.path.abspath(__file__))


class CUDAKernel:
    """
    Represents a simplified version of a cuda kernel.
    The kernel must be alone in a file, the main function needs to be named kernel.
    Only one-dimensional grids with one-dimensional blocks are supported.
    """
    def __init__(self, path, threads_per_block: int):
        with open(path, 'r') as f:
            code = f.read()
        code = code + '// Compile seed '+str(np.random.randint(0, 10000000)) +"\n\r"
        self.kernel = cp.RawKernel(
            code, 
            'kernel',
            (
                "-I" + os.environ['CUDA_PATH'] +"/include",
                "-I" + __CURRENT_PATH__+"/cuda",                # Add this path to include tests_rendering/cuda headers
                "-I" + os.path.dirname(os.path.abspath(path)),  # Add the path of the kernel file to have relative access
                "-I" + os.getcwd()                              # Add the working directory path
            ), 'nvrtc')
        self.threads_per_block = threads_per_block

    def dispatch(self, total_threads: int, *args):
        """
        Execute a sufficiently large grid to cover the total_threads.
        Arguments must be cupy objects or int or float.
        Rendering objects normally have a get function to return such cupy backed buffer.
        """
        self.kernel(
            (int(math.ceil(total_threads / self.threads_per_block)),),  # grid
            (self.threads_per_block,),                                  # block dimensions
            args
        )


class StructLayout:
    """
    Represents a layout of a struct using a secuence of field_name=field_type assignments.
    I.e. StructLayout(N=int, start_point=float3) would represent the struct
    struct  { int N; float3 start_point; }
    """
    def __init__(self, **fields):
        offset = 0
        layout = {}
        for field, t in fields.items():
            field_size = size_in_bytes(t)
            layout[field] = (offset, field_size, t)
            offset += field_size
        self.layout = layout
        self.size = offset
        self.fields = fields

    def get_fields(self):
        """
        Gets the fields declared when constructed this layout.
        """
        return self.fields

    def get_size(self):
        """
        Gets the total size in bytes of a struct with this layout.
        """
        return self.size

    def get_value(self, data, field):
        """
        Gets the value of a struct stored in data for a specific field according to this layout.
        :param data: Can be any buffer-like object like cupy array, numpy array or GPUArray.
        :param field: The name of the field requested
        :return: The value of type declared for that field in this layout.
        """
        offset, field_size, t = self.layout[field]
        return from_bytes(t, data[offset:offset+field_size])

    def set_value(self, data, field, value):
        """
        Sets the value of a struct stored in data for a specific field according to this layout.
        :param data: Can be any buffer-like object like cupy array, numpy array or GPUArray.
        :param field: The name of the field requested
        :param value: The value of type declared for that field in this layout.
        """
        offset, field_size, t = self.layout[field]
        if hasattr(data, "__cuda_array_interface__"):
            data[offset:offset+field_size] = cp.frombuffer(to_bytes(t, value), dtype=cp.uint8)
        else:
            data[offset:offset + field_size] = to_bytes(t, value)


class ResourceType(IntEnum):
    BUFFER = 0
    TEXTURE1D = 1
    TEXTURE2D = 2
    TEXTURE3D = 3


class Resource:
    def __init__(self, memory: typing.Union[np.ndarray, cp.ndarray, 'Resource']):
        if isinstance(memory, Resource):
            memory = memory._info['memory']
        data = memory.ravel().view(np.uint8) # working with linear byte array
        self.nbytes = data.nbytes
        self._info = { 'memory': data, 'type': 0, 'extent': (data.nbytes,1,1), 'format': 0, 'descriptor_cache': None }

    def get_data(self):
        """
        Gets the internal data backing this resource.
        """
        return self._info['memory']

    def get_data_ptr(self):
        if hasattr(self.get_data(), "__cuda_array_interface__"):
            return self.get_data().__cuda_array_interface__['data'][0]  # cuda ptr
        return self.get_data().__array_interface__['data'][0]  # numpy cpu ptr

    def is_gpu(self) -> bool:
        return hasattr(self.get_data(), "__cuda_array_interface__")
    
    def is_cpu(self) -> bool:
        return not self.is_gpu()

    def gpu(self):
        if self.is_gpu():
            return self
        c = copy.copy(self)  # shallow copy
        c._info = dict(self._info)  # create a copy of the dict.
        c._info['memory'] = cp.asarray(c._info['memory'], dtype=cp.uint8)
        c._info['descriptor_cache'] = None  # clear cached descriptor with old memory
        return c

    def cpu(self):
        if not self.is_gpu():
            return self
        c = copy.copy(self)  # shallow copy
        c._info = dict(self._info)  # create a copy of the dict.
        c._info['memory'] = c._info['memory'].get() # get a numpy version
        c._info['descriptor_cache'] = None  # clear cached descriptor with old memory
        return c

    def clone(self):
        c = copy.copy(self)  # shallow copy
        c._info = dict(self._info)  # create a copy of the dict.
        c._info['memory'] = c._info['memory'].copy() # get a new copy
        c._info['descriptor_cache'] = None  # clear cached descriptor with old memory
        return c

    def descriptor(self):
        if self._info['descriptor_cache'] is not None:
            return self._info['descriptor_cache']
        descriptor = cp.zeros(8, dtype=cp.uint32)  # type | format | extent | ptr
        descriptor[0] = cp.uint32(self._info['type'])
        descriptor[1] = cp.uint32(self._info['format'])
        descriptor[2:5] = cp.array(self._info['extent'], dtype=cp.uint32)
        ptr = self.get_data_ptr()
        descriptor[6] = ptr & 0xFFFFFFFF
        descriptor[7] = ptr >> 32
        self._info['descriptor_cache'] = descriptor
        return descriptor

    def copy_from(self, data):
        """
        Copies the data from a source (numpy or cupy) to this array.
        Sources implementing __cuda_array_interface__ can also be used.
        """
        if self.is_gpu():  # move data to gpu
            if hasattr(data, "__cuda_array_interface__"):
                data = cp.asarray(data, dtype=cp.uint8)
            else:
                data = cp.frombuffer(data, dtype=cp.uint8)
        else:  # grant data on the cpu
            if hasattr(data, "__cuda_array_interface__"):
                data = cp.asarray(data, dtype=cp.uint8).get()
            else:
                data = np.frombuffer(data, dtype=np.uint8)
        self.get_data()[:] = data
        return self

    def copy_to(self, data):
        """
        Copies the data to a source (numpy, GPUArray or cupy) from this array.
        Sources implementing __cuda_array_interface__ can also be used.
        """
        if hasattr(data, "__cuda_array_interface__"):
            if self.is_gpu():
                memory = self.get_data()
            else:
                memory = cp.asarray(self.get_data(), dtype=cp.uint8)
        else:
            if self.is_gpu():
                memory = self.get_data().get()  # numpy
            else:
                memory = self.get_data()
        data.ravel().view(np.uint8)[:] = memory
        return self

    def cupy(self, dtype = None):
        if dtype is None:
            dtype = cp.uint8
        return self.gpu().get_data().view(dtype)

    def numpy(self, dtype = None):
        if dtype is None:
            dtype = np.uint8
        return self.cpu().get_data().view(dtype)

    def __repr__(self):
        return str(self._info['memory'])
    
    def __str__(self):
        return repr(self)

    def size_in_bytes(self):
        return self._info['memory'].nbytes

    def format(self):
        return self._info['format']

    def dimensions(self):
        return self._info['extent']

    def width(self):
        return self.dimensions()[0]

    def height(self):
        return self.dimensions()[1]

    def depth(self):
        return self.dimensions()[2]

    def resource_type(self) -> ResourceType:
        return self._info['type']


class Buffer(Resource):
    def __init__(self, memory: typing.Union[np.ndarray, cp.ndarray, 'Resource']):
        super(Buffer, self).__init__(memory)


class StructBuffer(Buffer):
    """
    Represents a struct using data as backed buffer. The layout of the buffer is specified in the construction.
    Allows to pass a struct info in a kernel, for instance.
    """
    def __init__(self, memory: typing.Union[np.ndarray, cp.ndarray, 'Resource'], layout: StructLayout):
        super(StructBuffer, self).__init__(memory)
        self._info['layout'] = layout

    def get_layout(self):
        return self._info['layout']

    def __getattr__(self, key):
        if key in ['_info', 'nbytes']:
            return super(StructBuffer, self).__getattribute__(key)
        return self.get_layout().get_value(self.get_data(), key)

    def __setattr__(self, key, value):
        if key in ['_info', 'nbytes']:
            super(StructBuffer, self).__setattr__(key, value)
            return
        self.get_layout().set_value(self.get_data(), key, value)


class IndexBuffer(Buffer):
    def __init__(self, memory: typing.Union[np.ndarray, cp.ndarray, 'Resource']):
        super(IndexBuffer, self).__init__(memory)

    def __len__(self):
        return self.size_in_bytes() // 4

    def __getitem__(self, index):
        data = self.get_data().view(np.int32)
        if isinstance(index, int):
            return data[index]
        # treat as slice
        start, end, step = index
        assert step is None or step == 1, "Only contiguous slices are supported"
        if end == len(self): # full slice
            return self
        return IndexBuffer(data[start:end])

    def __setitem__(self, key, value):
        data = self.get_data().view(np.int32)
        if isinstance(key, int):
            data[key] = value
            return
        # treat as slice
        start, end, step = key.start, key.end, key.step
        assert step is None or step == 1, "Only contiguous slices are supported"
        data[start:end] = value


class StructuredBuffer(Resource):
    """
    Represents a structured buffer using data as backed buffer. The layout of each element of the buffer is specified in the construction.
    Allows to pass a struct array to a kernel, for instance.
    """
    def __init__(self, memory: typing.Union[np.ndarray, cp.ndarray, 'Resource'], layout: StructLayout):
        super(StructuredBuffer, self).__init__(memory)
        assert memory.nbytes % layout.get_size() == 0, "Layout size is incompatible with data size"
        self._info['layout'] = layout

    def get_layout(self):
        return self._info['layout']

    def __getitem__(self, index):
        data = self.get_data()
        layout = self.get_layout()
        if isinstance(index, int):
            if index >= self.size_in_bytes() // self.get_layout().get_size():
                raise StopIteration()
            return StructBuffer(data[index*layout.get_size(): (index+1)*layout.get_size()], layout)
        # treat as slice
        start, end, step = index
        assert step is None or step == 1, "Only contiguous slices are supported"
        if end == data.nbytes // layout.get_size(): # full slice
            return self
        return StructuredBuffer(data[start*layout.get_size(): end*layout.get_size()], layout)

    def __len__(self):
        return self.get_data().nbytes // self.get_layout().get_size()


class Format(IntEnum):
    UNKNOWN = 0
    FLOAT1 = 4
    FLOAT2 = 5
    FLOAT3 = 6
    FLOAT4 = 7
    INT1 = 8
    INT2 = 9
    INT3 = 10
    INT4 = 11
    UINT1 = 12
    UINT2 = 13
    UINT3 = 14
    UINT4 = 15
    RGBA = 16


__FORMAT_2_TYPES__ = {
    Format.UNKNOWN: int,
    Format.FLOAT1: mds.float1,
    Format.FLOAT2: mds.float2,
    Format.FLOAT3: mds.float3,
    Format.FLOAT4: mds.float4,
    Format.INT1: mds.int1,
    Format.INT2: mds.int2,
    Format.INT3: mds.int3,
    Format.INT4: mds.int4,
    Format.UINT1: mds.uint1,
    Format.UINT2: mds.uint2,
    Format.UINT3: mds.uint3,
    Format.UINT4: mds.uint4
}


def compute_element_stride(format: Format)-> int:
    if format == Format.RGBA:
        return 4
    return 4 * (int(format) % 3 + 1)


def compute_element_type(format: Format) -> type:
    if format == Format.RGBA:
        return int
    return __FORMAT_2_TYPES__[format]


class Image (Resource):
    """
    Represents an image resource that can be indexed in a multidimensional form.
    Each texel (1D, 2D) or voxel (3D) is of a specific type given by format.
    Sizes is specified (width, height, depth) for a 3D image, for instance,
    or (width, height) for a 2D image.
    """
    def __init__(self,
                 memory: typing.Union[np.ndarray, cp.ndarray, 'Resource'],
                 sizes: typing.Tuple,
                 format: Format):
        super(Image, self).__init__(memory)
        assert memory.nbytes == compute_element_stride(format) * math.prod(sizes), "Data memory not compatible with image layout"
        self._info['extent'] = [sizes[i] if i < len(sizes) else 1 for i in range(3)]
        self._info['format'] = format
        self._info['type'] = len(sizes)

    def __getitem__(self, coord):
        """
        Gets the image element at specific coordinate.
        Each coordinate is from 0 to the specific image dimension - 1
        """
        assert len(coord) == self.resource_type(), "Coordinates with wrong dimension"
        assert all(isinstance(x, int) for x in coord), "Coordinates must be integer"
        px, py, pz = 0, 0, 0
        if self.resource_type() == ResourceType.TEXTURE1D:
            px, = coord
        elif self.resource_type() == ResourceType.TEXTURE2D:
            px, py = coord
        else:
            px, py, pz = coord
        width, height, depth = self.dimensions()
        element_stride = compute_element_stride(self.format())
        element_type = compute_element_type(self.format())
        index = (pz * (width * height) + py * width + px)*element_stride
        return from_bytes(element_type, self.get_data()[index: index+element_stride])

    def __setitem__(self, coord, value):
        """
        Sets the image element at specific coordinate.
        Each coordinate is from 0 to the specific image dimension - 1
        """
        assert len(coord) == self.resource_type(), "Coordinates with wrong dimension"
        assert all(isinstance(x, int) for x in coord), "Coordinates must be integer"
        px, py, pz = 0, 0, 0
        if self.resource_type() == ResourceType.TEXTURE1D:
            px, = coord
        elif self.resource_type() == ResourceType.TEXTURE2D:
            px, py = coord
        else:
            px, py, pz = coord
        width, height, depth = self.dimensions()
        element_stride = compute_element_stride(self.format())
        element_type = compute_element_type(self.format())
        index = (pz * (width * height) + py * width + px) * element_stride
        if self.is_gpu():
            self.get_data()[index: index + element_stride] = cp.frombuffer(to_bytes(element_type, value), cp.uint8)
        else:
            self.get_data()[index: index + element_stride] = np.frombuffer(to_bytes(element_type, value), np.uint8)


def create_buffer(size: int) -> Buffer:
    """
    Creates a raw bytes buffer on the GPU.
    :param size: number of bytes to allocate
    :return: a Buffer instance
    """
    return Buffer(cp.zeros((size,), dtype=cp.uint8))


def create_buffer_wrap(data) -> Buffer:
    """
    Creates a buffer wrapping an existent memory (gpu or cpu).
    This method is zero-copy since the buffer refers to the same memory.
    """
    return Buffer(data)


def create_struct_buffer(**fields) -> StructBuffer:
    """
    Creates a struct buffer with specific fields to define the layout.
    :param fields: Ordered sequence of field_name=field_type to represent each element of the layout.
    :return: A StructBuffer with the required layout and gpu memory created.
    """
    layout = StructLayout(**fields)
    data = create_buffer(layout.get_size())
    return StructBuffer(data, layout)


def create_structured_buffer(count: int, **fields) -> StructuredBuffer:
    """
    Creates a structured buffer with specific fields to define the layout of each element.
    Memory is created sufficiently large to store the specific count of elements with that layout.
    :param fields: Ordered sequence of field_name=field_type to represent each element of the layout.
    :return: A StructuredBuffer with the required layout and gpu memory created.
    """
    layout = StructLayout(**fields)
    data = create_buffer(layout.get_size() * count)
    return StructuredBuffer(data, layout)


def create_image(sizes: typing.Tuple, format: Format) -> Image:
    """
    Creates an image with specific shape of the array. The dimension of the image is determined by the number of dimensions in shape.
    The image element is specified in format. This can be types int, float or any of the hlsl types, ie. float3, int4.
    """
    size = compute_element_stride(format) * math.prod(sizes)
    data = create_buffer(size)
    return Image(data, sizes, format)


def create_kernel(code_path: str, threads_per_block: int = 1024) -> CUDAKernel:
    """
    Creates an instance of a kernel with specific block dimension. The CUDAKernel object is a simplified kernel supporting
    only one-dimensional grids of one-dimensional blocks. The threads_per_block is the dimension of a block.
    The kernel can be executed using the dispatch method specifying the grid dimension and the arguments.
    """
    return CUDAKernel(code_path, threads_per_block)

