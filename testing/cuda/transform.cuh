#include "rendering.h"

struct VIn {
    float3 P; //float pad;
    float3 C; //float pad1;
};

struct VOut {
    float4 P;
    float3 C;
};

extern "C" __global__
void kernel(int N, StructuredBuffer<VIn> &x, const float4x4 &transform, StructuredBuffer<VOut> &y) {
    int tid = blockDim.x * blockIdx.x + threadIdx.x;
    if (tid >= N)
    return;
    y[tid].P = mul(float4(x[tid].P, 1.0f), transform);
    y[tid].C = x[tid].C;
}

