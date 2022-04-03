import numpy as np
import cupy as cp
import itertools
import math

def flatten(args):
    if np.isscalar(args):
        return [args]
    return list(itertools.chain(*[flatten(l) for l in args]))


REGISTERED_TYPES = {
    np.float32: {},
    np.int32: {},
    np.uint32: {},
    np.bool8: {}
}


def tensor_from_np(array):
    dtype = array.dtype.type
    shape = array.shape
    return REGISTERED_TYPES[dtype][shape](array)


def from_bytes(type, bytes):
    if type == bool:
        return np.bool8(bytes).item()
    if type == int:
        return np.int32(bytes).item()
    if type == float:
        return np.float32(bytes).item()
    try:
        dtype, shape = type.get_type_info()
        return tensor_from_np(np.frombuffer(bytes, dtype=dtype).reshape(shape))
    except Exception:
        raise Exception('Not supported type')


def to_bytes(type, value):
    if type == bool:
        return np.bool8(value).tobytes()
    if type == int:
        if value > 0x7fffffff:
            value = value - 4294967296
        return np.int32(value).tobytes()
    if type == float:
        return np.float32(value).tobytes()
    try:
        na : np.ndarray = value.data
        return na.tobytes()
    except Exception:
        raise Exception('Not supported type')


def size_in_bytes(type):
    if type == bool:
        return 1
    if type == int:
        return 4
    if type == float:
        return 4
    try:
        dtype, shape = type.get_type_info()
        return dtype().itemsize * math.prod(shape)
    except Exception:
        raise Exception('Not supported type')


class tensor_backed:
    def __init__(self, data, type = None, shape = None):
        if isinstance(data, np.ndarray):
            self.data = data
        else:
            data = flatten(data)
            if len(data) == 1:   # promotion case
                data = data * math.prod(shape)  # expand the single value to number of elements
            self.data = np.asarray(data, dtype=type).reshape(shape)

    def cupy(self):
        return cp.asarray(self.data)

    def __iter__(self):
        return iter(self.data)

    def __add__(self, other):
        return tensor_from_np(self.data + other.data)

    def __sub__(self, other):
        return tensor_from_np(self.data - other.data)

    def __rmul__(self, other):
        return tensor_from_np(self.data * other.data)

    def __rdiv__(self, other):
        return tensor_from_np(self.data / other.data)

    def __rmod__(self, other):
        return tensor_from_np(self.data % other.data)

    def __eq__(self, other):
        return tensor_from_np(self.data == other.data)

    def __neg__(self):
        return tensor_from_np(-self.data)

    def __ne__(self, other):
        return tensor_from_np(self.data != other.data)

    def __lt__(self, other):
        return tensor_from_np(self.data < other.data)

    def __le__(self, other):
        return tensor_from_np(self.data <= other.data)

    def __gt__(self, other):
        return tensor_from_np(self.data > other.data)

    def __ge__(self, other):
        return tensor_from_np(self.data >= other.data)

    __ATTRIBUTE_TO_INDEX__ = {
        'x': (0,), 'y': (0,), 'z': (0,), 'w': (0,),
        'r': (0,), 'g': (0,), 'b': (0,), 'a': (0,),
        '_m00': (0, 0), '_m01': (0, 1), '_m02': (0, 2), '_m03': (0, 3),
        '_m10': (1, 0), '_m11': (1, 1), '_m12': (1, 2), '_m13': (1, 3),
        '_m20': (2, 0), '_m21': (2, 1), '_m22': (2, 2), '_m23': (2, 3),
        '_m30': (3, 0), '_m31': (3, 1), '_m32': (3, 2), '_m33': (3, 3),
    }

    def __getattr__(self, key):
        if key == 'data':
            return super(tensor_backed, self).__getattribute__(key)
        assert key in tensor_backed.__ATTRIBUTE_TO_INDEX__, "Invalid attribute for the vector"
        index = tensor_backed.__ATTRIBUTE_TO_INDEX__[key]
        return self.data[index]

    def __setattr__(self, key, value):
        if key == 'data':
            super(tensor_backed, self).__setattr__(key, value)
            return
        assert key in tensor_backed.__ATTRIBUTE_TO_INDEX__, "Invalid attribute for the vector"
        index = tensor_backed.__ATTRIBUTE_TO_INDEX__[key]
        self.data[index] = value

    def __repr__(self):
        if len(self.data.shape) == 1: # Vector
            return f"{type(self).__name__}({','.join(str(x) for x in self.data)})"
        args = '\t,'.join(','.join(str(x) for x in r) for r in self.data)
        return f"{type(self).__name__}({args})"

    def __str__(self):
        return repr(self)

