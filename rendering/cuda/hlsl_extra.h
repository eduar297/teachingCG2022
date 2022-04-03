#define float4 float_4
#define float3 float_3
#define float2 float_2
#define float1 float_1
#define int4 int_4
#define int3 int_3
#define int2 int_2
#define int1 int_1
#define uint4 uint_4
#define uint3 uint_3
#define uint2 uint_2
#define uint1 uint_1


//#define STRUCT_ALIGN(n) __align__(n)
//
//
////#if defined(__CUDACC__) // NVCC
////   #define STRUCT_ALIGN(n) __align__(n)
////#elif defined(__GNUC__) // GCC
////  #define STRUCT_ALIGN(n) __attribute__((aligned(n)))
////#elif defined(_MSC_VER) // MSVC
////  #define STRUCT_ALIGN(n) __declspec(align(n))
////#else
////  #error "Please provide a definition for MY_ALIGN macro for your host compiler!"
////#endif