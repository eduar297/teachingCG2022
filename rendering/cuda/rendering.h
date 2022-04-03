// Image object

#ifndef RENDERING_H
#define RENDERING_H

#include "hlsl_math.h"

template<typename D>
__device__ int3 _full_coord(D x)
{
    return int3(0, 0, 0); // not used
}
template<> __device__ int3 _full_coord<int>(int x){
    return int3(x, 0, 0);
}
template<> __device__ int3 _full_coord<int1>(int1 x){
    return int3(x.x, 0, 0);
}
template<> __device__ int3 _full_coord<int2>(int2 x){
    return int3(x.x, x.y, 0);
}
template<> __device__ int3 _full_coord<int3>(int3 x){
    return x;
}

enum FORMAT {
    UNKNOWN = 0,
    FLOAT1 = 4,
    FLOAT2 = 5,
    FLOAT3 = 6,
    FLOAT4 = 7,
    INT1 = 8,
    INT2 = 9,
    INT3 = 10,
    INT4 = 11,
    UINT1 = 12,
    UINT2 = 13,
    UINT3 = 14,
    UINT4 = 15,
    RGBA = 16
};

// Image format converter
__device__ float4 from_rgba_to_float4(int c){
    char b = c & 255;
    char g = (c >> 8) & 255;
    char r = (c >> 16) & 255;
    char a = (c >> 24);
    return float4(r/255.0f, g/255.0f, b/255.0f, a/255.0f);
}

__device__ int4 from_rgba_to_int4(int c){
    char b = c & 255;
    char g = (c >> 8) & 255;
    char r = (c >> 16) & 255;
    char a = (c >> 24);
    return int4(r, g, b, a);
}

__device__ int to_rgba(float4 c){
    int r = max(0, min(255, int(c.x * 255)));
    int g = max(0, min(255, int(c.y * 255)));
    int b = max(0, min(255, int(c.z * 255)));
    int a = max(0, min(255, int(c.w * 255)));
    return a << 24 | r << 16 | g << 8 | b;
}

__device__ int to_rgba(int4 c){
    char r = max(0, min(255, c.x));
    char g = max(0, min(255, c.y));
    char b = max(0, min(255, c.z));
    char a = max(0, min(255, c.w));
    return a << 24 | r << 16 | g << 8 | b;
}

__device__ void _load_texel(void* data, int format, void* vec, int components) {
    if (format == 0)
    return;
    float* fdata;
    if (format == 16)
    {
        int rgba = *((int*)data);
        float4 color = from_rgba_to_float4(rgba);
        fdata = (float*)&color;
    }
    else
        fdata = (float*)data;
    int c = (format & 3) + 1;
    memcpy((void*)vec, (void*)fdata, 4*min(c, components));
}

__device__ void _save_texel(void* data, int format, void* vec, int components) {
    if (format == 0)
    return;
    if (format == 16)
    {
        float4 color = float4(0, 0, 0, 0);
        memcpy((void*)&color, vec, components * 4);
        int rgba = to_rgba(color);
        *((int*)data) = rgba;
        return;
    }
    int c = (format & 3) + 1;
    memcpy(data, vec, 4*min(c, components));
}

template<typename T, typename D, int Dim>
struct ResourceBase {
    int type;
    int _format;
    int3 _dim;
    void* _memory;

    __device__ T _UncheckedLoad(const int3 &c) {
        int element_stride = 0;
        if (_format == 16)
            element_stride = 4;
        else
            element_stride = ((_format & 3) + 1)*4;
        int offset = (c.z * _dim.x * _dim.y + c.y * _dim.x + c.x)*element_stride;
        T result (0);
        _load_texel((void*)((char*)_memory + offset), _format, (void*)&result, sizeof(T)/4);
        return result;
    }

    __device__ void _UncheckedSave(const int3 &c, T value) {
        int element_stride = 0;
        if (_format == 16)
            element_stride = 4;
        else
            element_stride = ((_format & 3) + 1)*4;
        int offset = (c.z * _dim.x * _dim.y + c.y * _dim.x + c.x)*element_stride;
        _save_texel((void*)((char*)_memory + offset), _format, (void*)&value, sizeof(T)/4);
    }

    __device__ T Load(const D &coord) const {
        if (type != Dim)
        return T(); // invalid resource binding, Silent return
        int3 c = _full_coord(coord);
        if (any(c < int3(0)) || any(c >= _dim))
        return T(); // Silent mode
        return _UncheckedLoad(c);
    }

    __device__ void Save(const D &coord, T value){
        if (type != Dim)
        return; // invalid resource binding, Silent return
        int3 c = _full_coord(coord);
        if (any(c < int3(0)) || any(c >= _dim))
        return; // Silent mode
        _UncheckedSave(c, value);
    }

    __device__ T operator[] (const D &coord) const {
        return Load(coord);
    }
};

template<typename T>
struct ConstantBuffer {
    int type;
    int _format;
    int3 _dim;
    void* _memory;
    __device__ T* operator -> () {
        return ((T*)_memory);
    }
};

template<typename T>
struct StructuredBuffer : public ResourceBase<T, int, 0> {
    __device__ T& operator[] (int index) {
        return ((T*)_memory)[index];
    }
};


template<typename T>
struct Texture1D : public ResourceBase<T, int, 1> {};

template<typename T>
struct Texture2D : public ResourceBase<T, int2, 2> {};

template<typename T>
struct Texture3D : public ResourceBase<T, int3, 3> {};


#endif