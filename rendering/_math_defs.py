from ._mathbase import *


class float1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(1,)  # type and shape
    def __init__(self, *args):
        super(float1, self).__init__(args, np.float32, (1,))
REGISTERED_TYPES[np.float32][(1,)] = float1

        
class float1x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(1, 1)  # type and shape
    def __init__(self, *args):
        super(float1x1, self).__init__(args, np.float32, (1,1))
REGISTERED_TYPES[np.float32][(1,1)] = float1x1
    
                    
class float2x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(2, 1)  # type and shape
    def __init__(self, *args):
        super(float2x1, self).__init__(args, np.float32, (2,1))
REGISTERED_TYPES[np.float32][(2,1)] = float2x1
    
                    
class float3x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(3, 1)  # type and shape
    def __init__(self, *args):
        super(float3x1, self).__init__(args, np.float32, (3,1))
REGISTERED_TYPES[np.float32][(3,1)] = float3x1
    
                    
class float4x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(4, 1)  # type and shape
    def __init__(self, *args):
        super(float4x1, self).__init__(args, np.float32, (4,1))
REGISTERED_TYPES[np.float32][(4,1)] = float4x1
    
                    
class float2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(2,)  # type and shape
    def __init__(self, *args):
        super(float2, self).__init__(args, np.float32, (2,))
REGISTERED_TYPES[np.float32][(2,)] = float2

        
class float1x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(1, 2)  # type and shape
    def __init__(self, *args):
        super(float1x2, self).__init__(args, np.float32, (1,2))
REGISTERED_TYPES[np.float32][(1,2)] = float1x2
    
                    
class float2x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(2, 2)  # type and shape
    def __init__(self, *args):
        super(float2x2, self).__init__(args, np.float32, (2,2))
REGISTERED_TYPES[np.float32][(2,2)] = float2x2
    
                    
class float3x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(3, 2)  # type and shape
    def __init__(self, *args):
        super(float3x2, self).__init__(args, np.float32, (3,2))
REGISTERED_TYPES[np.float32][(3,2)] = float3x2
    
                    
class float4x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(4, 2)  # type and shape
    def __init__(self, *args):
        super(float4x2, self).__init__(args, np.float32, (4,2))
REGISTERED_TYPES[np.float32][(4,2)] = float4x2
    
                    
class float3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(3,)  # type and shape
    def __init__(self, *args):
        super(float3, self).__init__(args, np.float32, (3,))
REGISTERED_TYPES[np.float32][(3,)] = float3

        
class float1x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(1, 3)  # type and shape
    def __init__(self, *args):
        super(float1x3, self).__init__(args, np.float32, (1,3))
REGISTERED_TYPES[np.float32][(1,3)] = float1x3
    
                    
class float2x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(2, 3)  # type and shape
    def __init__(self, *args):
        super(float2x3, self).__init__(args, np.float32, (2,3))
REGISTERED_TYPES[np.float32][(2,3)] = float2x3
    
                    
class float3x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(3, 3)  # type and shape
    def __init__(self, *args):
        super(float3x3, self).__init__(args, np.float32, (3,3))
REGISTERED_TYPES[np.float32][(3,3)] = float3x3
    
                    
class float4x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(4, 3)  # type and shape
    def __init__(self, *args):
        super(float4x3, self).__init__(args, np.float32, (4,3))
REGISTERED_TYPES[np.float32][(4,3)] = float4x3
    
                    
class float4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(4,)  # type and shape
    def __init__(self, *args):
        super(float4, self).__init__(args, np.float32, (4,))
REGISTERED_TYPES[np.float32][(4,)] = float4

        
class float1x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(1, 4)  # type and shape
    def __init__(self, *args):
        super(float1x4, self).__init__(args, np.float32, (1,4))
REGISTERED_TYPES[np.float32][(1,4)] = float1x4
    
                    
class float2x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(2, 4)  # type and shape
    def __init__(self, *args):
        super(float2x4, self).__init__(args, np.float32, (2,4))
REGISTERED_TYPES[np.float32][(2,4)] = float2x4
    
                    
class float3x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(3, 4)  # type and shape
    def __init__(self, *args):
        super(float3x4, self).__init__(args, np.float32, (3,4))
REGISTERED_TYPES[np.float32][(3,4)] = float3x4
    
                    
class float4x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.float32,(4, 4)  # type and shape
    def __init__(self, *args):
        super(float4x4, self).__init__(args, np.float32, (4,4))
REGISTERED_TYPES[np.float32][(4,4)] = float4x4
    
                    
class int1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(1,)  # type and shape
    def __init__(self, *args):
        super(int1, self).__init__(args, np.int32, (1,))
REGISTERED_TYPES[np.int32][(1,)] = int1

        
class int1x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(1, 1)  # type and shape
    def __init__(self, *args):
        super(int1x1, self).__init__(args, np.int32, (1,1))
REGISTERED_TYPES[np.int32][(1,1)] = int1x1
    
                    
class int2x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(2, 1)  # type and shape
    def __init__(self, *args):
        super(int2x1, self).__init__(args, np.int32, (2,1))
REGISTERED_TYPES[np.int32][(2,1)] = int2x1
    
                    
class int3x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(3, 1)  # type and shape
    def __init__(self, *args):
        super(int3x1, self).__init__(args, np.int32, (3,1))
REGISTERED_TYPES[np.int32][(3,1)] = int3x1
    
                    
class int4x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(4, 1)  # type and shape
    def __init__(self, *args):
        super(int4x1, self).__init__(args, np.int32, (4,1))
REGISTERED_TYPES[np.int32][(4,1)] = int4x1
    
                    
class int2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(2,)  # type and shape
    def __init__(self, *args):
        super(int2, self).__init__(args, np.int32, (2,))
REGISTERED_TYPES[np.int32][(2,)] = int2

        
class int1x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(1, 2)  # type and shape
    def __init__(self, *args):
        super(int1x2, self).__init__(args, np.int32, (1,2))
REGISTERED_TYPES[np.int32][(1,2)] = int1x2
    
                    
class int2x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(2, 2)  # type and shape
    def __init__(self, *args):
        super(int2x2, self).__init__(args, np.int32, (2,2))
REGISTERED_TYPES[np.int32][(2,2)] = int2x2
    
                    
class int3x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(3, 2)  # type and shape
    def __init__(self, *args):
        super(int3x2, self).__init__(args, np.int32, (3,2))
REGISTERED_TYPES[np.int32][(3,2)] = int3x2
    
                    
class int4x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(4, 2)  # type and shape
    def __init__(self, *args):
        super(int4x2, self).__init__(args, np.int32, (4,2))
REGISTERED_TYPES[np.int32][(4,2)] = int4x2
    
                    
class int3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(3,)  # type and shape
    def __init__(self, *args):
        super(int3, self).__init__(args, np.int32, (3,))
REGISTERED_TYPES[np.int32][(3,)] = int3

        
class int1x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(1, 3)  # type and shape
    def __init__(self, *args):
        super(int1x3, self).__init__(args, np.int32, (1,3))
REGISTERED_TYPES[np.int32][(1,3)] = int1x3
    
                    
class int2x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(2, 3)  # type and shape
    def __init__(self, *args):
        super(int2x3, self).__init__(args, np.int32, (2,3))
REGISTERED_TYPES[np.int32][(2,3)] = int2x3
    
                    
class int3x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(3, 3)  # type and shape
    def __init__(self, *args):
        super(int3x3, self).__init__(args, np.int32, (3,3))
REGISTERED_TYPES[np.int32][(3,3)] = int3x3
    
                    
class int4x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(4, 3)  # type and shape
    def __init__(self, *args):
        super(int4x3, self).__init__(args, np.int32, (4,3))
REGISTERED_TYPES[np.int32][(4,3)] = int4x3
    
                    
class int4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(4,)  # type and shape
    def __init__(self, *args):
        super(int4, self).__init__(args, np.int32, (4,))
REGISTERED_TYPES[np.int32][(4,)] = int4

        
class int1x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(1, 4)  # type and shape
    def __init__(self, *args):
        super(int1x4, self).__init__(args, np.int32, (1,4))
REGISTERED_TYPES[np.int32][(1,4)] = int1x4
    
                    
class int2x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(2, 4)  # type and shape
    def __init__(self, *args):
        super(int2x4, self).__init__(args, np.int32, (2,4))
REGISTERED_TYPES[np.int32][(2,4)] = int2x4
    
                    
class int3x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(3, 4)  # type and shape
    def __init__(self, *args):
        super(int3x4, self).__init__(args, np.int32, (3,4))
REGISTERED_TYPES[np.int32][(3,4)] = int3x4
    
                    
class int4x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.int32,(4, 4)  # type and shape
    def __init__(self, *args):
        super(int4x4, self).__init__(args, np.int32, (4,4))
REGISTERED_TYPES[np.int32][(4,4)] = int4x4
    
                    
class uint1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(1,)  # type and shape
    def __init__(self, *args):
        super(uint1, self).__init__(args, np.uint32, (1,))
REGISTERED_TYPES[np.uint32][(1,)] = uint1

        
class uint1x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(1, 1)  # type and shape
    def __init__(self, *args):
        super(uint1x1, self).__init__(args, np.uint32, (1,1))
REGISTERED_TYPES[np.uint32][(1,1)] = uint1x1
    
                    
class uint2x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(2, 1)  # type and shape
    def __init__(self, *args):
        super(uint2x1, self).__init__(args, np.uint32, (2,1))
REGISTERED_TYPES[np.uint32][(2,1)] = uint2x1
    
                    
class uint3x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(3, 1)  # type and shape
    def __init__(self, *args):
        super(uint3x1, self).__init__(args, np.uint32, (3,1))
REGISTERED_TYPES[np.uint32][(3,1)] = uint3x1
    
                    
class uint4x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(4, 1)  # type and shape
    def __init__(self, *args):
        super(uint4x1, self).__init__(args, np.uint32, (4,1))
REGISTERED_TYPES[np.uint32][(4,1)] = uint4x1
    
                    
class uint2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(2,)  # type and shape
    def __init__(self, *args):
        super(uint2, self).__init__(args, np.uint32, (2,))
REGISTERED_TYPES[np.uint32][(2,)] = uint2

        
class uint1x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(1, 2)  # type and shape
    def __init__(self, *args):
        super(uint1x2, self).__init__(args, np.uint32, (1,2))
REGISTERED_TYPES[np.uint32][(1,2)] = uint1x2
    
                    
class uint2x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(2, 2)  # type and shape
    def __init__(self, *args):
        super(uint2x2, self).__init__(args, np.uint32, (2,2))
REGISTERED_TYPES[np.uint32][(2,2)] = uint2x2
    
                    
class uint3x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(3, 2)  # type and shape
    def __init__(self, *args):
        super(uint3x2, self).__init__(args, np.uint32, (3,2))
REGISTERED_TYPES[np.uint32][(3,2)] = uint3x2
    
                    
class uint4x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(4, 2)  # type and shape
    def __init__(self, *args):
        super(uint4x2, self).__init__(args, np.uint32, (4,2))
REGISTERED_TYPES[np.uint32][(4,2)] = uint4x2
    
                    
class uint3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(3,)  # type and shape
    def __init__(self, *args):
        super(uint3, self).__init__(args, np.uint32, (3,))
REGISTERED_TYPES[np.uint32][(3,)] = uint3

        
class uint1x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(1, 3)  # type and shape
    def __init__(self, *args):
        super(uint1x3, self).__init__(args, np.uint32, (1,3))
REGISTERED_TYPES[np.uint32][(1,3)] = uint1x3
    
                    
class uint2x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(2, 3)  # type and shape
    def __init__(self, *args):
        super(uint2x3, self).__init__(args, np.uint32, (2,3))
REGISTERED_TYPES[np.uint32][(2,3)] = uint2x3
    
                    
class uint3x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(3, 3)  # type and shape
    def __init__(self, *args):
        super(uint3x3, self).__init__(args, np.uint32, (3,3))
REGISTERED_TYPES[np.uint32][(3,3)] = uint3x3
    
                    
class uint4x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(4, 3)  # type and shape
    def __init__(self, *args):
        super(uint4x3, self).__init__(args, np.uint32, (4,3))
REGISTERED_TYPES[np.uint32][(4,3)] = uint4x3
    
                    
class uint4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(4,)  # type and shape
    def __init__(self, *args):
        super(uint4, self).__init__(args, np.uint32, (4,))
REGISTERED_TYPES[np.uint32][(4,)] = uint4

        
class uint1x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(1, 4)  # type and shape
    def __init__(self, *args):
        super(uint1x4, self).__init__(args, np.uint32, (1,4))
REGISTERED_TYPES[np.uint32][(1,4)] = uint1x4
    
                    
class uint2x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(2, 4)  # type and shape
    def __init__(self, *args):
        super(uint2x4, self).__init__(args, np.uint32, (2,4))
REGISTERED_TYPES[np.uint32][(2,4)] = uint2x4
    
                    
class uint3x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(3, 4)  # type and shape
    def __init__(self, *args):
        super(uint3x4, self).__init__(args, np.uint32, (3,4))
REGISTERED_TYPES[np.uint32][(3,4)] = uint3x4
    
                    
class uint4x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.uint32,(4, 4)  # type and shape
    def __init__(self, *args):
        super(uint4x4, self).__init__(args, np.uint32, (4,4))
REGISTERED_TYPES[np.uint32][(4,4)] = uint4x4
    
                    
class bool1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(1,)  # type and shape
    def __init__(self, *args):
        super(bool1, self).__init__(args, np.bool8, (1,))
REGISTERED_TYPES[np.bool8][(1,)] = bool1

        
class bool1x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(1, 1)  # type and shape
    def __init__(self, *args):
        super(bool1x1, self).__init__(args, np.bool8, (1,1))
REGISTERED_TYPES[np.bool8][(1,1)] = bool1x1
    
                    
class bool2x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(2, 1)  # type and shape
    def __init__(self, *args):
        super(bool2x1, self).__init__(args, np.bool8, (2,1))
REGISTERED_TYPES[np.bool8][(2,1)] = bool2x1
    
                    
class bool3x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(3, 1)  # type and shape
    def __init__(self, *args):
        super(bool3x1, self).__init__(args, np.bool8, (3,1))
REGISTERED_TYPES[np.bool8][(3,1)] = bool3x1
    
                    
class bool4x1(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(4, 1)  # type and shape
    def __init__(self, *args):
        super(bool4x1, self).__init__(args, np.bool8, (4,1))
REGISTERED_TYPES[np.bool8][(4,1)] = bool4x1
    
                    
class bool2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(2,)  # type and shape
    def __init__(self, *args):
        super(bool2, self).__init__(args, np.bool8, (2,))
REGISTERED_TYPES[np.bool8][(2,)] = bool2

        
class bool1x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(1, 2)  # type and shape
    def __init__(self, *args):
        super(bool1x2, self).__init__(args, np.bool8, (1,2))
REGISTERED_TYPES[np.bool8][(1,2)] = bool1x2
    
                    
class bool2x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(2, 2)  # type and shape
    def __init__(self, *args):
        super(bool2x2, self).__init__(args, np.bool8, (2,2))
REGISTERED_TYPES[np.bool8][(2,2)] = bool2x2
    
                    
class bool3x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(3, 2)  # type and shape
    def __init__(self, *args):
        super(bool3x2, self).__init__(args, np.bool8, (3,2))
REGISTERED_TYPES[np.bool8][(3,2)] = bool3x2
    
                    
class bool4x2(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(4, 2)  # type and shape
    def __init__(self, *args):
        super(bool4x2, self).__init__(args, np.bool8, (4,2))
REGISTERED_TYPES[np.bool8][(4,2)] = bool4x2
    
                    
class bool3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(3,)  # type and shape
    def __init__(self, *args):
        super(bool3, self).__init__(args, np.bool8, (3,))
REGISTERED_TYPES[np.bool8][(3,)] = bool3

        
class bool1x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(1, 3)  # type and shape
    def __init__(self, *args):
        super(bool1x3, self).__init__(args, np.bool8, (1,3))
REGISTERED_TYPES[np.bool8][(1,3)] = bool1x3
    
                    
class bool2x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(2, 3)  # type and shape
    def __init__(self, *args):
        super(bool2x3, self).__init__(args, np.bool8, (2,3))
REGISTERED_TYPES[np.bool8][(2,3)] = bool2x3
    
                    
class bool3x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(3, 3)  # type and shape
    def __init__(self, *args):
        super(bool3x3, self).__init__(args, np.bool8, (3,3))
REGISTERED_TYPES[np.bool8][(3,3)] = bool3x3
    
                    
class bool4x3(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(4, 3)  # type and shape
    def __init__(self, *args):
        super(bool4x3, self).__init__(args, np.bool8, (4,3))
REGISTERED_TYPES[np.bool8][(4,3)] = bool4x3
    
                    
class bool4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(4,)  # type and shape
    def __init__(self, *args):
        super(bool4, self).__init__(args, np.bool8, (4,))
REGISTERED_TYPES[np.bool8][(4,)] = bool4

        
class bool1x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(1, 4)  # type and shape
    def __init__(self, *args):
        super(bool1x4, self).__init__(args, np.bool8, (1,4))
REGISTERED_TYPES[np.bool8][(1,4)] = bool1x4
    
                    
class bool2x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(2, 4)  # type and shape
    def __init__(self, *args):
        super(bool2x4, self).__init__(args, np.bool8, (2,4))
REGISTERED_TYPES[np.bool8][(2,4)] = bool2x4
    
                    
class bool3x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(3, 4)  # type and shape
    def __init__(self, *args):
        super(bool3x4, self).__init__(args, np.bool8, (3,4))
REGISTERED_TYPES[np.bool8][(3,4)] = bool3x4
    
                    
class bool4x4(tensor_backed):
    @staticmethod
    def get_type_info():
        return np.bool8,(4, 4)  # type and shape
    def __init__(self, *args):
        super(bool4x4, self).__init__(args, np.bool8, (4,4))
REGISTERED_TYPES[np.bool8][(4,4)] = bool4x4
    
                    
def abs(x):
    return tensor_from_np(np.abs(x.data))
        
def acos(x):
    return tensor_from_np(np.arccos(x.data))
        
def all(x):
    return tensor_from_np(np.all(x.data))
        
def any(x):
    return tensor_from_np(np.any(x.data))
        
def asin(x):
    return tensor_from_np(np.arcsin(x.data))
        
def atan(x):
    return tensor_from_np(np.arctan(x.data))
        
def ceil(x):
    return tensor_from_np(np.ceil(x.data))
        
def cos(x):
    return tensor_from_np(np.cos(x.data))
        
def cosh(x):
    return tensor_from_np(np.cosh(x.data))
        
def degrees(x):
    return tensor_from_np(np.degrees(x.data))
        
def exp(x):
    return tensor_from_np(np.exp(x.data))
        
def exp2(x):
    return tensor_from_np(np.exp2(x.data))
        
def floor(x):
    return tensor_from_np(np.floor(x.data))
        
def isfinite(x):
    return tensor_from_np(np.isfinite(x.data))
        
def isinf(x):
    return tensor_from_np(np.isinf(x.data))
        
def isnan(x):
    return tensor_from_np(np.isnan(x.data))
        
def log(x):
    return tensor_from_np(np.log(x.data))
        
def log10(x):
    return tensor_from_np(np.log10(x.data))
        
def log2(x):
    return tensor_from_np(np.log2(x.data))
        
def radians(x):
    return tensor_from_np(np.radians(x.data))
        
def rcp(x):
    return tensor_from_np(np.reciprocal(x.data))
        
def round(x):
    return tensor_from_np(np.around(x.data))
        
def sign(x):
    return tensor_from_np(np.sign(x.data))
        
def sin(x):
    return tensor_from_np(np.sin(x.data))
        
def sinh(x):
    return tensor_from_np(np.sinh(x.data))
        
def sqrt(x):
    return tensor_from_np(np.sqrt(x.data))
        
def tan(x):
    return tensor_from_np(np.tan(x.data))
        
def tanh(x):
    return tensor_from_np(np.tahn(x.data))
        
def trunc(x):
    return tensor_from_np(np.trunc(x.data))
        
def fmod(x, y):
    return tensor_from_np(np.fmod(x.data, y.data))
            
def ldexp(x, y):
    return tensor_from_np(np.ldexp(x.data, y.data))
            
def pow(x, y):
    return tensor_from_np(np.power(x.data, y.data))
            
def atan2(y, x):
    return tensor_from_np(np.arctan2(y.data, x.data))
            
def dot(x, y):
    assert len(x.data.shape) == 1 and len(y.data.shape) == 1, "Both arguments should be equal size vectors"
    return np.dot(x.data, y.data)
def cross(x, y):
    assert x.data.shape == (3,) and y.data.shape == (3,), "Both arguments should be 3-d vectors"
    return tensor_from_np(np.cross(x.data, y.data))
def mul(x, y):
    return tensor_from_np(x.data @ y.data)
    