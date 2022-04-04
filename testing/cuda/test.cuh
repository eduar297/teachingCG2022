#include "test.h"

struct float_4 {
    float x, y, z, w;
    __device__ float_4(float x, float y, float z, float w){
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = w;
    }

    __device__ operator float4 () {
        return make_float4(this->x, this->y, this->z, this->w);
    }

    __device__ float_4(float v){
        new (this) float_4(v,v,v,v);
    }

    __device__ float_4(const float4 &v){
        this->x = v.x;
        this->y = v.y;
        this->z = v.z;
        this->w = v.w;
    }
};

__device__ float_4 sin(float_4 v){
    return float_4(sin(v.x), sin(v.y), sin(v.z), sin(v.w));
}

__device__ float_4 operator * (const float_4 &a, const float_4 &b){
    return float_4(a.x*b.x, a.y*b.y, a.z*b.z, a.w*b.w);
}

__device__ float_4 operator + (const float_4 &a, const float_4 &b){
    return float_4(a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w);
}


__device__ float4 f(float4 x, float4 y){
    return x*x + sin(y) + 2.3 ;
}

__device__ float g(float x) {
    return x + 1;
}

//#define float4 float_4

extern "C" __global__
void kernel(const float4* x1, const float4* x2, float4* y) {
    int tid = blockDim.x * blockIdx.x + threadIdx.x;
    y[tid] = get_alpha() * f(x1[tid], x2[tid]) + 1;
}

