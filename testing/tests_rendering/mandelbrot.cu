#include "rendering.h"

__device__ float2 csqr(float2 z){
    return float2(z.x*z.x - z.y*z.y, 2*z.x*z.y);
}

__device__ float4 Color(float m){
    m = min(m, 1000.0);
    float s = 2*(1.0 / (1 + exp(-m)) - 0.5);
    return float4(0, 1.0-s, fmod(s+0.5f, 1.0f), 1.0f);
}

struct MandelbrotInfo{
    int N;
    float_2 C;
};

extern "C" __global__
void kernel(int width, int height, ConstantBuffer<MandelbrotInfo> &info, Texture2D<float4> &render_target) {
    int tid = blockDim.x * blockIdx.x + threadIdx.x;
    int py = tid / width;
    int px = tid % width;
    if (py >= height)
    return;

    float2 Z = float2((px + 0.5)/width, (py + 0.5)/height) * 2.0 - 1.0;

    for (int i=0; i<info->N; i++)
        Z = csqr(Z) + info->C;

    render_target.Save(int2(px, py), Color(dot(Z, Z)));
}
