#ifndef HLSL_MATH_H
#define HLSL_MATH_H
#include "math_functions.h"
#include "hlsl_extra.h"
#define uint unsigned int
struct int_1;
struct int1x1;
struct int_2;
struct int1x2;
struct int_3;
struct int1x3;
struct int_4;
struct int1x4;
struct int2x1;
struct int2x2;
struct int2x3;
struct int2x4;
struct int3x1;
struct int3x2;
struct int3x3;
struct int3x4;
struct int4x1;
struct int4x2;
struct int4x3;
struct int4x4;
struct float_1;
struct float1x1;
struct float_2;
struct float1x2;
struct float_3;
struct float1x3;
struct float_4;
struct float1x4;
struct float2x1;
struct float2x2;
struct float2x3;
struct float2x4;
struct float3x1;
struct float3x2;
struct float3x3;
struct float3x4;
struct float4x1;
struct float4x2;
struct float4x3;
struct float4x4;
struct uint_1;
struct uint1x1;
struct uint_2;
struct uint1x2;
struct uint_3;
struct uint1x3;
struct uint_4;
struct uint1x4;
struct uint2x1;
struct uint2x2;
struct uint2x3;
struct uint2x4;
struct uint3x1;
struct uint3x2;
struct uint3x3;
struct uint3x4;
struct uint4x1;
struct uint4x2;
struct uint4x3;
struct uint4x4;
	__device__ int __TRASH_int_1;
struct int_1{
	int x;
	__device__ __host__ int& operator[](int idx) {
			if(idx == 0) return this->x;
			return __TRASH_int_1; // Silent return ... valid for HLSL 
	}
	__device__ __host__ int_1(int x){
		this->x=x;
	}
	__device__ __host__ int_1(const float_1 &v);
	__device__ __host__ int_1(const uint_1 &v);
};
	__device__ __host__ int_1 operator -(const int_1 &a) { return int_1(-a.x); }
	__device__ __host__ int_1 operator +(const int_1 &a) { return int_1(+a.x); }
	__device__ __host__ int_1 operator ~(const int_1 &a) { return int_1(~a.x); }
	__device__ __host__  int_1 operator !(const int_1 &a) { return int_1(a.x==0?1:0); }
	__device__ __host__ int_1 operator ==(const int_1 &a, const int_1 &b) { return int_1((a.x == b.x)?1:0); }
	__device__ __host__ int_1 operator !=(const int_1 &a, const int_1 &b) { return int_1((a.x != b.x)?1:0); }
	__device__ __host__ int_1 operator <(const int_1 &a, const int_1 &b) { return int_1((a.x < b.x)?1:0); }
	__device__ __host__ int_1 operator <=(const int_1 &a, const int_1 &b) { return int_1((a.x <= b.x)?1:0); }
	__device__ __host__ int_1 operator >=(const int_1 &a, const int_1 &b) { return int_1((a.x >= b.x)?1:0); }
	__device__ __host__ int_1 operator >(const int_1 &a, const int_1 &b) { return int_1((a.x > b.x)?1:0); }
	__device__ __host__ int_1 operator +(const int_1& a, const int_1& b) { return int_1(a.x + b.x); }
	__device__ __host__ int_1 operator +(const int_1& a, int b) { return int_1(a.x + b); }
	__device__ __host__ int_1 operator +(int a, const int_1& b) { return int_1(a + b.x); }
	__device__ __host__ int_1 operator *(const int_1& a, const int_1& b) { return int_1(a.x * b.x); }
	__device__ __host__ int_1 operator *(const int_1& a, int b) { return int_1(a.x * b); }
	__device__ __host__ int_1 operator *(int a, const int_1& b) { return int_1(a * b.x); }
	__device__ __host__ int_1 operator -(const int_1& a, const int_1& b) { return int_1(a.x - b.x); }
	__device__ __host__ int_1 operator -(const int_1& a, int b) { return int_1(a.x - b); }
	__device__ __host__ int_1 operator -(int a, const int_1& b) { return int_1(a - b.x); }
	__device__ __host__ int_1 operator /(const int_1& a, const int_1& b) { return int_1(a.x / b.x); }
	__device__ __host__ int_1 operator /(const int_1& a, int b) { return int_1(a.x / b); }
	__device__ __host__ int_1 operator /(int a, const int_1& b) { return int_1(a / b.x); }
	__device__ __host__ int_1 operator %(const int_1& a, const int_1& b) { return int_1(a.x % b.x); }
	__device__ __host__ int_1 operator %(const int_1& a, int b) { return int_1(a.x % b); }
	__device__ __host__ int_1 operator %(int a, const int_1& b) { return int_1(a % b.x); }
	__device__ __host__ int_1 operator &(const int_1& a, const int_1& b) { return int_1(a.x & b.x); }
	__device__ __host__ int_1 operator &(const int_1& a, int b) { return int_1(a.x & b); }
	__device__ __host__ int_1 operator &(int a, const int_1& b) { return int_1(a & b.x); }
	__device__ __host__ int_1 operator |(const int_1& a, const int_1& b) { return int_1(a.x | b.x); }
	__device__ __host__ int_1 operator |(const int_1& a, int b) { return int_1(a.x | b); }
	__device__ __host__ int_1 operator |(int a, const int_1& b) { return int_1(a | b.x); }
	__device__ __host__ int_1 operator ^(const int_1& a, const int_1& b) { return int_1(a.x ^ b.x); }
	__device__ __host__ int_1 operator ^(const int_1& a, int b) { return int_1(a.x ^ b); }
	__device__ __host__ int_1 operator ^(int a, const int_1& b) { return int_1(a ^ b.x); }

	__device__ int __TRASH_int_2;
struct int_2{
	int x;
	int y;
	__device__ __host__ int& operator[](int idx) {
			if(idx == 0) return this->x;
			if(idx == 1) return this->y;
			return __TRASH_int_2; // Silent return ... valid for HLSL 
	}
	__device__ __host__ int_2(int x,int y){
		this->x=x;
		this->y=y;
	}
	__device__ __host__ int_2(int v) { new (this) int_2(v,v); }
	__device__ __host__ int_2(int_1 v, int last) { new (this) int_2(v.x,last); }
	__device__ __host__ operator int_1() const { return int_1(this->x); }
	__device__ __host__ int_2(const float_2 &v);
	__device__ __host__ int_2(const uint_2 &v);
};
	__device__ __host__ int_2 operator -(const int_2 &a) { return int_2(-a.x,-a.y); }
	__device__ __host__ int_2 operator +(const int_2 &a) { return int_2(+a.x,+a.y); }
	__device__ __host__ int_2 operator ~(const int_2 &a) { return int_2(~a.x,~a.y); }
	__device__ __host__  int_2 operator !(const int_2 &a) { return int_2(a.x==0?1:0,a.y==0?1:0); }
	__device__ __host__ int_2 operator ==(const int_2 &a, const int_2 &b) { return int_2((a.x == b.x)?1:0, (a.y == b.y)?1:0); }
	__device__ __host__ int_2 operator !=(const int_2 &a, const int_2 &b) { return int_2((a.x != b.x)?1:0, (a.y != b.y)?1:0); }
	__device__ __host__ int_2 operator <(const int_2 &a, const int_2 &b) { return int_2((a.x < b.x)?1:0, (a.y < b.y)?1:0); }
	__device__ __host__ int_2 operator <=(const int_2 &a, const int_2 &b) { return int_2((a.x <= b.x)?1:0, (a.y <= b.y)?1:0); }
	__device__ __host__ int_2 operator >=(const int_2 &a, const int_2 &b) { return int_2((a.x >= b.x)?1:0, (a.y >= b.y)?1:0); }
	__device__ __host__ int_2 operator >(const int_2 &a, const int_2 &b) { return int_2((a.x > b.x)?1:0, (a.y > b.y)?1:0); }
	__device__ __host__ int_2 operator +(const int_2& a, const int_2& b) { return int_2(a.x + b.x,a.y + b.y); }
	__device__ __host__ int_2 operator +(const int_2& a, int b) { return int_2(a.x + b,a.y + b); }
	__device__ __host__ int_2 operator +(int a, const int_2& b) { return int_2(a + b.x,a + b.y); }
	__device__ __host__ int_2 operator *(const int_2& a, const int_2& b) { return int_2(a.x * b.x,a.y * b.y); }
	__device__ __host__ int_2 operator *(const int_2& a, int b) { return int_2(a.x * b,a.y * b); }
	__device__ __host__ int_2 operator *(int a, const int_2& b) { return int_2(a * b.x,a * b.y); }
	__device__ __host__ int_2 operator -(const int_2& a, const int_2& b) { return int_2(a.x - b.x,a.y - b.y); }
	__device__ __host__ int_2 operator -(const int_2& a, int b) { return int_2(a.x - b,a.y - b); }
	__device__ __host__ int_2 operator -(int a, const int_2& b) { return int_2(a - b.x,a - b.y); }
	__device__ __host__ int_2 operator /(const int_2& a, const int_2& b) { return int_2(a.x / b.x,a.y / b.y); }
	__device__ __host__ int_2 operator /(const int_2& a, int b) { return int_2(a.x / b,a.y / b); }
	__device__ __host__ int_2 operator /(int a, const int_2& b) { return int_2(a / b.x,a / b.y); }
	__device__ __host__ int_2 operator %(const int_2& a, const int_2& b) { return int_2(a.x % b.x,a.y % b.y); }
	__device__ __host__ int_2 operator %(const int_2& a, int b) { return int_2(a.x % b,a.y % b); }
	__device__ __host__ int_2 operator %(int a, const int_2& b) { return int_2(a % b.x,a % b.y); }
	__device__ __host__ int_2 operator &(const int_2& a, const int_2& b) { return int_2(a.x & b.x,a.y & b.y); }
	__device__ __host__ int_2 operator &(const int_2& a, int b) { return int_2(a.x & b,a.y & b); }
	__device__ __host__ int_2 operator &(int a, const int_2& b) { return int_2(a & b.x,a & b.y); }
	__device__ __host__ int_2 operator |(const int_2& a, const int_2& b) { return int_2(a.x | b.x,a.y | b.y); }
	__device__ __host__ int_2 operator |(const int_2& a, int b) { return int_2(a.x | b,a.y | b); }
	__device__ __host__ int_2 operator |(int a, const int_2& b) { return int_2(a | b.x,a | b.y); }
	__device__ __host__ int_2 operator ^(const int_2& a, const int_2& b) { return int_2(a.x ^ b.x,a.y ^ b.y); }
	__device__ __host__ int_2 operator ^(const int_2& a, int b) { return int_2(a.x ^ b,a.y ^ b); }
	__device__ __host__ int_2 operator ^(int a, const int_2& b) { return int_2(a ^ b.x,a ^ b.y); }

	__device__ int __TRASH_int_3;
struct int_3{
	int x;
	int y;
	int z;
	__device__ __host__ int_2 get_xy() { return int_2(this->x, this->y); }
	__device__ __host__ int& operator[](int idx) {
			if(idx == 0) return this->x;
			if(idx == 1) return this->y;
			if(idx == 2) return this->z;
			return __TRASH_int_3; // Silent return ... valid for HLSL 
	}
	__device__ __host__ int_3(int x,int y,int z){
		this->x=x;
		this->y=y;
		this->z=z;
	}
	__device__ __host__ int_3(int v) { new (this) int_3(v,v,v); }
	__device__ __host__ int_3(int_2 v, int last) { new (this) int_3(v.x,v.y,last); }
	__device__ __host__ operator int_1() const { return int_1(this->x); }
	__device__ __host__ operator int_2() const { return int_2(this->x, this->y); }
	__device__ __host__ int_3(const float_3 &v);
	__device__ __host__ int_3(const uint_3 &v);
};
	__device__ __host__ int_3 operator -(const int_3 &a) { return int_3(-a.x,-a.y,-a.z); }
	__device__ __host__ int_3 operator +(const int_3 &a) { return int_3(+a.x,+a.y,+a.z); }
	__device__ __host__ int_3 operator ~(const int_3 &a) { return int_3(~a.x,~a.y,~a.z); }
	__device__ __host__  int_3 operator !(const int_3 &a) { return int_3(a.x==0?1:0,a.y==0?1:0,a.z==0?1:0); }
	__device__ __host__ int_3 operator ==(const int_3 &a, const int_3 &b) { return int_3((a.x == b.x)?1:0, (a.y == b.y)?1:0, (a.z == b.z)?1:0); }
	__device__ __host__ int_3 operator !=(const int_3 &a, const int_3 &b) { return int_3((a.x != b.x)?1:0, (a.y != b.y)?1:0, (a.z != b.z)?1:0); }
	__device__ __host__ int_3 operator <(const int_3 &a, const int_3 &b) { return int_3((a.x < b.x)?1:0, (a.y < b.y)?1:0, (a.z < b.z)?1:0); }
	__device__ __host__ int_3 operator <=(const int_3 &a, const int_3 &b) { return int_3((a.x <= b.x)?1:0, (a.y <= b.y)?1:0, (a.z <= b.z)?1:0); }
	__device__ __host__ int_3 operator >=(const int_3 &a, const int_3 &b) { return int_3((a.x >= b.x)?1:0, (a.y >= b.y)?1:0, (a.z >= b.z)?1:0); }
	__device__ __host__ int_3 operator >(const int_3 &a, const int_3 &b) { return int_3((a.x > b.x)?1:0, (a.y > b.y)?1:0, (a.z > b.z)?1:0); }
	__device__ __host__ int_3 operator +(const int_3& a, const int_3& b) { return int_3(a.x + b.x,a.y + b.y,a.z + b.z); }
	__device__ __host__ int_3 operator +(const int_3& a, int b) { return int_3(a.x + b,a.y + b,a.z + b); }
	__device__ __host__ int_3 operator +(int a, const int_3& b) { return int_3(a + b.x,a + b.y,a + b.z); }
	__device__ __host__ int_3 operator *(const int_3& a, const int_3& b) { return int_3(a.x * b.x,a.y * b.y,a.z * b.z); }
	__device__ __host__ int_3 operator *(const int_3& a, int b) { return int_3(a.x * b,a.y * b,a.z * b); }
	__device__ __host__ int_3 operator *(int a, const int_3& b) { return int_3(a * b.x,a * b.y,a * b.z); }
	__device__ __host__ int_3 operator -(const int_3& a, const int_3& b) { return int_3(a.x - b.x,a.y - b.y,a.z - b.z); }
	__device__ __host__ int_3 operator -(const int_3& a, int b) { return int_3(a.x - b,a.y - b,a.z - b); }
	__device__ __host__ int_3 operator -(int a, const int_3& b) { return int_3(a - b.x,a - b.y,a - b.z); }
	__device__ __host__ int_3 operator /(const int_3& a, const int_3& b) { return int_3(a.x / b.x,a.y / b.y,a.z / b.z); }
	__device__ __host__ int_3 operator /(const int_3& a, int b) { return int_3(a.x / b,a.y / b,a.z / b); }
	__device__ __host__ int_3 operator /(int a, const int_3& b) { return int_3(a / b.x,a / b.y,a / b.z); }
	__device__ __host__ int_3 operator %(const int_3& a, const int_3& b) { return int_3(a.x % b.x,a.y % b.y,a.z % b.z); }
	__device__ __host__ int_3 operator %(const int_3& a, int b) { return int_3(a.x % b,a.y % b,a.z % b); }
	__device__ __host__ int_3 operator %(int a, const int_3& b) { return int_3(a % b.x,a % b.y,a % b.z); }
	__device__ __host__ int_3 operator &(const int_3& a, const int_3& b) { return int_3(a.x & b.x,a.y & b.y,a.z & b.z); }
	__device__ __host__ int_3 operator &(const int_3& a, int b) { return int_3(a.x & b,a.y & b,a.z & b); }
	__device__ __host__ int_3 operator &(int a, const int_3& b) { return int_3(a & b.x,a & b.y,a & b.z); }
	__device__ __host__ int_3 operator |(const int_3& a, const int_3& b) { return int_3(a.x | b.x,a.y | b.y,a.z | b.z); }
	__device__ __host__ int_3 operator |(const int_3& a, int b) { return int_3(a.x | b,a.y | b,a.z | b); }
	__device__ __host__ int_3 operator |(int a, const int_3& b) { return int_3(a | b.x,a | b.y,a | b.z); }
	__device__ __host__ int_3 operator ^(const int_3& a, const int_3& b) { return int_3(a.x ^ b.x,a.y ^ b.y,a.z ^ b.z); }
	__device__ __host__ int_3 operator ^(const int_3& a, int b) { return int_3(a.x ^ b,a.y ^ b,a.z ^ b); }
	__device__ __host__ int_3 operator ^(int a, const int_3& b) { return int_3(a ^ b.x,a ^ b.y,a ^ b.z); }

	__device__ int __TRASH_int_4;
struct int_4{
	int x;
	int y;
	int z;
	int w;
	__device__ __host__ int_2 get_xy() { return int_2(this->x, this->y); }
	__device__ __host__ int_3 get_xyz() { return int_3(this->x, this->y, this->z); }
	__device__ __host__ int& operator[](int idx) {
			if(idx == 0) return this->x;
			if(idx == 1) return this->y;
			if(idx == 2) return this->z;
			if(idx == 3) return this->w;
			return __TRASH_int_4; // Silent return ... valid for HLSL 
	}
	__device__ __host__ int_4(int x,int y,int z,int w){
		this->x=x;
		this->y=y;
		this->z=z;
		this->w=w;
	}
	__device__ __host__ int_4(int v) { new (this) int_4(v,v,v,v); }
	__device__ __host__ int_4(int_3 v, int last) { new (this) int_4(v.x,v.y,v.z,last); }
	__device__ __host__ operator int_1() const { return int_1(this->x); }
	__device__ __host__ operator int_2() const { return int_2(this->x, this->y); }
	__device__ __host__ operator int_3() const { return int_3(this->x, this->y, this->z); }
	__device__ __host__ int_4(const float_4 &v);
	__device__ __host__ int_4(const uint_4 &v);
};
	__device__ __host__ int_4 operator -(const int_4 &a) { return int_4(-a.x,-a.y,-a.z,-a.w); }
	__device__ __host__ int_4 operator +(const int_4 &a) { return int_4(+a.x,+a.y,+a.z,+a.w); }
	__device__ __host__ int_4 operator ~(const int_4 &a) { return int_4(~a.x,~a.y,~a.z,~a.w); }
	__device__ __host__  int_4 operator !(const int_4 &a) { return int_4(a.x==0?1:0,a.y==0?1:0,a.z==0?1:0,a.w==0?1:0); }
	__device__ __host__ int_4 operator ==(const int_4 &a, const int_4 &b) { return int_4((a.x == b.x)?1:0, (a.y == b.y)?1:0, (a.z == b.z)?1:0, (a.w == b.w)?1:0); }
	__device__ __host__ int_4 operator !=(const int_4 &a, const int_4 &b) { return int_4((a.x != b.x)?1:0, (a.y != b.y)?1:0, (a.z != b.z)?1:0, (a.w != b.w)?1:0); }
	__device__ __host__ int_4 operator <(const int_4 &a, const int_4 &b) { return int_4((a.x < b.x)?1:0, (a.y < b.y)?1:0, (a.z < b.z)?1:0, (a.w < b.w)?1:0); }
	__device__ __host__ int_4 operator <=(const int_4 &a, const int_4 &b) { return int_4((a.x <= b.x)?1:0, (a.y <= b.y)?1:0, (a.z <= b.z)?1:0, (a.w <= b.w)?1:0); }
	__device__ __host__ int_4 operator >=(const int_4 &a, const int_4 &b) { return int_4((a.x >= b.x)?1:0, (a.y >= b.y)?1:0, (a.z >= b.z)?1:0, (a.w >= b.w)?1:0); }
	__device__ __host__ int_4 operator >(const int_4 &a, const int_4 &b) { return int_4((a.x > b.x)?1:0, (a.y > b.y)?1:0, (a.z > b.z)?1:0, (a.w > b.w)?1:0); }
	__device__ __host__ int_4 operator +(const int_4& a, const int_4& b) { return int_4(a.x + b.x,a.y + b.y,a.z + b.z,a.w + b.w); }
	__device__ __host__ int_4 operator +(const int_4& a, int b) { return int_4(a.x + b,a.y + b,a.z + b,a.w + b); }
	__device__ __host__ int_4 operator +(int a, const int_4& b) { return int_4(a + b.x,a + b.y,a + b.z,a + b.w); }
	__device__ __host__ int_4 operator *(const int_4& a, const int_4& b) { return int_4(a.x * b.x,a.y * b.y,a.z * b.z,a.w * b.w); }
	__device__ __host__ int_4 operator *(const int_4& a, int b) { return int_4(a.x * b,a.y * b,a.z * b,a.w * b); }
	__device__ __host__ int_4 operator *(int a, const int_4& b) { return int_4(a * b.x,a * b.y,a * b.z,a * b.w); }
	__device__ __host__ int_4 operator -(const int_4& a, const int_4& b) { return int_4(a.x - b.x,a.y - b.y,a.z - b.z,a.w - b.w); }
	__device__ __host__ int_4 operator -(const int_4& a, int b) { return int_4(a.x - b,a.y - b,a.z - b,a.w - b); }
	__device__ __host__ int_4 operator -(int a, const int_4& b) { return int_4(a - b.x,a - b.y,a - b.z,a - b.w); }
	__device__ __host__ int_4 operator /(const int_4& a, const int_4& b) { return int_4(a.x / b.x,a.y / b.y,a.z / b.z,a.w / b.w); }
	__device__ __host__ int_4 operator /(const int_4& a, int b) { return int_4(a.x / b,a.y / b,a.z / b,a.w / b); }
	__device__ __host__ int_4 operator /(int a, const int_4& b) { return int_4(a / b.x,a / b.y,a / b.z,a / b.w); }
	__device__ __host__ int_4 operator %(const int_4& a, const int_4& b) { return int_4(a.x % b.x,a.y % b.y,a.z % b.z,a.w % b.w); }
	__device__ __host__ int_4 operator %(const int_4& a, int b) { return int_4(a.x % b,a.y % b,a.z % b,a.w % b); }
	__device__ __host__ int_4 operator %(int a, const int_4& b) { return int_4(a % b.x,a % b.y,a % b.z,a % b.w); }
	__device__ __host__ int_4 operator &(const int_4& a, const int_4& b) { return int_4(a.x & b.x,a.y & b.y,a.z & b.z,a.w & b.w); }
	__device__ __host__ int_4 operator &(const int_4& a, int b) { return int_4(a.x & b,a.y & b,a.z & b,a.w & b); }
	__device__ __host__ int_4 operator &(int a, const int_4& b) { return int_4(a & b.x,a & b.y,a & b.z,a & b.w); }
	__device__ __host__ int_4 operator |(const int_4& a, const int_4& b) { return int_4(a.x | b.x,a.y | b.y,a.z | b.z,a.w | b.w); }
	__device__ __host__ int_4 operator |(const int_4& a, int b) { return int_4(a.x | b,a.y | b,a.z | b,a.w | b); }
	__device__ __host__ int_4 operator |(int a, const int_4& b) { return int_4(a | b.x,a | b.y,a | b.z,a | b.w); }
	__device__ __host__ int_4 operator ^(const int_4& a, const int_4& b) { return int_4(a.x ^ b.x,a.y ^ b.y,a.z ^ b.z,a.w ^ b.w); }
	__device__ __host__ int_4 operator ^(const int_4& a, int b) { return int_4(a.x ^ b,a.y ^ b,a.z ^ b,a.w ^ b); }
	__device__ __host__ int_4 operator ^(int a, const int_4& b) { return int_4(a ^ b.x,a ^ b.y,a ^ b.z,a ^ b.w); }

struct int1x1{
	int _m00;
	__device__ __host__ int_1 operator[] (int row) const {
			if(row == 0) return int_1(_m00);
			return int_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int1x1(int _m00){
		this->_m00=_m00;
	}
	__device__ __host__ operator float1x1() const;
	__device__ __host__ operator uint1x1() const;
};
	__device__ __host__ int1x1 operator -(const int1x1 &a) { return int1x1(-a._m00); }
	__device__ __host__ int1x1 operator +(const int1x1 &a) { return int1x1(+a._m00); }
	__device__ __host__ int1x1 operator ~(const int1x1 &a) { return int1x1(~a._m00); }
	__device__ __host__ int1x1 operator !(const int1x1 &a) { return int1x1(a._m00==0?1:0); }
	__device__ __host__ int1x1 operator +(const int1x1 &a, const int1x1 &b) { return int1x1(a._m00 + b._m00); }
	__device__ __host__ int1x1 operator *(const int1x1 &a, const int1x1 &b) { return int1x1(a._m00 * b._m00); }
	__device__ __host__ int1x1 operator -(const int1x1 &a, const int1x1 &b) { return int1x1(a._m00 - b._m00); }
	__device__ __host__ int1x1 operator /(const int1x1 &a, const int1x1 &b) { return int1x1(a._m00 / b._m00); }
	__device__ __host__ int1x1 operator %(const int1x1 &a, const int1x1 &b) { return int1x1(a._m00 % b._m00); }
	__device__ __host__ int1x1 operator &(const int1x1 &a, const int1x1 &b) { return int1x1(a._m00 & b._m00); }
	__device__ __host__ int1x1 operator |(const int1x1 &a, const int1x1 &b) { return int1x1(a._m00 | b._m00); }
	__device__ __host__ int1x1 operator ^(const int1x1 &a, const int1x1 &b) { return int1x1(a._m00 ^ b._m00); }
	__device__ __host__ int1x1 operator ==(const int1x1 &a, const int1x1 &b) { return int1x1((a._m00 == b._m00)?1:0); }
	__device__ __host__ int1x1 operator !=(const int1x1 &a, const int1x1 &b) { return int1x1((a._m00 != b._m00)?1:0); }
	__device__ __host__ int1x1 operator <(const int1x1 &a, const int1x1 &b) { return int1x1((a._m00 < b._m00)?1:0); }
	__device__ __host__ int1x1 operator <=(const int1x1 &a, const int1x1 &b) { return int1x1((a._m00 <= b._m00)?1:0); }
	__device__ __host__ int1x1 operator >=(const int1x1 &a, const int1x1 &b) { return int1x1((a._m00 >= b._m00)?1:0); }
	__device__ __host__ int1x1 operator >(const int1x1 &a, const int1x1 &b) { return int1x1((a._m00 > b._m00)?1:0); }

struct int1x2{
	int _m00;
	int _m01;
	__device__ __host__ int_2 operator[] (int row) const {
			if(row == 0) return int_2(_m00, _m01);
			return int_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int1x2(int _m00,int _m01){
		this->_m00=_m00;
		this->_m01=_m01;
	}
	__device__ __host__ int1x2(int v){ new (this) int1x2(v,v); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator float1x2() const;
	__device__ __host__ operator uint1x2() const;
};
	__device__ __host__ int1x2 operator -(const int1x2 &a) { return int1x2(-a._m00,-a._m01); }
	__device__ __host__ int1x2 operator +(const int1x2 &a) { return int1x2(+a._m00,+a._m01); }
	__device__ __host__ int1x2 operator ~(const int1x2 &a) { return int1x2(~a._m00,~a._m01); }
	__device__ __host__ int1x2 operator !(const int1x2 &a) { return int1x2(a._m00==0?1:0,a._m01==0?1:0); }
	__device__ __host__ int1x2 operator +(const int1x2 &a, const int1x2 &b) { return int1x2(a._m00 + b._m00,a._m01 + b._m01); }
	__device__ __host__ int1x2 operator *(const int1x2 &a, const int1x2 &b) { return int1x2(a._m00 * b._m00,a._m01 * b._m01); }
	__device__ __host__ int1x2 operator -(const int1x2 &a, const int1x2 &b) { return int1x2(a._m00 - b._m00,a._m01 - b._m01); }
	__device__ __host__ int1x2 operator /(const int1x2 &a, const int1x2 &b) { return int1x2(a._m00 / b._m00,a._m01 / b._m01); }
	__device__ __host__ int1x2 operator %(const int1x2 &a, const int1x2 &b) { return int1x2(a._m00 % b._m00,a._m01 % b._m01); }
	__device__ __host__ int1x2 operator &(const int1x2 &a, const int1x2 &b) { return int1x2(a._m00 & b._m00,a._m01 & b._m01); }
	__device__ __host__ int1x2 operator |(const int1x2 &a, const int1x2 &b) { return int1x2(a._m00 | b._m00,a._m01 | b._m01); }
	__device__ __host__ int1x2 operator ^(const int1x2 &a, const int1x2 &b) { return int1x2(a._m00 ^ b._m00,a._m01 ^ b._m01); }
	__device__ __host__ int1x2 operator ==(const int1x2 &a, const int1x2 &b) { return int1x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0); }
	__device__ __host__ int1x2 operator !=(const int1x2 &a, const int1x2 &b) { return int1x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0); }
	__device__ __host__ int1x2 operator <(const int1x2 &a, const int1x2 &b) { return int1x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0); }
	__device__ __host__ int1x2 operator <=(const int1x2 &a, const int1x2 &b) { return int1x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0); }
	__device__ __host__ int1x2 operator >=(const int1x2 &a, const int1x2 &b) { return int1x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0); }
	__device__ __host__ int1x2 operator >(const int1x2 &a, const int1x2 &b) { return int1x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0); }

struct int1x3{
	int _m00;
	int _m01;
	int _m02;
	__device__ __host__ int_3 operator[] (int row) const {
			if(row == 0) return int_3(_m00, _m01, _m02);
			return int_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int1x3(int _m00,int _m01,int _m02){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
	}
	__device__ __host__ int1x3(int v){ new (this) int1x3(v,v,v); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int1x2() const { return int1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float1x3() const;
	__device__ __host__ operator uint1x3() const;
};
	__device__ __host__ int1x3 operator -(const int1x3 &a) { return int1x3(-a._m00,-a._m01,-a._m02); }
	__device__ __host__ int1x3 operator +(const int1x3 &a) { return int1x3(+a._m00,+a._m01,+a._m02); }
	__device__ __host__ int1x3 operator ~(const int1x3 &a) { return int1x3(~a._m00,~a._m01,~a._m02); }
	__device__ __host__ int1x3 operator !(const int1x3 &a) { return int1x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0); }
	__device__ __host__ int1x3 operator +(const int1x3 &a, const int1x3 &b) { return int1x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02); }
	__device__ __host__ int1x3 operator *(const int1x3 &a, const int1x3 &b) { return int1x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02); }
	__device__ __host__ int1x3 operator -(const int1x3 &a, const int1x3 &b) { return int1x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02); }
	__device__ __host__ int1x3 operator /(const int1x3 &a, const int1x3 &b) { return int1x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02); }
	__device__ __host__ int1x3 operator %(const int1x3 &a, const int1x3 &b) { return int1x3(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02); }
	__device__ __host__ int1x3 operator &(const int1x3 &a, const int1x3 &b) { return int1x3(a._m00 & b._m00,a._m01 & b._m01,a._m02 & b._m02); }
	__device__ __host__ int1x3 operator |(const int1x3 &a, const int1x3 &b) { return int1x3(a._m00 | b._m00,a._m01 | b._m01,a._m02 | b._m02); }
	__device__ __host__ int1x3 operator ^(const int1x3 &a, const int1x3 &b) { return int1x3(a._m00 ^ b._m00,a._m01 ^ b._m01,a._m02 ^ b._m02); }
	__device__ __host__ int1x3 operator ==(const int1x3 &a, const int1x3 &b) { return int1x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0); }
	__device__ __host__ int1x3 operator !=(const int1x3 &a, const int1x3 &b) { return int1x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0); }
	__device__ __host__ int1x3 operator <(const int1x3 &a, const int1x3 &b) { return int1x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0); }
	__device__ __host__ int1x3 operator <=(const int1x3 &a, const int1x3 &b) { return int1x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0); }
	__device__ __host__ int1x3 operator >=(const int1x3 &a, const int1x3 &b) { return int1x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0); }
	__device__ __host__ int1x3 operator >(const int1x3 &a, const int1x3 &b) { return int1x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0); }

struct int1x4{
	int _m00;
	int _m01;
	int _m02;
	int _m03;
	__device__ __host__ int_4 operator[] (int row) const {
			if(row == 0) return int_4(_m00, _m01, _m02, _m03);
			return int_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int1x4(int _m00,int _m01,int _m02,int _m03){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
	}
	__device__ __host__ int1x4(int v){ new (this) int1x4(v,v,v,v); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int1x2() const { return int1x2(this->_m00, this->_m01); }
	__device__ __host__ operator int1x3() const { return int1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator float1x4() const;
	__device__ __host__ operator uint1x4() const;
};
	__device__ __host__ int1x4 operator -(const int1x4 &a) { return int1x4(-a._m00,-a._m01,-a._m02,-a._m03); }
	__device__ __host__ int1x4 operator +(const int1x4 &a) { return int1x4(+a._m00,+a._m01,+a._m02,+a._m03); }
	__device__ __host__ int1x4 operator ~(const int1x4 &a) { return int1x4(~a._m00,~a._m01,~a._m02,~a._m03); }
	__device__ __host__ int1x4 operator !(const int1x4 &a) { return int1x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0); }
	__device__ __host__ int1x4 operator +(const int1x4 &a, const int1x4 &b) { return int1x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03); }
	__device__ __host__ int1x4 operator *(const int1x4 &a, const int1x4 &b) { return int1x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03); }
	__device__ __host__ int1x4 operator -(const int1x4 &a, const int1x4 &b) { return int1x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03); }
	__device__ __host__ int1x4 operator /(const int1x4 &a, const int1x4 &b) { return int1x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03); }
	__device__ __host__ int1x4 operator %(const int1x4 &a, const int1x4 &b) { return int1x4(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m03 % b._m03); }
	__device__ __host__ int1x4 operator &(const int1x4 &a, const int1x4 &b) { return int1x4(a._m00 & b._m00,a._m01 & b._m01,a._m02 & b._m02,a._m03 & b._m03); }
	__device__ __host__ int1x4 operator |(const int1x4 &a, const int1x4 &b) { return int1x4(a._m00 | b._m00,a._m01 | b._m01,a._m02 | b._m02,a._m03 | b._m03); }
	__device__ __host__ int1x4 operator ^(const int1x4 &a, const int1x4 &b) { return int1x4(a._m00 ^ b._m00,a._m01 ^ b._m01,a._m02 ^ b._m02,a._m03 ^ b._m03); }
	__device__ __host__ int1x4 operator ==(const int1x4 &a, const int1x4 &b) { return int1x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0); }
	__device__ __host__ int1x4 operator !=(const int1x4 &a, const int1x4 &b) { return int1x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0); }
	__device__ __host__ int1x4 operator <(const int1x4 &a, const int1x4 &b) { return int1x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0); }
	__device__ __host__ int1x4 operator <=(const int1x4 &a, const int1x4 &b) { return int1x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0); }
	__device__ __host__ int1x4 operator >=(const int1x4 &a, const int1x4 &b) { return int1x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0); }
	__device__ __host__ int1x4 operator >(const int1x4 &a, const int1x4 &b) { return int1x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0); }

struct int2x1{
	int _m00;
	int _m10;
	__device__ __host__ int_1 operator[] (int row) const {
			if(row == 0) return int_1(_m00);
			if(row == 1) return int_1(_m10);
			return int_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int2x1(int _m00,int _m10){
		this->_m00=_m00;
		this->_m10=_m10;
	}
	__device__ __host__ int2x1(int v){ new (this) int2x1(v,v); }
	__device__ __host__ int2x1(const int1 &r0, const int1 &r1) { new (this) int2x1(r0.x, r1.x); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator float2x1() const;
	__device__ __host__ operator uint2x1() const;
};
	__device__ __host__ int2x1 operator -(const int2x1 &a) { return int2x1(-a._m00,-a._m10); }
	__device__ __host__ int2x1 operator +(const int2x1 &a) { return int2x1(+a._m00,+a._m10); }
	__device__ __host__ int2x1 operator ~(const int2x1 &a) { return int2x1(~a._m00,~a._m10); }
	__device__ __host__ int2x1 operator !(const int2x1 &a) { return int2x1(a._m00==0?1:0,a._m10==0?1:0); }
	__device__ __host__ int2x1 operator +(const int2x1 &a, const int2x1 &b) { return int2x1(a._m00 + b._m00,a._m10 + b._m10); }
	__device__ __host__ int2x1 operator *(const int2x1 &a, const int2x1 &b) { return int2x1(a._m00 * b._m00,a._m10 * b._m10); }
	__device__ __host__ int2x1 operator -(const int2x1 &a, const int2x1 &b) { return int2x1(a._m00 - b._m00,a._m10 - b._m10); }
	__device__ __host__ int2x1 operator /(const int2x1 &a, const int2x1 &b) { return int2x1(a._m00 / b._m00,a._m10 / b._m10); }
	__device__ __host__ int2x1 operator %(const int2x1 &a, const int2x1 &b) { return int2x1(a._m00 % b._m00,a._m10 % b._m10); }
	__device__ __host__ int2x1 operator &(const int2x1 &a, const int2x1 &b) { return int2x1(a._m00 & b._m00,a._m10 & b._m10); }
	__device__ __host__ int2x1 operator |(const int2x1 &a, const int2x1 &b) { return int2x1(a._m00 | b._m00,a._m10 | b._m10); }
	__device__ __host__ int2x1 operator ^(const int2x1 &a, const int2x1 &b) { return int2x1(a._m00 ^ b._m00,a._m10 ^ b._m10); }
	__device__ __host__ int2x1 operator ==(const int2x1 &a, const int2x1 &b) { return int2x1((a._m00 == b._m00)?1:0, (a._m10 == b._m10)?1:0); }
	__device__ __host__ int2x1 operator !=(const int2x1 &a, const int2x1 &b) { return int2x1((a._m00 != b._m00)?1:0, (a._m10 != b._m10)?1:0); }
	__device__ __host__ int2x1 operator <(const int2x1 &a, const int2x1 &b) { return int2x1((a._m00 < b._m00)?1:0, (a._m10 < b._m10)?1:0); }
	__device__ __host__ int2x1 operator <=(const int2x1 &a, const int2x1 &b) { return int2x1((a._m00 <= b._m00)?1:0, (a._m10 <= b._m10)?1:0); }
	__device__ __host__ int2x1 operator >=(const int2x1 &a, const int2x1 &b) { return int2x1((a._m00 >= b._m00)?1:0, (a._m10 >= b._m10)?1:0); }
	__device__ __host__ int2x1 operator >(const int2x1 &a, const int2x1 &b) { return int2x1((a._m00 > b._m00)?1:0, (a._m10 > b._m10)?1:0); }

struct int2x2{
	int _m00;
	int _m01;
	int _m10;
	int _m11;
	__device__ __host__ int_2 operator[] (int row) const {
			if(row == 0) return int_2(_m00, _m01);
			if(row == 1) return int_2(_m10, _m11);
			return int_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int2x2(int _m00,int _m01,int _m10,int _m11){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m10=_m10;
		this->_m11=_m11;
	}
	__device__ __host__ int2x2(int v){ new (this) int2x2(v,v,v,v); }
	__device__ __host__ int2x2(const int2 &r0, const int2 &r1) { new (this) int2x2(r0.x, r0.y, r1.x, r1.y); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int1x2() const { return int1x2(this->_m00, this->_m01); }
	__device__ __host__ operator int2x1() const { return int2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float2x2() const;
	__device__ __host__ operator uint2x2() const;
};
	__device__ __host__ int2x2 operator -(const int2x2 &a) { return int2x2(-a._m00,-a._m01,-a._m10,-a._m11); }
	__device__ __host__ int2x2 operator +(const int2x2 &a) { return int2x2(+a._m00,+a._m01,+a._m10,+a._m11); }
	__device__ __host__ int2x2 operator ~(const int2x2 &a) { return int2x2(~a._m00,~a._m01,~a._m10,~a._m11); }
	__device__ __host__ int2x2 operator !(const int2x2 &a) { return int2x2(a._m00==0?1:0,a._m01==0?1:0,a._m10==0?1:0,a._m11==0?1:0); }
	__device__ __host__ int2x2 operator +(const int2x2 &a, const int2x2 &b) { return int2x2(a._m00 + b._m00,a._m01 + b._m01,a._m10 + b._m10,a._m11 + b._m11); }
	__device__ __host__ int2x2 operator *(const int2x2 &a, const int2x2 &b) { return int2x2(a._m00 * b._m00,a._m01 * b._m01,a._m10 * b._m10,a._m11 * b._m11); }
	__device__ __host__ int2x2 operator -(const int2x2 &a, const int2x2 &b) { return int2x2(a._m00 - b._m00,a._m01 - b._m01,a._m10 - b._m10,a._m11 - b._m11); }
	__device__ __host__ int2x2 operator /(const int2x2 &a, const int2x2 &b) { return int2x2(a._m00 / b._m00,a._m01 / b._m01,a._m10 / b._m10,a._m11 / b._m11); }
	__device__ __host__ int2x2 operator %(const int2x2 &a, const int2x2 &b) { return int2x2(a._m00 % b._m00,a._m01 % b._m01,a._m10 % b._m10,a._m11 % b._m11); }
	__device__ __host__ int2x2 operator &(const int2x2 &a, const int2x2 &b) { return int2x2(a._m00 & b._m00,a._m01 & b._m01,a._m10 & b._m10,a._m11 & b._m11); }
	__device__ __host__ int2x2 operator |(const int2x2 &a, const int2x2 &b) { return int2x2(a._m00 | b._m00,a._m01 | b._m01,a._m10 | b._m10,a._m11 | b._m11); }
	__device__ __host__ int2x2 operator ^(const int2x2 &a, const int2x2 &b) { return int2x2(a._m00 ^ b._m00,a._m01 ^ b._m01,a._m10 ^ b._m10,a._m11 ^ b._m11); }
	__device__ __host__ int2x2 operator ==(const int2x2 &a, const int2x2 &b) { return int2x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0); }
	__device__ __host__ int2x2 operator !=(const int2x2 &a, const int2x2 &b) { return int2x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0); }
	__device__ __host__ int2x2 operator <(const int2x2 &a, const int2x2 &b) { return int2x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0); }
	__device__ __host__ int2x2 operator <=(const int2x2 &a, const int2x2 &b) { return int2x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0); }
	__device__ __host__ int2x2 operator >=(const int2x2 &a, const int2x2 &b) { return int2x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0); }
	__device__ __host__ int2x2 operator >(const int2x2 &a, const int2x2 &b) { return int2x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0); }

struct int2x3{
	int _m00;
	int _m01;
	int _m02;
	int _m10;
	int _m11;
	int _m12;
	__device__ __host__ int_3 operator[] (int row) const {
			if(row == 0) return int_3(_m00, _m01, _m02);
			if(row == 1) return int_3(_m10, _m11, _m12);
			return int_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int2x3(int _m00,int _m01,int _m02,int _m10,int _m11,int _m12){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
	}
	__device__ __host__ int2x3(int v){ new (this) int2x3(v,v,v,v,v,v); }
	__device__ __host__ int2x3(const int3 &r0, const int3 &r1) { new (this) int2x3(r0.x, r0.y, r0.z, r1.x, r1.y, r1.z); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int1x2() const { return int1x2(this->_m00, this->_m01); }
	__device__ __host__ operator int1x3() const { return int1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator int2x1() const { return int2x1(this->_m00, this->_m10); }
	__device__ __host__ operator int2x2() const { return int2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator float2x3() const;
	__device__ __host__ operator uint2x3() const;
};
	__device__ __host__ int2x3 operator -(const int2x3 &a) { return int2x3(-a._m00,-a._m01,-a._m02,-a._m10,-a._m11,-a._m12); }
	__device__ __host__ int2x3 operator +(const int2x3 &a) { return int2x3(+a._m00,+a._m01,+a._m02,+a._m10,+a._m11,+a._m12); }
	__device__ __host__ int2x3 operator ~(const int2x3 &a) { return int2x3(~a._m00,~a._m01,~a._m02,~a._m10,~a._m11,~a._m12); }
	__device__ __host__ int2x3 operator !(const int2x3 &a) { return int2x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0); }
	__device__ __host__ int2x3 operator +(const int2x3 &a, const int2x3 &b) { return int2x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12); }
	__device__ __host__ int2x3 operator *(const int2x3 &a, const int2x3 &b) { return int2x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12); }
	__device__ __host__ int2x3 operator -(const int2x3 &a, const int2x3 &b) { return int2x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12); }
	__device__ __host__ int2x3 operator /(const int2x3 &a, const int2x3 &b) { return int2x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12); }
	__device__ __host__ int2x3 operator %(const int2x3 &a, const int2x3 &b) { return int2x3(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12); }
	__device__ __host__ int2x3 operator &(const int2x3 &a, const int2x3 &b) { return int2x3(a._m00 & b._m00,a._m01 & b._m01,a._m02 & b._m02,a._m10 & b._m10,a._m11 & b._m11,a._m12 & b._m12); }
	__device__ __host__ int2x3 operator |(const int2x3 &a, const int2x3 &b) { return int2x3(a._m00 | b._m00,a._m01 | b._m01,a._m02 | b._m02,a._m10 | b._m10,a._m11 | b._m11,a._m12 | b._m12); }
	__device__ __host__ int2x3 operator ^(const int2x3 &a, const int2x3 &b) { return int2x3(a._m00 ^ b._m00,a._m01 ^ b._m01,a._m02 ^ b._m02,a._m10 ^ b._m10,a._m11 ^ b._m11,a._m12 ^ b._m12); }
	__device__ __host__ int2x3 operator ==(const int2x3 &a, const int2x3 &b) { return int2x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0); }
	__device__ __host__ int2x3 operator !=(const int2x3 &a, const int2x3 &b) { return int2x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0); }
	__device__ __host__ int2x3 operator <(const int2x3 &a, const int2x3 &b) { return int2x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0); }
	__device__ __host__ int2x3 operator <=(const int2x3 &a, const int2x3 &b) { return int2x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0); }
	__device__ __host__ int2x3 operator >=(const int2x3 &a, const int2x3 &b) { return int2x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0); }
	__device__ __host__ int2x3 operator >(const int2x3 &a, const int2x3 &b) { return int2x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0); }

struct int2x4{
	int _m00;
	int _m01;
	int _m02;
	int _m03;
	int _m10;
	int _m11;
	int _m12;
	int _m13;
	__device__ __host__ int_4 operator[] (int row) const {
			if(row == 0) return int_4(_m00, _m01, _m02, _m03);
			if(row == 1) return int_4(_m10, _m11, _m12, _m13);
			return int_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int2x4(int _m00,int _m01,int _m02,int _m03,int _m10,int _m11,int _m12,int _m13){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m13=_m13;
	}
	__device__ __host__ int2x4(int v){ new (this) int2x4(v,v,v,v,v,v,v,v); }
	__device__ __host__ int2x4(const int4 &r0, const int4 &r1) { new (this) int2x4(r0.x, r0.y, r0.z, r0.w, r1.x, r1.y, r1.z, r1.w); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int1x2() const { return int1x2(this->_m00, this->_m01); }
	__device__ __host__ operator int1x3() const { return int1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator int1x4() const { return int1x4(this->_m00, this->_m01, this->_m02, this->_m03); }
	__device__ __host__ operator int2x1() const { return int2x1(this->_m00, this->_m10); }
	__device__ __host__ operator int2x2() const { return int2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator int2x3() const { return int2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator float2x4() const;
	__device__ __host__ operator uint2x4() const;
};
	__device__ __host__ int2x4 operator -(const int2x4 &a) { return int2x4(-a._m00,-a._m01,-a._m02,-a._m03,-a._m10,-a._m11,-a._m12,-a._m13); }
	__device__ __host__ int2x4 operator +(const int2x4 &a) { return int2x4(+a._m00,+a._m01,+a._m02,+a._m03,+a._m10,+a._m11,+a._m12,+a._m13); }
	__device__ __host__ int2x4 operator ~(const int2x4 &a) { return int2x4(~a._m00,~a._m01,~a._m02,~a._m03,~a._m10,~a._m11,~a._m12,~a._m13); }
	__device__ __host__ int2x4 operator !(const int2x4 &a) { return int2x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m13==0?1:0); }
	__device__ __host__ int2x4 operator +(const int2x4 &a, const int2x4 &b) { return int2x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m13 + b._m13); }
	__device__ __host__ int2x4 operator *(const int2x4 &a, const int2x4 &b) { return int2x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m13 * b._m13); }
	__device__ __host__ int2x4 operator -(const int2x4 &a, const int2x4 &b) { return int2x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m13 - b._m13); }
	__device__ __host__ int2x4 operator /(const int2x4 &a, const int2x4 &b) { return int2x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m13 / b._m13); }
	__device__ __host__ int2x4 operator %(const int2x4 &a, const int2x4 &b) { return int2x4(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m03 % b._m03,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12,a._m13 % b._m13); }
	__device__ __host__ int2x4 operator &(const int2x4 &a, const int2x4 &b) { return int2x4(a._m00 & b._m00,a._m01 & b._m01,a._m02 & b._m02,a._m03 & b._m03,a._m10 & b._m10,a._m11 & b._m11,a._m12 & b._m12,a._m13 & b._m13); }
	__device__ __host__ int2x4 operator |(const int2x4 &a, const int2x4 &b) { return int2x4(a._m00 | b._m00,a._m01 | b._m01,a._m02 | b._m02,a._m03 | b._m03,a._m10 | b._m10,a._m11 | b._m11,a._m12 | b._m12,a._m13 | b._m13); }
	__device__ __host__ int2x4 operator ^(const int2x4 &a, const int2x4 &b) { return int2x4(a._m00 ^ b._m00,a._m01 ^ b._m01,a._m02 ^ b._m02,a._m03 ^ b._m03,a._m10 ^ b._m10,a._m11 ^ b._m11,a._m12 ^ b._m12,a._m13 ^ b._m13); }
	__device__ __host__ int2x4 operator ==(const int2x4 &a, const int2x4 &b) { return int2x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m13 == b._m13)?1:0); }
	__device__ __host__ int2x4 operator !=(const int2x4 &a, const int2x4 &b) { return int2x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m13 != b._m13)?1:0); }
	__device__ __host__ int2x4 operator <(const int2x4 &a, const int2x4 &b) { return int2x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m13 < b._m13)?1:0); }
	__device__ __host__ int2x4 operator <=(const int2x4 &a, const int2x4 &b) { return int2x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m13 <= b._m13)?1:0); }
	__device__ __host__ int2x4 operator >=(const int2x4 &a, const int2x4 &b) { return int2x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m13 >= b._m13)?1:0); }
	__device__ __host__ int2x4 operator >(const int2x4 &a, const int2x4 &b) { return int2x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m13 > b._m13)?1:0); }

struct int3x1{
	int _m00;
	int _m10;
	int _m20;
	__device__ __host__ int_1 operator[] (int row) const {
			if(row == 0) return int_1(_m00);
			if(row == 1) return int_1(_m10);
			if(row == 2) return int_1(_m20);
			return int_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int3x1(int _m00,int _m10,int _m20){
		this->_m00=_m00;
		this->_m10=_m10;
		this->_m20=_m20;
	}
	__device__ __host__ int3x1(int v){ new (this) int3x1(v,v,v); }
	__device__ __host__ int3x1(const int1 &r0, const int1 &r1, const int1 &r2) { new (this) int3x1(r0.x, r1.x, r2.x); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int2x1() const { return int2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float3x1() const;
	__device__ __host__ operator uint3x1() const;
};
	__device__ __host__ int3x1 operator -(const int3x1 &a) { return int3x1(-a._m00,-a._m10,-a._m20); }
	__device__ __host__ int3x1 operator +(const int3x1 &a) { return int3x1(+a._m00,+a._m10,+a._m20); }
	__device__ __host__ int3x1 operator ~(const int3x1 &a) { return int3x1(~a._m00,~a._m10,~a._m20); }
	__device__ __host__ int3x1 operator !(const int3x1 &a) { return int3x1(a._m00==0?1:0,a._m10==0?1:0,a._m20==0?1:0); }
	__device__ __host__ int3x1 operator +(const int3x1 &a, const int3x1 &b) { return int3x1(a._m00 + b._m00,a._m10 + b._m10,a._m20 + b._m20); }
	__device__ __host__ int3x1 operator *(const int3x1 &a, const int3x1 &b) { return int3x1(a._m00 * b._m00,a._m10 * b._m10,a._m20 * b._m20); }
	__device__ __host__ int3x1 operator -(const int3x1 &a, const int3x1 &b) { return int3x1(a._m00 - b._m00,a._m10 - b._m10,a._m20 - b._m20); }
	__device__ __host__ int3x1 operator /(const int3x1 &a, const int3x1 &b) { return int3x1(a._m00 / b._m00,a._m10 / b._m10,a._m20 / b._m20); }
	__device__ __host__ int3x1 operator %(const int3x1 &a, const int3x1 &b) { return int3x1(a._m00 % b._m00,a._m10 % b._m10,a._m20 % b._m20); }
	__device__ __host__ int3x1 operator &(const int3x1 &a, const int3x1 &b) { return int3x1(a._m00 & b._m00,a._m10 & b._m10,a._m20 & b._m20); }
	__device__ __host__ int3x1 operator |(const int3x1 &a, const int3x1 &b) { return int3x1(a._m00 | b._m00,a._m10 | b._m10,a._m20 | b._m20); }
	__device__ __host__ int3x1 operator ^(const int3x1 &a, const int3x1 &b) { return int3x1(a._m00 ^ b._m00,a._m10 ^ b._m10,a._m20 ^ b._m20); }
	__device__ __host__ int3x1 operator ==(const int3x1 &a, const int3x1 &b) { return int3x1((a._m00 == b._m00)?1:0, (a._m10 == b._m10)?1:0, (a._m20 == b._m20)?1:0); }
	__device__ __host__ int3x1 operator !=(const int3x1 &a, const int3x1 &b) { return int3x1((a._m00 != b._m00)?1:0, (a._m10 != b._m10)?1:0, (a._m20 != b._m20)?1:0); }
	__device__ __host__ int3x1 operator <(const int3x1 &a, const int3x1 &b) { return int3x1((a._m00 < b._m00)?1:0, (a._m10 < b._m10)?1:0, (a._m20 < b._m20)?1:0); }
	__device__ __host__ int3x1 operator <=(const int3x1 &a, const int3x1 &b) { return int3x1((a._m00 <= b._m00)?1:0, (a._m10 <= b._m10)?1:0, (a._m20 <= b._m20)?1:0); }
	__device__ __host__ int3x1 operator >=(const int3x1 &a, const int3x1 &b) { return int3x1((a._m00 >= b._m00)?1:0, (a._m10 >= b._m10)?1:0, (a._m20 >= b._m20)?1:0); }
	__device__ __host__ int3x1 operator >(const int3x1 &a, const int3x1 &b) { return int3x1((a._m00 > b._m00)?1:0, (a._m10 > b._m10)?1:0, (a._m20 > b._m20)?1:0); }

struct int3x2{
	int _m00;
	int _m01;
	int _m10;
	int _m11;
	int _m20;
	int _m21;
	__device__ __host__ int_2 operator[] (int row) const {
			if(row == 0) return int_2(_m00, _m01);
			if(row == 1) return int_2(_m10, _m11);
			if(row == 2) return int_2(_m20, _m21);
			return int_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int3x2(int _m00,int _m01,int _m10,int _m11,int _m20,int _m21){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m20=_m20;
		this->_m21=_m21;
	}
	__device__ __host__ int3x2(int v){ new (this) int3x2(v,v,v,v,v,v); }
	__device__ __host__ int3x2(const int2 &r0, const int2 &r1, const int2 &r2) { new (this) int3x2(r0.x, r0.y, r1.x, r1.y, r2.x, r2.y); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int1x2() const { return int1x2(this->_m00, this->_m01); }
	__device__ __host__ operator int2x1() const { return int2x1(this->_m00, this->_m10); }
	__device__ __host__ operator int2x2() const { return int2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator int3x1() const { return int3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator float3x2() const;
	__device__ __host__ operator uint3x2() const;
};
	__device__ __host__ int3x2 operator -(const int3x2 &a) { return int3x2(-a._m00,-a._m01,-a._m10,-a._m11,-a._m20,-a._m21); }
	__device__ __host__ int3x2 operator +(const int3x2 &a) { return int3x2(+a._m00,+a._m01,+a._m10,+a._m11,+a._m20,+a._m21); }
	__device__ __host__ int3x2 operator ~(const int3x2 &a) { return int3x2(~a._m00,~a._m01,~a._m10,~a._m11,~a._m20,~a._m21); }
	__device__ __host__ int3x2 operator !(const int3x2 &a) { return int3x2(a._m00==0?1:0,a._m01==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m20==0?1:0,a._m21==0?1:0); }
	__device__ __host__ int3x2 operator +(const int3x2 &a, const int3x2 &b) { return int3x2(a._m00 + b._m00,a._m01 + b._m01,a._m10 + b._m10,a._m11 + b._m11,a._m20 + b._m20,a._m21 + b._m21); }
	__device__ __host__ int3x2 operator *(const int3x2 &a, const int3x2 &b) { return int3x2(a._m00 * b._m00,a._m01 * b._m01,a._m10 * b._m10,a._m11 * b._m11,a._m20 * b._m20,a._m21 * b._m21); }
	__device__ __host__ int3x2 operator -(const int3x2 &a, const int3x2 &b) { return int3x2(a._m00 - b._m00,a._m01 - b._m01,a._m10 - b._m10,a._m11 - b._m11,a._m20 - b._m20,a._m21 - b._m21); }
	__device__ __host__ int3x2 operator /(const int3x2 &a, const int3x2 &b) { return int3x2(a._m00 / b._m00,a._m01 / b._m01,a._m10 / b._m10,a._m11 / b._m11,a._m20 / b._m20,a._m21 / b._m21); }
	__device__ __host__ int3x2 operator %(const int3x2 &a, const int3x2 &b) { return int3x2(a._m00 % b._m00,a._m01 % b._m01,a._m10 % b._m10,a._m11 % b._m11,a._m20 % b._m20,a._m21 % b._m21); }
	__device__ __host__ int3x2 operator &(const int3x2 &a, const int3x2 &b) { return int3x2(a._m00 & b._m00,a._m01 & b._m01,a._m10 & b._m10,a._m11 & b._m11,a._m20 & b._m20,a._m21 & b._m21); }
	__device__ __host__ int3x2 operator |(const int3x2 &a, const int3x2 &b) { return int3x2(a._m00 | b._m00,a._m01 | b._m01,a._m10 | b._m10,a._m11 | b._m11,a._m20 | b._m20,a._m21 | b._m21); }
	__device__ __host__ int3x2 operator ^(const int3x2 &a, const int3x2 &b) { return int3x2(a._m00 ^ b._m00,a._m01 ^ b._m01,a._m10 ^ b._m10,a._m11 ^ b._m11,a._m20 ^ b._m20,a._m21 ^ b._m21); }
	__device__ __host__ int3x2 operator ==(const int3x2 &a, const int3x2 &b) { return int3x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0); }
	__device__ __host__ int3x2 operator !=(const int3x2 &a, const int3x2 &b) { return int3x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0); }
	__device__ __host__ int3x2 operator <(const int3x2 &a, const int3x2 &b) { return int3x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0); }
	__device__ __host__ int3x2 operator <=(const int3x2 &a, const int3x2 &b) { return int3x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0); }
	__device__ __host__ int3x2 operator >=(const int3x2 &a, const int3x2 &b) { return int3x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0); }
	__device__ __host__ int3x2 operator >(const int3x2 &a, const int3x2 &b) { return int3x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0); }

struct int3x3{
	int _m00;
	int _m01;
	int _m02;
	int _m10;
	int _m11;
	int _m12;
	int _m20;
	int _m21;
	int _m22;
	__device__ __host__ int_3 operator[] (int row) const {
			if(row == 0) return int_3(_m00, _m01, _m02);
			if(row == 1) return int_3(_m10, _m11, _m12);
			if(row == 2) return int_3(_m20, _m21, _m22);
			return int_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int3x3(int _m00,int _m01,int _m02,int _m10,int _m11,int _m12,int _m20,int _m21,int _m22){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
	}
	__device__ __host__ int3x3(int v){ new (this) int3x3(v,v,v,v,v,v,v,v,v); }
	__device__ __host__ int3x3(const int3 &r0, const int3 &r1, const int3 &r2) { new (this) int3x3(r0.x, r0.y, r0.z, r1.x, r1.y, r1.z, r2.x, r2.y, r2.z); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int1x2() const { return int1x2(this->_m00, this->_m01); }
	__device__ __host__ operator int1x3() const { return int1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator int2x1() const { return int2x1(this->_m00, this->_m10); }
	__device__ __host__ operator int2x2() const { return int2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator int2x3() const { return int2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator int3x1() const { return int3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator int3x2() const { return int3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator float3x3() const;
	__device__ __host__ operator uint3x3() const;
};
	__device__ __host__ int3x3 operator -(const int3x3 &a) { return int3x3(-a._m00,-a._m01,-a._m02,-a._m10,-a._m11,-a._m12,-a._m20,-a._m21,-a._m22); }
	__device__ __host__ int3x3 operator +(const int3x3 &a) { return int3x3(+a._m00,+a._m01,+a._m02,+a._m10,+a._m11,+a._m12,+a._m20,+a._m21,+a._m22); }
	__device__ __host__ int3x3 operator ~(const int3x3 &a) { return int3x3(~a._m00,~a._m01,~a._m02,~a._m10,~a._m11,~a._m12,~a._m20,~a._m21,~a._m22); }
	__device__ __host__ int3x3 operator !(const int3x3 &a) { return int3x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0); }
	__device__ __host__ int3x3 operator +(const int3x3 &a, const int3x3 &b) { return int3x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22); }
	__device__ __host__ int3x3 operator *(const int3x3 &a, const int3x3 &b) { return int3x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22); }
	__device__ __host__ int3x3 operator -(const int3x3 &a, const int3x3 &b) { return int3x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22); }
	__device__ __host__ int3x3 operator /(const int3x3 &a, const int3x3 &b) { return int3x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22); }
	__device__ __host__ int3x3 operator %(const int3x3 &a, const int3x3 &b) { return int3x3(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12,a._m20 % b._m20,a._m21 % b._m21,a._m22 % b._m22); }
	__device__ __host__ int3x3 operator &(const int3x3 &a, const int3x3 &b) { return int3x3(a._m00 & b._m00,a._m01 & b._m01,a._m02 & b._m02,a._m10 & b._m10,a._m11 & b._m11,a._m12 & b._m12,a._m20 & b._m20,a._m21 & b._m21,a._m22 & b._m22); }
	__device__ __host__ int3x3 operator |(const int3x3 &a, const int3x3 &b) { return int3x3(a._m00 | b._m00,a._m01 | b._m01,a._m02 | b._m02,a._m10 | b._m10,a._m11 | b._m11,a._m12 | b._m12,a._m20 | b._m20,a._m21 | b._m21,a._m22 | b._m22); }
	__device__ __host__ int3x3 operator ^(const int3x3 &a, const int3x3 &b) { return int3x3(a._m00 ^ b._m00,a._m01 ^ b._m01,a._m02 ^ b._m02,a._m10 ^ b._m10,a._m11 ^ b._m11,a._m12 ^ b._m12,a._m20 ^ b._m20,a._m21 ^ b._m21,a._m22 ^ b._m22); }
	__device__ __host__ int3x3 operator ==(const int3x3 &a, const int3x3 &b) { return int3x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0); }
	__device__ __host__ int3x3 operator !=(const int3x3 &a, const int3x3 &b) { return int3x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0); }
	__device__ __host__ int3x3 operator <(const int3x3 &a, const int3x3 &b) { return int3x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0); }
	__device__ __host__ int3x3 operator <=(const int3x3 &a, const int3x3 &b) { return int3x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0); }
	__device__ __host__ int3x3 operator >=(const int3x3 &a, const int3x3 &b) { return int3x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0); }
	__device__ __host__ int3x3 operator >(const int3x3 &a, const int3x3 &b) { return int3x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0); }

struct int3x4{
	int _m00;
	int _m01;
	int _m02;
	int _m03;
	int _m10;
	int _m11;
	int _m12;
	int _m13;
	int _m20;
	int _m21;
	int _m22;
	int _m23;
	__device__ __host__ int_4 operator[] (int row) const {
			if(row == 0) return int_4(_m00, _m01, _m02, _m03);
			if(row == 1) return int_4(_m10, _m11, _m12, _m13);
			if(row == 2) return int_4(_m20, _m21, _m22, _m23);
			return int_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int3x4(int _m00,int _m01,int _m02,int _m03,int _m10,int _m11,int _m12,int _m13,int _m20,int _m21,int _m22,int _m23){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m13=_m13;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
		this->_m23=_m23;
	}
	__device__ __host__ int3x4(int v){ new (this) int3x4(v,v,v,v,v,v,v,v,v,v,v,v); }
	__device__ __host__ int3x4(const int4 &r0, const int4 &r1, const int4 &r2) { new (this) int3x4(r0.x, r0.y, r0.z, r0.w, r1.x, r1.y, r1.z, r1.w, r2.x, r2.y, r2.z, r2.w); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int1x2() const { return int1x2(this->_m00, this->_m01); }
	__device__ __host__ operator int1x3() const { return int1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator int1x4() const { return int1x4(this->_m00, this->_m01, this->_m02, this->_m03); }
	__device__ __host__ operator int2x1() const { return int2x1(this->_m00, this->_m10); }
	__device__ __host__ operator int2x2() const { return int2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator int2x3() const { return int2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator int2x4() const { return int2x4(this->_m00, this->_m01, this->_m02, this->_m03, this->_m10, this->_m11, this->_m12, this->_m13); }
	__device__ __host__ operator int3x1() const { return int3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator int3x2() const { return int3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator int3x3() const { return int3x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22); }
	__device__ __host__ operator float3x4() const;
	__device__ __host__ operator uint3x4() const;
};
	__device__ __host__ int3x4 operator -(const int3x4 &a) { return int3x4(-a._m00,-a._m01,-a._m02,-a._m03,-a._m10,-a._m11,-a._m12,-a._m13,-a._m20,-a._m21,-a._m22,-a._m23); }
	__device__ __host__ int3x4 operator +(const int3x4 &a) { return int3x4(+a._m00,+a._m01,+a._m02,+a._m03,+a._m10,+a._m11,+a._m12,+a._m13,+a._m20,+a._m21,+a._m22,+a._m23); }
	__device__ __host__ int3x4 operator ~(const int3x4 &a) { return int3x4(~a._m00,~a._m01,~a._m02,~a._m03,~a._m10,~a._m11,~a._m12,~a._m13,~a._m20,~a._m21,~a._m22,~a._m23); }
	__device__ __host__ int3x4 operator !(const int3x4 &a) { return int3x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m13==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0,a._m23==0?1:0); }
	__device__ __host__ int3x4 operator +(const int3x4 &a, const int3x4 &b) { return int3x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m13 + b._m13,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22,a._m23 + b._m23); }
	__device__ __host__ int3x4 operator *(const int3x4 &a, const int3x4 &b) { return int3x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m13 * b._m13,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22,a._m23 * b._m23); }
	__device__ __host__ int3x4 operator -(const int3x4 &a, const int3x4 &b) { return int3x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m13 - b._m13,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22,a._m23 - b._m23); }
	__device__ __host__ int3x4 operator /(const int3x4 &a, const int3x4 &b) { return int3x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m13 / b._m13,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22,a._m23 / b._m23); }
	__device__ __host__ int3x4 operator %(const int3x4 &a, const int3x4 &b) { return int3x4(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m03 % b._m03,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12,a._m13 % b._m13,a._m20 % b._m20,a._m21 % b._m21,a._m22 % b._m22,a._m23 % b._m23); }
	__device__ __host__ int3x4 operator &(const int3x4 &a, const int3x4 &b) { return int3x4(a._m00 & b._m00,a._m01 & b._m01,a._m02 & b._m02,a._m03 & b._m03,a._m10 & b._m10,a._m11 & b._m11,a._m12 & b._m12,a._m13 & b._m13,a._m20 & b._m20,a._m21 & b._m21,a._m22 & b._m22,a._m23 & b._m23); }
	__device__ __host__ int3x4 operator |(const int3x4 &a, const int3x4 &b) { return int3x4(a._m00 | b._m00,a._m01 | b._m01,a._m02 | b._m02,a._m03 | b._m03,a._m10 | b._m10,a._m11 | b._m11,a._m12 | b._m12,a._m13 | b._m13,a._m20 | b._m20,a._m21 | b._m21,a._m22 | b._m22,a._m23 | b._m23); }
	__device__ __host__ int3x4 operator ^(const int3x4 &a, const int3x4 &b) { return int3x4(a._m00 ^ b._m00,a._m01 ^ b._m01,a._m02 ^ b._m02,a._m03 ^ b._m03,a._m10 ^ b._m10,a._m11 ^ b._m11,a._m12 ^ b._m12,a._m13 ^ b._m13,a._m20 ^ b._m20,a._m21 ^ b._m21,a._m22 ^ b._m22,a._m23 ^ b._m23); }
	__device__ __host__ int3x4 operator ==(const int3x4 &a, const int3x4 &b) { return int3x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m13 == b._m13)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0, (a._m23 == b._m23)?1:0); }
	__device__ __host__ int3x4 operator !=(const int3x4 &a, const int3x4 &b) { return int3x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m13 != b._m13)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0, (a._m23 != b._m23)?1:0); }
	__device__ __host__ int3x4 operator <(const int3x4 &a, const int3x4 &b) { return int3x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m13 < b._m13)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0, (a._m23 < b._m23)?1:0); }
	__device__ __host__ int3x4 operator <=(const int3x4 &a, const int3x4 &b) { return int3x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m13 <= b._m13)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0, (a._m23 <= b._m23)?1:0); }
	__device__ __host__ int3x4 operator >=(const int3x4 &a, const int3x4 &b) { return int3x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m13 >= b._m13)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0, (a._m23 >= b._m23)?1:0); }
	__device__ __host__ int3x4 operator >(const int3x4 &a, const int3x4 &b) { return int3x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m13 > b._m13)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0, (a._m23 > b._m23)?1:0); }

struct int4x1{
	int _m00;
	int _m10;
	int _m20;
	int _m30;
	__device__ __host__ int_1 operator[] (int row) const {
			if(row == 0) return int_1(_m00);
			if(row == 1) return int_1(_m10);
			if(row == 2) return int_1(_m20);
			if(row == 3) return int_1(_m30);
			return int_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int4x1(int _m00,int _m10,int _m20,int _m30){
		this->_m00=_m00;
		this->_m10=_m10;
		this->_m20=_m20;
		this->_m30=_m30;
	}
	__device__ __host__ int4x1(int v){ new (this) int4x1(v,v,v,v); }
	__device__ __host__ int4x1(const int1 &r0, const int1 &r1, const int1 &r2, const int1 &r3) { new (this) int4x1(r0.x, r1.x, r2.x, r3.x); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int2x1() const { return int2x1(this->_m00, this->_m10); }
	__device__ __host__ operator int3x1() const { return int3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator float4x1() const;
	__device__ __host__ operator uint4x1() const;
};
	__device__ __host__ int4x1 operator -(const int4x1 &a) { return int4x1(-a._m00,-a._m10,-a._m20,-a._m30); }
	__device__ __host__ int4x1 operator +(const int4x1 &a) { return int4x1(+a._m00,+a._m10,+a._m20,+a._m30); }
	__device__ __host__ int4x1 operator ~(const int4x1 &a) { return int4x1(~a._m00,~a._m10,~a._m20,~a._m30); }
	__device__ __host__ int4x1 operator !(const int4x1 &a) { return int4x1(a._m00==0?1:0,a._m10==0?1:0,a._m20==0?1:0,a._m30==0?1:0); }
	__device__ __host__ int4x1 operator +(const int4x1 &a, const int4x1 &b) { return int4x1(a._m00 + b._m00,a._m10 + b._m10,a._m20 + b._m20,a._m30 + b._m30); }
	__device__ __host__ int4x1 operator *(const int4x1 &a, const int4x1 &b) { return int4x1(a._m00 * b._m00,a._m10 * b._m10,a._m20 * b._m20,a._m30 * b._m30); }
	__device__ __host__ int4x1 operator -(const int4x1 &a, const int4x1 &b) { return int4x1(a._m00 - b._m00,a._m10 - b._m10,a._m20 - b._m20,a._m30 - b._m30); }
	__device__ __host__ int4x1 operator /(const int4x1 &a, const int4x1 &b) { return int4x1(a._m00 / b._m00,a._m10 / b._m10,a._m20 / b._m20,a._m30 / b._m30); }
	__device__ __host__ int4x1 operator %(const int4x1 &a, const int4x1 &b) { return int4x1(a._m00 % b._m00,a._m10 % b._m10,a._m20 % b._m20,a._m30 % b._m30); }
	__device__ __host__ int4x1 operator &(const int4x1 &a, const int4x1 &b) { return int4x1(a._m00 & b._m00,a._m10 & b._m10,a._m20 & b._m20,a._m30 & b._m30); }
	__device__ __host__ int4x1 operator |(const int4x1 &a, const int4x1 &b) { return int4x1(a._m00 | b._m00,a._m10 | b._m10,a._m20 | b._m20,a._m30 | b._m30); }
	__device__ __host__ int4x1 operator ^(const int4x1 &a, const int4x1 &b) { return int4x1(a._m00 ^ b._m00,a._m10 ^ b._m10,a._m20 ^ b._m20,a._m30 ^ b._m30); }
	__device__ __host__ int4x1 operator ==(const int4x1 &a, const int4x1 &b) { return int4x1((a._m00 == b._m00)?1:0, (a._m10 == b._m10)?1:0, (a._m20 == b._m20)?1:0, (a._m30 == b._m30)?1:0); }
	__device__ __host__ int4x1 operator !=(const int4x1 &a, const int4x1 &b) { return int4x1((a._m00 != b._m00)?1:0, (a._m10 != b._m10)?1:0, (a._m20 != b._m20)?1:0, (a._m30 != b._m30)?1:0); }
	__device__ __host__ int4x1 operator <(const int4x1 &a, const int4x1 &b) { return int4x1((a._m00 < b._m00)?1:0, (a._m10 < b._m10)?1:0, (a._m20 < b._m20)?1:0, (a._m30 < b._m30)?1:0); }
	__device__ __host__ int4x1 operator <=(const int4x1 &a, const int4x1 &b) { return int4x1((a._m00 <= b._m00)?1:0, (a._m10 <= b._m10)?1:0, (a._m20 <= b._m20)?1:0, (a._m30 <= b._m30)?1:0); }
	__device__ __host__ int4x1 operator >=(const int4x1 &a, const int4x1 &b) { return int4x1((a._m00 >= b._m00)?1:0, (a._m10 >= b._m10)?1:0, (a._m20 >= b._m20)?1:0, (a._m30 >= b._m30)?1:0); }
	__device__ __host__ int4x1 operator >(const int4x1 &a, const int4x1 &b) { return int4x1((a._m00 > b._m00)?1:0, (a._m10 > b._m10)?1:0, (a._m20 > b._m20)?1:0, (a._m30 > b._m30)?1:0); }

struct int4x2{
	int _m00;
	int _m01;
	int _m10;
	int _m11;
	int _m20;
	int _m21;
	int _m30;
	int _m31;
	__device__ __host__ int_2 operator[] (int row) const {
			if(row == 0) return int_2(_m00, _m01);
			if(row == 1) return int_2(_m10, _m11);
			if(row == 2) return int_2(_m20, _m21);
			if(row == 3) return int_2(_m30, _m31);
			return int_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int4x2(int _m00,int _m01,int _m10,int _m11,int _m20,int _m21,int _m30,int _m31){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m30=_m30;
		this->_m31=_m31;
	}
	__device__ __host__ int4x2(int v){ new (this) int4x2(v,v,v,v,v,v,v,v); }
	__device__ __host__ int4x2(const int2 &r0, const int2 &r1, const int2 &r2, const int2 &r3) { new (this) int4x2(r0.x, r0.y, r1.x, r1.y, r2.x, r2.y, r3.x, r3.y); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int1x2() const { return int1x2(this->_m00, this->_m01); }
	__device__ __host__ operator int2x1() const { return int2x1(this->_m00, this->_m10); }
	__device__ __host__ operator int2x2() const { return int2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator int3x1() const { return int3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator int3x2() const { return int3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator int4x1() const { return int4x1(this->_m00, this->_m10, this->_m20, this->_m30); }
	__device__ __host__ operator float4x2() const;
	__device__ __host__ operator uint4x2() const;
};
	__device__ __host__ int4x2 operator -(const int4x2 &a) { return int4x2(-a._m00,-a._m01,-a._m10,-a._m11,-a._m20,-a._m21,-a._m30,-a._m31); }
	__device__ __host__ int4x2 operator +(const int4x2 &a) { return int4x2(+a._m00,+a._m01,+a._m10,+a._m11,+a._m20,+a._m21,+a._m30,+a._m31); }
	__device__ __host__ int4x2 operator ~(const int4x2 &a) { return int4x2(~a._m00,~a._m01,~a._m10,~a._m11,~a._m20,~a._m21,~a._m30,~a._m31); }
	__device__ __host__ int4x2 operator !(const int4x2 &a) { return int4x2(a._m00==0?1:0,a._m01==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m30==0?1:0,a._m31==0?1:0); }
	__device__ __host__ int4x2 operator +(const int4x2 &a, const int4x2 &b) { return int4x2(a._m00 + b._m00,a._m01 + b._m01,a._m10 + b._m10,a._m11 + b._m11,a._m20 + b._m20,a._m21 + b._m21,a._m30 + b._m30,a._m31 + b._m31); }
	__device__ __host__ int4x2 operator *(const int4x2 &a, const int4x2 &b) { return int4x2(a._m00 * b._m00,a._m01 * b._m01,a._m10 * b._m10,a._m11 * b._m11,a._m20 * b._m20,a._m21 * b._m21,a._m30 * b._m30,a._m31 * b._m31); }
	__device__ __host__ int4x2 operator -(const int4x2 &a, const int4x2 &b) { return int4x2(a._m00 - b._m00,a._m01 - b._m01,a._m10 - b._m10,a._m11 - b._m11,a._m20 - b._m20,a._m21 - b._m21,a._m30 - b._m30,a._m31 - b._m31); }
	__device__ __host__ int4x2 operator /(const int4x2 &a, const int4x2 &b) { return int4x2(a._m00 / b._m00,a._m01 / b._m01,a._m10 / b._m10,a._m11 / b._m11,a._m20 / b._m20,a._m21 / b._m21,a._m30 / b._m30,a._m31 / b._m31); }
	__device__ __host__ int4x2 operator %(const int4x2 &a, const int4x2 &b) { return int4x2(a._m00 % b._m00,a._m01 % b._m01,a._m10 % b._m10,a._m11 % b._m11,a._m20 % b._m20,a._m21 % b._m21,a._m30 % b._m30,a._m31 % b._m31); }
	__device__ __host__ int4x2 operator &(const int4x2 &a, const int4x2 &b) { return int4x2(a._m00 & b._m00,a._m01 & b._m01,a._m10 & b._m10,a._m11 & b._m11,a._m20 & b._m20,a._m21 & b._m21,a._m30 & b._m30,a._m31 & b._m31); }
	__device__ __host__ int4x2 operator |(const int4x2 &a, const int4x2 &b) { return int4x2(a._m00 | b._m00,a._m01 | b._m01,a._m10 | b._m10,a._m11 | b._m11,a._m20 | b._m20,a._m21 | b._m21,a._m30 | b._m30,a._m31 | b._m31); }
	__device__ __host__ int4x2 operator ^(const int4x2 &a, const int4x2 &b) { return int4x2(a._m00 ^ b._m00,a._m01 ^ b._m01,a._m10 ^ b._m10,a._m11 ^ b._m11,a._m20 ^ b._m20,a._m21 ^ b._m21,a._m30 ^ b._m30,a._m31 ^ b._m31); }
	__device__ __host__ int4x2 operator ==(const int4x2 &a, const int4x2 &b) { return int4x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m30 == b._m30)?1:0, (a._m31 == b._m31)?1:0); }
	__device__ __host__ int4x2 operator !=(const int4x2 &a, const int4x2 &b) { return int4x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m30 != b._m30)?1:0, (a._m31 != b._m31)?1:0); }
	__device__ __host__ int4x2 operator <(const int4x2 &a, const int4x2 &b) { return int4x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m30 < b._m30)?1:0, (a._m31 < b._m31)?1:0); }
	__device__ __host__ int4x2 operator <=(const int4x2 &a, const int4x2 &b) { return int4x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m30 <= b._m30)?1:0, (a._m31 <= b._m31)?1:0); }
	__device__ __host__ int4x2 operator >=(const int4x2 &a, const int4x2 &b) { return int4x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m30 >= b._m30)?1:0, (a._m31 >= b._m31)?1:0); }
	__device__ __host__ int4x2 operator >(const int4x2 &a, const int4x2 &b) { return int4x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m30 > b._m30)?1:0, (a._m31 > b._m31)?1:0); }

struct int4x3{
	int _m00;
	int _m01;
	int _m02;
	int _m10;
	int _m11;
	int _m12;
	int _m20;
	int _m21;
	int _m22;
	int _m30;
	int _m31;
	int _m32;
	__device__ __host__ int_3 operator[] (int row) const {
			if(row == 0) return int_3(_m00, _m01, _m02);
			if(row == 1) return int_3(_m10, _m11, _m12);
			if(row == 2) return int_3(_m20, _m21, _m22);
			if(row == 3) return int_3(_m30, _m31, _m32);
			return int_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int4x3(int _m00,int _m01,int _m02,int _m10,int _m11,int _m12,int _m20,int _m21,int _m22,int _m30,int _m31,int _m32){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
		this->_m30=_m30;
		this->_m31=_m31;
		this->_m32=_m32;
	}
	__device__ __host__ int4x3(int v){ new (this) int4x3(v,v,v,v,v,v,v,v,v,v,v,v); }
	__device__ __host__ int4x3(const int3 &r0, const int3 &r1, const int3 &r2, const int3 &r3) { new (this) int4x3(r0.x, r0.y, r0.z, r1.x, r1.y, r1.z, r2.x, r2.y, r2.z, r3.x, r3.y, r3.z); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int1x2() const { return int1x2(this->_m00, this->_m01); }
	__device__ __host__ operator int1x3() const { return int1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator int2x1() const { return int2x1(this->_m00, this->_m10); }
	__device__ __host__ operator int2x2() const { return int2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator int2x3() const { return int2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator int3x1() const { return int3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator int3x2() const { return int3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator int3x3() const { return int3x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22); }
	__device__ __host__ operator int4x1() const { return int4x1(this->_m00, this->_m10, this->_m20, this->_m30); }
	__device__ __host__ operator int4x2() const { return int4x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21, this->_m30, this->_m31); }
	__device__ __host__ operator float4x3() const;
	__device__ __host__ operator uint4x3() const;
};
	__device__ __host__ int4x3 operator -(const int4x3 &a) { return int4x3(-a._m00,-a._m01,-a._m02,-a._m10,-a._m11,-a._m12,-a._m20,-a._m21,-a._m22,-a._m30,-a._m31,-a._m32); }
	__device__ __host__ int4x3 operator +(const int4x3 &a) { return int4x3(+a._m00,+a._m01,+a._m02,+a._m10,+a._m11,+a._m12,+a._m20,+a._m21,+a._m22,+a._m30,+a._m31,+a._m32); }
	__device__ __host__ int4x3 operator ~(const int4x3 &a) { return int4x3(~a._m00,~a._m01,~a._m02,~a._m10,~a._m11,~a._m12,~a._m20,~a._m21,~a._m22,~a._m30,~a._m31,~a._m32); }
	__device__ __host__ int4x3 operator !(const int4x3 &a) { return int4x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0,a._m30==0?1:0,a._m31==0?1:0,a._m32==0?1:0); }
	__device__ __host__ int4x3 operator +(const int4x3 &a, const int4x3 &b) { return int4x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22,a._m30 + b._m30,a._m31 + b._m31,a._m32 + b._m32); }
	__device__ __host__ int4x3 operator *(const int4x3 &a, const int4x3 &b) { return int4x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22,a._m30 * b._m30,a._m31 * b._m31,a._m32 * b._m32); }
	__device__ __host__ int4x3 operator -(const int4x3 &a, const int4x3 &b) { return int4x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22,a._m30 - b._m30,a._m31 - b._m31,a._m32 - b._m32); }
	__device__ __host__ int4x3 operator /(const int4x3 &a, const int4x3 &b) { return int4x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22,a._m30 / b._m30,a._m31 / b._m31,a._m32 / b._m32); }
	__device__ __host__ int4x3 operator %(const int4x3 &a, const int4x3 &b) { return int4x3(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12,a._m20 % b._m20,a._m21 % b._m21,a._m22 % b._m22,a._m30 % b._m30,a._m31 % b._m31,a._m32 % b._m32); }
	__device__ __host__ int4x3 operator &(const int4x3 &a, const int4x3 &b) { return int4x3(a._m00 & b._m00,a._m01 & b._m01,a._m02 & b._m02,a._m10 & b._m10,a._m11 & b._m11,a._m12 & b._m12,a._m20 & b._m20,a._m21 & b._m21,a._m22 & b._m22,a._m30 & b._m30,a._m31 & b._m31,a._m32 & b._m32); }
	__device__ __host__ int4x3 operator |(const int4x3 &a, const int4x3 &b) { return int4x3(a._m00 | b._m00,a._m01 | b._m01,a._m02 | b._m02,a._m10 | b._m10,a._m11 | b._m11,a._m12 | b._m12,a._m20 | b._m20,a._m21 | b._m21,a._m22 | b._m22,a._m30 | b._m30,a._m31 | b._m31,a._m32 | b._m32); }
	__device__ __host__ int4x3 operator ^(const int4x3 &a, const int4x3 &b) { return int4x3(a._m00 ^ b._m00,a._m01 ^ b._m01,a._m02 ^ b._m02,a._m10 ^ b._m10,a._m11 ^ b._m11,a._m12 ^ b._m12,a._m20 ^ b._m20,a._m21 ^ b._m21,a._m22 ^ b._m22,a._m30 ^ b._m30,a._m31 ^ b._m31,a._m32 ^ b._m32); }
	__device__ __host__ int4x3 operator ==(const int4x3 &a, const int4x3 &b) { return int4x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0, (a._m30 == b._m30)?1:0, (a._m31 == b._m31)?1:0, (a._m32 == b._m32)?1:0); }
	__device__ __host__ int4x3 operator !=(const int4x3 &a, const int4x3 &b) { return int4x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0, (a._m30 != b._m30)?1:0, (a._m31 != b._m31)?1:0, (a._m32 != b._m32)?1:0); }
	__device__ __host__ int4x3 operator <(const int4x3 &a, const int4x3 &b) { return int4x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0, (a._m30 < b._m30)?1:0, (a._m31 < b._m31)?1:0, (a._m32 < b._m32)?1:0); }
	__device__ __host__ int4x3 operator <=(const int4x3 &a, const int4x3 &b) { return int4x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0, (a._m30 <= b._m30)?1:0, (a._m31 <= b._m31)?1:0, (a._m32 <= b._m32)?1:0); }
	__device__ __host__ int4x3 operator >=(const int4x3 &a, const int4x3 &b) { return int4x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0, (a._m30 >= b._m30)?1:0, (a._m31 >= b._m31)?1:0, (a._m32 >= b._m32)?1:0); }
	__device__ __host__ int4x3 operator >(const int4x3 &a, const int4x3 &b) { return int4x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0, (a._m30 > b._m30)?1:0, (a._m31 > b._m31)?1:0, (a._m32 > b._m32)?1:0); }

struct int4x4{
	int _m00;
	int _m01;
	int _m02;
	int _m03;
	int _m10;
	int _m11;
	int _m12;
	int _m13;
	int _m20;
	int _m21;
	int _m22;
	int _m23;
	int _m30;
	int _m31;
	int _m32;
	int _m33;
	__device__ __host__ int_4 operator[] (int row) const {
			if(row == 0) return int_4(_m00, _m01, _m02, _m03);
			if(row == 1) return int_4(_m10, _m11, _m12, _m13);
			if(row == 2) return int_4(_m20, _m21, _m22, _m23);
			if(row == 3) return int_4(_m30, _m31, _m32, _m33);
			return int_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ int4x4(int _m00,int _m01,int _m02,int _m03,int _m10,int _m11,int _m12,int _m13,int _m20,int _m21,int _m22,int _m23,int _m30,int _m31,int _m32,int _m33){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m13=_m13;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
		this->_m23=_m23;
		this->_m30=_m30;
		this->_m31=_m31;
		this->_m32=_m32;
		this->_m33=_m33;
	}
	__device__ __host__ int4x4(int v){ new (this) int4x4(v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v); }
	__device__ __host__ int4x4(const int4 &r0, const int4 &r1, const int4 &r2, const int4 &r3) { new (this) int4x4(r0.x, r0.y, r0.z, r0.w, r1.x, r1.y, r1.z, r1.w, r2.x, r2.y, r2.z, r2.w, r3.x, r3.y, r3.z, r3.w); }
	__device__ __host__ operator int1x1() const { return int1x1(this->_m00); }
	__device__ __host__ operator int1x2() const { return int1x2(this->_m00, this->_m01); }
	__device__ __host__ operator int1x3() const { return int1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator int1x4() const { return int1x4(this->_m00, this->_m01, this->_m02, this->_m03); }
	__device__ __host__ operator int2x1() const { return int2x1(this->_m00, this->_m10); }
	__device__ __host__ operator int2x2() const { return int2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator int2x3() const { return int2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator int2x4() const { return int2x4(this->_m00, this->_m01, this->_m02, this->_m03, this->_m10, this->_m11, this->_m12, this->_m13); }
	__device__ __host__ operator int3x1() const { return int3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator int3x2() const { return int3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator int3x3() const { return int3x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22); }
	__device__ __host__ operator int3x4() const { return int3x4(this->_m00, this->_m01, this->_m02, this->_m03, this->_m10, this->_m11, this->_m12, this->_m13, this->_m20, this->_m21, this->_m22, this->_m23); }
	__device__ __host__ operator int4x1() const { return int4x1(this->_m00, this->_m10, this->_m20, this->_m30); }
	__device__ __host__ operator int4x2() const { return int4x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21, this->_m30, this->_m31); }
	__device__ __host__ operator int4x3() const { return int4x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22, this->_m30, this->_m31, this->_m32); }
	__device__ __host__ operator float4x4() const;
	__device__ __host__ operator uint4x4() const;
};
	__device__ __host__ int4x4 operator -(const int4x4 &a) { return int4x4(-a._m00,-a._m01,-a._m02,-a._m03,-a._m10,-a._m11,-a._m12,-a._m13,-a._m20,-a._m21,-a._m22,-a._m23,-a._m30,-a._m31,-a._m32,-a._m33); }
	__device__ __host__ int4x4 operator +(const int4x4 &a) { return int4x4(+a._m00,+a._m01,+a._m02,+a._m03,+a._m10,+a._m11,+a._m12,+a._m13,+a._m20,+a._m21,+a._m22,+a._m23,+a._m30,+a._m31,+a._m32,+a._m33); }
	__device__ __host__ int4x4 operator ~(const int4x4 &a) { return int4x4(~a._m00,~a._m01,~a._m02,~a._m03,~a._m10,~a._m11,~a._m12,~a._m13,~a._m20,~a._m21,~a._m22,~a._m23,~a._m30,~a._m31,~a._m32,~a._m33); }
	__device__ __host__ int4x4 operator !(const int4x4 &a) { return int4x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m13==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0,a._m23==0?1:0,a._m30==0?1:0,a._m31==0?1:0,a._m32==0?1:0,a._m33==0?1:0); }
	__device__ __host__ int4x4 operator +(const int4x4 &a, const int4x4 &b) { return int4x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m13 + b._m13,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22,a._m23 + b._m23,a._m30 + b._m30,a._m31 + b._m31,a._m32 + b._m32,a._m33 + b._m33); }
	__device__ __host__ int4x4 operator *(const int4x4 &a, const int4x4 &b) { return int4x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m13 * b._m13,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22,a._m23 * b._m23,a._m30 * b._m30,a._m31 * b._m31,a._m32 * b._m32,a._m33 * b._m33); }
	__device__ __host__ int4x4 operator -(const int4x4 &a, const int4x4 &b) { return int4x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m13 - b._m13,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22,a._m23 - b._m23,a._m30 - b._m30,a._m31 - b._m31,a._m32 - b._m32,a._m33 - b._m33); }
	__device__ __host__ int4x4 operator /(const int4x4 &a, const int4x4 &b) { return int4x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m13 / b._m13,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22,a._m23 / b._m23,a._m30 / b._m30,a._m31 / b._m31,a._m32 / b._m32,a._m33 / b._m33); }
	__device__ __host__ int4x4 operator %(const int4x4 &a, const int4x4 &b) { return int4x4(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m03 % b._m03,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12,a._m13 % b._m13,a._m20 % b._m20,a._m21 % b._m21,a._m22 % b._m22,a._m23 % b._m23,a._m30 % b._m30,a._m31 % b._m31,a._m32 % b._m32,a._m33 % b._m33); }
	__device__ __host__ int4x4 operator &(const int4x4 &a, const int4x4 &b) { return int4x4(a._m00 & b._m00,a._m01 & b._m01,a._m02 & b._m02,a._m03 & b._m03,a._m10 & b._m10,a._m11 & b._m11,a._m12 & b._m12,a._m13 & b._m13,a._m20 & b._m20,a._m21 & b._m21,a._m22 & b._m22,a._m23 & b._m23,a._m30 & b._m30,a._m31 & b._m31,a._m32 & b._m32,a._m33 & b._m33); }
	__device__ __host__ int4x4 operator |(const int4x4 &a, const int4x4 &b) { return int4x4(a._m00 | b._m00,a._m01 | b._m01,a._m02 | b._m02,a._m03 | b._m03,a._m10 | b._m10,a._m11 | b._m11,a._m12 | b._m12,a._m13 | b._m13,a._m20 | b._m20,a._m21 | b._m21,a._m22 | b._m22,a._m23 | b._m23,a._m30 | b._m30,a._m31 | b._m31,a._m32 | b._m32,a._m33 | b._m33); }
	__device__ __host__ int4x4 operator ^(const int4x4 &a, const int4x4 &b) { return int4x4(a._m00 ^ b._m00,a._m01 ^ b._m01,a._m02 ^ b._m02,a._m03 ^ b._m03,a._m10 ^ b._m10,a._m11 ^ b._m11,a._m12 ^ b._m12,a._m13 ^ b._m13,a._m20 ^ b._m20,a._m21 ^ b._m21,a._m22 ^ b._m22,a._m23 ^ b._m23,a._m30 ^ b._m30,a._m31 ^ b._m31,a._m32 ^ b._m32,a._m33 ^ b._m33); }
	__device__ __host__ int4x4 operator ==(const int4x4 &a, const int4x4 &b) { return int4x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m13 == b._m13)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0, (a._m23 == b._m23)?1:0, (a._m30 == b._m30)?1:0, (a._m31 == b._m31)?1:0, (a._m32 == b._m32)?1:0, (a._m33 == b._m33)?1:0); }
	__device__ __host__ int4x4 operator !=(const int4x4 &a, const int4x4 &b) { return int4x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m13 != b._m13)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0, (a._m23 != b._m23)?1:0, (a._m30 != b._m30)?1:0, (a._m31 != b._m31)?1:0, (a._m32 != b._m32)?1:0, (a._m33 != b._m33)?1:0); }
	__device__ __host__ int4x4 operator <(const int4x4 &a, const int4x4 &b) { return int4x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m13 < b._m13)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0, (a._m23 < b._m23)?1:0, (a._m30 < b._m30)?1:0, (a._m31 < b._m31)?1:0, (a._m32 < b._m32)?1:0, (a._m33 < b._m33)?1:0); }
	__device__ __host__ int4x4 operator <=(const int4x4 &a, const int4x4 &b) { return int4x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m13 <= b._m13)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0, (a._m23 <= b._m23)?1:0, (a._m30 <= b._m30)?1:0, (a._m31 <= b._m31)?1:0, (a._m32 <= b._m32)?1:0, (a._m33 <= b._m33)?1:0); }
	__device__ __host__ int4x4 operator >=(const int4x4 &a, const int4x4 &b) { return int4x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m13 >= b._m13)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0, (a._m23 >= b._m23)?1:0, (a._m30 >= b._m30)?1:0, (a._m31 >= b._m31)?1:0, (a._m32 >= b._m32)?1:0, (a._m33 >= b._m33)?1:0); }
	__device__ __host__ int4x4 operator >(const int4x4 &a, const int4x4 &b) { return int4x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m13 > b._m13)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0, (a._m23 > b._m23)?1:0, (a._m30 > b._m30)?1:0, (a._m31 > b._m31)?1:0, (a._m32 > b._m32)?1:0, (a._m33 > b._m33)?1:0); }

	__device__ float __TRASH_float_1;
struct float_1{
	float x;
	__device__ __host__ float& operator[](int idx) {
			if(idx == 0) return this->x;
			return __TRASH_float_1; // Silent return ... valid for HLSL 
	}
	__device__ __host__ float_1(float x){
		this->x=x;
	}
	__device__ __host__ float_1(const int_1 &v);
	__device__ __host__ float_1(const uint_1 &v);
};
	__device__ __host__ float_1 operator -(const float_1 &a) { return float_1(-a.x); }
	__device__ __host__ float_1 operator +(const float_1 &a) { return float_1(+a.x); }
	__device__ __host__  int_1 operator !(const float_1 &a) { return int_1(a.x==0?1:0); }
	__device__ __host__ int_1 operator ==(const float_1 &a, const float_1 &b) { return int_1((a.x == b.x)?1:0); }
	__device__ __host__ int_1 operator !=(const float_1 &a, const float_1 &b) { return int_1((a.x != b.x)?1:0); }
	__device__ __host__ int_1 operator <(const float_1 &a, const float_1 &b) { return int_1((a.x < b.x)?1:0); }
	__device__ __host__ int_1 operator <=(const float_1 &a, const float_1 &b) { return int_1((a.x <= b.x)?1:0); }
	__device__ __host__ int_1 operator >=(const float_1 &a, const float_1 &b) { return int_1((a.x >= b.x)?1:0); }
	__device__ __host__ int_1 operator >(const float_1 &a, const float_1 &b) { return int_1((a.x > b.x)?1:0); }
	__device__ __host__ float_1 operator +(const float_1& a, const float_1& b) { return float_1(a.x + b.x); }
	__device__ __host__ float_1 operator +(const float_1& a, float b) { return float_1(a.x + b); }
	__device__ __host__ float_1 operator +(float a, const float_1& b) { return float_1(a + b.x); }
	__device__ __host__ float_1 operator *(const float_1& a, const float_1& b) { return float_1(a.x * b.x); }
	__device__ __host__ float_1 operator *(const float_1& a, float b) { return float_1(a.x * b); }
	__device__ __host__ float_1 operator *(float a, const float_1& b) { return float_1(a * b.x); }
	__device__ __host__ float_1 operator -(const float_1& a, const float_1& b) { return float_1(a.x - b.x); }
	__device__ __host__ float_1 operator -(const float_1& a, float b) { return float_1(a.x - b); }
	__device__ __host__ float_1 operator -(float a, const float_1& b) { return float_1(a - b.x); }
	__device__ __host__ float_1 operator /(const float_1& a, const float_1& b) { return float_1(a.x / b.x); }
	__device__ __host__ float_1 operator /(const float_1& a, float b) { return float_1(a.x / b); }
	__device__ __host__ float_1 operator /(float a, const float_1& b) { return float_1(a / b.x); }
	__device__ __host__ float_1 operator %(const float_1& a, const float_1& b) { return float_1(fmod(a.x, b.x)); }
	__device__ __host__ float_1 operator %(const float_1& a, float b) { return float_1(fmod(a.x, b)); }
	__device__ __host__ float_1 operator %(float a, const float_1& b) { return float_1(fmod(a, b.x)); }

	__device__ float __TRASH_float_2;
struct float_2{
	float x;
	float y;
	__device__ __host__ float& operator[](int idx) {
			if(idx == 0) return this->x;
			if(idx == 1) return this->y;
			return __TRASH_float_2; // Silent return ... valid for HLSL 
	}
	__device__ __host__ float_2(float x,float y){
		this->x=x;
		this->y=y;
	}
	__device__ __host__ float_2(float v) { new (this) float_2(v,v); }
	__device__ __host__ float_2(float_1 v, float last) { new (this) float_2(v.x,last); }
	__device__ __host__ operator float_1() const { return float_1(this->x); }
	__device__ __host__ float_2(const int_2 &v);
	__device__ __host__ float_2(const uint_2 &v);
};
	__device__ __host__ float_2 operator -(const float_2 &a) { return float_2(-a.x,-a.y); }
	__device__ __host__ float_2 operator +(const float_2 &a) { return float_2(+a.x,+a.y); }
	__device__ __host__  int_2 operator !(const float_2 &a) { return int_2(a.x==0?1:0,a.y==0?1:0); }
	__device__ __host__ int_2 operator ==(const float_2 &a, const float_2 &b) { return int_2((a.x == b.x)?1:0, (a.y == b.y)?1:0); }
	__device__ __host__ int_2 operator !=(const float_2 &a, const float_2 &b) { return int_2((a.x != b.x)?1:0, (a.y != b.y)?1:0); }
	__device__ __host__ int_2 operator <(const float_2 &a, const float_2 &b) { return int_2((a.x < b.x)?1:0, (a.y < b.y)?1:0); }
	__device__ __host__ int_2 operator <=(const float_2 &a, const float_2 &b) { return int_2((a.x <= b.x)?1:0, (a.y <= b.y)?1:0); }
	__device__ __host__ int_2 operator >=(const float_2 &a, const float_2 &b) { return int_2((a.x >= b.x)?1:0, (a.y >= b.y)?1:0); }
	__device__ __host__ int_2 operator >(const float_2 &a, const float_2 &b) { return int_2((a.x > b.x)?1:0, (a.y > b.y)?1:0); }
	__device__ __host__ float_2 operator +(const float_2& a, const float_2& b) { return float_2(a.x + b.x,a.y + b.y); }
	__device__ __host__ float_2 operator +(const float_2& a, float b) { return float_2(a.x + b,a.y + b); }
	__device__ __host__ float_2 operator +(float a, const float_2& b) { return float_2(a + b.x,a + b.y); }
	__device__ __host__ float_2 operator *(const float_2& a, const float_2& b) { return float_2(a.x * b.x,a.y * b.y); }
	__device__ __host__ float_2 operator *(const float_2& a, float b) { return float_2(a.x * b,a.y * b); }
	__device__ __host__ float_2 operator *(float a, const float_2& b) { return float_2(a * b.x,a * b.y); }
	__device__ __host__ float_2 operator -(const float_2& a, const float_2& b) { return float_2(a.x - b.x,a.y - b.y); }
	__device__ __host__ float_2 operator -(const float_2& a, float b) { return float_2(a.x - b,a.y - b); }
	__device__ __host__ float_2 operator -(float a, const float_2& b) { return float_2(a - b.x,a - b.y); }
	__device__ __host__ float_2 operator /(const float_2& a, const float_2& b) { return float_2(a.x / b.x,a.y / b.y); }
	__device__ __host__ float_2 operator /(const float_2& a, float b) { return float_2(a.x / b,a.y / b); }
	__device__ __host__ float_2 operator /(float a, const float_2& b) { return float_2(a / b.x,a / b.y); }
	__device__ __host__ float_2 operator %(const float_2& a, const float_2& b) { return float_2(fmod(a.x, b.x),fmod(a.y, b.y)); }
	__device__ __host__ float_2 operator %(const float_2& a, float b) { return float_2(fmod(a.x, b),fmod(a.y, b)); }
	__device__ __host__ float_2 operator %(float a, const float_2& b) { return float_2(fmod(a, b.x),fmod(a, b.y)); }

	__device__ float __TRASH_float_3;
struct float_3{
	float x;
	float y;
	float z;
	__device__ __host__ float_2 get_xy() { return float_2(this->x, this->y); }
	__device__ __host__ float& operator[](int idx) {
			if(idx == 0) return this->x;
			if(idx == 1) return this->y;
			if(idx == 2) return this->z;
			return __TRASH_float_3; // Silent return ... valid for HLSL 
	}
	__device__ __host__ float_3(float x,float y,float z){
		this->x=x;
		this->y=y;
		this->z=z;
	}
	__device__ __host__ float_3(float v) { new (this) float_3(v,v,v); }
	__device__ __host__ float_3(float_2 v, float last) { new (this) float_3(v.x,v.y,last); }
	__device__ __host__ operator float_1() const { return float_1(this->x); }
	__device__ __host__ operator float_2() const { return float_2(this->x, this->y); }
	__device__ __host__ float_3(const int_3 &v);
	__device__ __host__ float_3(const uint_3 &v);
};
	__device__ __host__ float_3 operator -(const float_3 &a) { return float_3(-a.x,-a.y,-a.z); }
	__device__ __host__ float_3 operator +(const float_3 &a) { return float_3(+a.x,+a.y,+a.z); }
	__device__ __host__  int_3 operator !(const float_3 &a) { return int_3(a.x==0?1:0,a.y==0?1:0,a.z==0?1:0); }
	__device__ __host__ int_3 operator ==(const float_3 &a, const float_3 &b) { return int_3((a.x == b.x)?1:0, (a.y == b.y)?1:0, (a.z == b.z)?1:0); }
	__device__ __host__ int_3 operator !=(const float_3 &a, const float_3 &b) { return int_3((a.x != b.x)?1:0, (a.y != b.y)?1:0, (a.z != b.z)?1:0); }
	__device__ __host__ int_3 operator <(const float_3 &a, const float_3 &b) { return int_3((a.x < b.x)?1:0, (a.y < b.y)?1:0, (a.z < b.z)?1:0); }
	__device__ __host__ int_3 operator <=(const float_3 &a, const float_3 &b) { return int_3((a.x <= b.x)?1:0, (a.y <= b.y)?1:0, (a.z <= b.z)?1:0); }
	__device__ __host__ int_3 operator >=(const float_3 &a, const float_3 &b) { return int_3((a.x >= b.x)?1:0, (a.y >= b.y)?1:0, (a.z >= b.z)?1:0); }
	__device__ __host__ int_3 operator >(const float_3 &a, const float_3 &b) { return int_3((a.x > b.x)?1:0, (a.y > b.y)?1:0, (a.z > b.z)?1:0); }
	__device__ __host__ float_3 operator +(const float_3& a, const float_3& b) { return float_3(a.x + b.x,a.y + b.y,a.z + b.z); }
	__device__ __host__ float_3 operator +(const float_3& a, float b) { return float_3(a.x + b,a.y + b,a.z + b); }
	__device__ __host__ float_3 operator +(float a, const float_3& b) { return float_3(a + b.x,a + b.y,a + b.z); }
	__device__ __host__ float_3 operator *(const float_3& a, const float_3& b) { return float_3(a.x * b.x,a.y * b.y,a.z * b.z); }
	__device__ __host__ float_3 operator *(const float_3& a, float b) { return float_3(a.x * b,a.y * b,a.z * b); }
	__device__ __host__ float_3 operator *(float a, const float_3& b) { return float_3(a * b.x,a * b.y,a * b.z); }
	__device__ __host__ float_3 operator -(const float_3& a, const float_3& b) { return float_3(a.x - b.x,a.y - b.y,a.z - b.z); }
	__device__ __host__ float_3 operator -(const float_3& a, float b) { return float_3(a.x - b,a.y - b,a.z - b); }
	__device__ __host__ float_3 operator -(float a, const float_3& b) { return float_3(a - b.x,a - b.y,a - b.z); }
	__device__ __host__ float_3 operator /(const float_3& a, const float_3& b) { return float_3(a.x / b.x,a.y / b.y,a.z / b.z); }
	__device__ __host__ float_3 operator /(const float_3& a, float b) { return float_3(a.x / b,a.y / b,a.z / b); }
	__device__ __host__ float_3 operator /(float a, const float_3& b) { return float_3(a / b.x,a / b.y,a / b.z); }
	__device__ __host__ float_3 operator %(const float_3& a, const float_3& b) { return float_3(fmod(a.x, b.x),fmod(a.y, b.y),fmod(a.z, b.z)); }
	__device__ __host__ float_3 operator %(const float_3& a, float b) { return float_3(fmod(a.x, b),fmod(a.y, b),fmod(a.z, b)); }
	__device__ __host__ float_3 operator %(float a, const float_3& b) { return float_3(fmod(a, b.x),fmod(a, b.y),fmod(a, b.z)); }

	__device__ float __TRASH_float_4;
struct float_4{
	float x;
	float y;
	float z;
	float w;
	__device__ __host__ float_2 get_xy() { return float_2(this->x, this->y); }
	__device__ __host__ float_3 get_xyz() { return float_3(this->x, this->y, this->z); }
	__device__ __host__ float& operator[](int idx) {
			if(idx == 0) return this->x;
			if(idx == 1) return this->y;
			if(idx == 2) return this->z;
			if(idx == 3) return this->w;
			return __TRASH_float_4; // Silent return ... valid for HLSL 
	}
	__device__ __host__ float_4(float x,float y,float z,float w){
		this->x=x;
		this->y=y;
		this->z=z;
		this->w=w;
	}
	__device__ __host__ float_4(float v) { new (this) float_4(v,v,v,v); }
	__device__ __host__ float_4(float_3 v, float last) { new (this) float_4(v.x,v.y,v.z,last); }
	__device__ __host__ operator float_1() const { return float_1(this->x); }
	__device__ __host__ operator float_2() const { return float_2(this->x, this->y); }
	__device__ __host__ operator float_3() const { return float_3(this->x, this->y, this->z); }
	__device__ __host__ float_4(const int_4 &v);
	__device__ __host__ float_4(const uint_4 &v);
};
	__device__ __host__ float_4 operator -(const float_4 &a) { return float_4(-a.x,-a.y,-a.z,-a.w); }
	__device__ __host__ float_4 operator +(const float_4 &a) { return float_4(+a.x,+a.y,+a.z,+a.w); }
	__device__ __host__  int_4 operator !(const float_4 &a) { return int_4(a.x==0?1:0,a.y==0?1:0,a.z==0?1:0,a.w==0?1:0); }
	__device__ __host__ int_4 operator ==(const float_4 &a, const float_4 &b) { return int_4((a.x == b.x)?1:0, (a.y == b.y)?1:0, (a.z == b.z)?1:0, (a.w == b.w)?1:0); }
	__device__ __host__ int_4 operator !=(const float_4 &a, const float_4 &b) { return int_4((a.x != b.x)?1:0, (a.y != b.y)?1:0, (a.z != b.z)?1:0, (a.w != b.w)?1:0); }
	__device__ __host__ int_4 operator <(const float_4 &a, const float_4 &b) { return int_4((a.x < b.x)?1:0, (a.y < b.y)?1:0, (a.z < b.z)?1:0, (a.w < b.w)?1:0); }
	__device__ __host__ int_4 operator <=(const float_4 &a, const float_4 &b) { return int_4((a.x <= b.x)?1:0, (a.y <= b.y)?1:0, (a.z <= b.z)?1:0, (a.w <= b.w)?1:0); }
	__device__ __host__ int_4 operator >=(const float_4 &a, const float_4 &b) { return int_4((a.x >= b.x)?1:0, (a.y >= b.y)?1:0, (a.z >= b.z)?1:0, (a.w >= b.w)?1:0); }
	__device__ __host__ int_4 operator >(const float_4 &a, const float_4 &b) { return int_4((a.x > b.x)?1:0, (a.y > b.y)?1:0, (a.z > b.z)?1:0, (a.w > b.w)?1:0); }
	__device__ __host__ float_4 operator +(const float_4& a, const float_4& b) { return float_4(a.x + b.x,a.y + b.y,a.z + b.z,a.w + b.w); }
	__device__ __host__ float_4 operator +(const float_4& a, float b) { return float_4(a.x + b,a.y + b,a.z + b,a.w + b); }
	__device__ __host__ float_4 operator +(float a, const float_4& b) { return float_4(a + b.x,a + b.y,a + b.z,a + b.w); }
	__device__ __host__ float_4 operator *(const float_4& a, const float_4& b) { return float_4(a.x * b.x,a.y * b.y,a.z * b.z,a.w * b.w); }
	__device__ __host__ float_4 operator *(const float_4& a, float b) { return float_4(a.x * b,a.y * b,a.z * b,a.w * b); }
	__device__ __host__ float_4 operator *(float a, const float_4& b) { return float_4(a * b.x,a * b.y,a * b.z,a * b.w); }
	__device__ __host__ float_4 operator -(const float_4& a, const float_4& b) { return float_4(a.x - b.x,a.y - b.y,a.z - b.z,a.w - b.w); }
	__device__ __host__ float_4 operator -(const float_4& a, float b) { return float_4(a.x - b,a.y - b,a.z - b,a.w - b); }
	__device__ __host__ float_4 operator -(float a, const float_4& b) { return float_4(a - b.x,a - b.y,a - b.z,a - b.w); }
	__device__ __host__ float_4 operator /(const float_4& a, const float_4& b) { return float_4(a.x / b.x,a.y / b.y,a.z / b.z,a.w / b.w); }
	__device__ __host__ float_4 operator /(const float_4& a, float b) { return float_4(a.x / b,a.y / b,a.z / b,a.w / b); }
	__device__ __host__ float_4 operator /(float a, const float_4& b) { return float_4(a / b.x,a / b.y,a / b.z,a / b.w); }
	__device__ __host__ float_4 operator %(const float_4& a, const float_4& b) { return float_4(fmod(a.x, b.x),fmod(a.y, b.y),fmod(a.z, b.z),fmod(a.w, b.w)); }
	__device__ __host__ float_4 operator %(const float_4& a, float b) { return float_4(fmod(a.x, b),fmod(a.y, b),fmod(a.z, b),fmod(a.w, b)); }
	__device__ __host__ float_4 operator %(float a, const float_4& b) { return float_4(fmod(a, b.x),fmod(a, b.y),fmod(a, b.z),fmod(a, b.w)); }

struct float1x1{
	float _m00;
	__device__ __host__ float_1 operator[] (int row) const {
			if(row == 0) return float_1(_m00);
			return float_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float1x1(float _m00){
		this->_m00=_m00;
	}
	__device__ __host__ operator int1x1() const;
	__device__ __host__ operator uint1x1() const;
};
	__device__ __host__ float1x1 operator -(const float1x1 &a) { return float1x1(-a._m00); }
	__device__ __host__ float1x1 operator +(const float1x1 &a) { return float1x1(+a._m00); }
	__device__ __host__ int1x1 operator !(const float1x1 &a) { return int1x1(a._m00==0?1:0); }
	__device__ __host__ float1x1 operator +(const float1x1 &a, const float1x1 &b) { return float1x1(a._m00 + b._m00); }
	__device__ __host__ float1x1 operator *(const float1x1 &a, const float1x1 &b) { return float1x1(a._m00 * b._m00); }
	__device__ __host__ float1x1 operator -(const float1x1 &a, const float1x1 &b) { return float1x1(a._m00 - b._m00); }
	__device__ __host__ float1x1 operator /(const float1x1 &a, const float1x1 &b) { return float1x1(a._m00 / b._m00); }
	__device__ __host__ float1x1 operator %(const float1x1 &a, const float1x1 &b) { return float1x1(fmod(a._m00, b._m00)); }
	__device__ __host__ int1x1 operator ==(const float1x1 &a, const float1x1 &b) { return int1x1((a._m00 == b._m00)?1:0); }
	__device__ __host__ int1x1 operator !=(const float1x1 &a, const float1x1 &b) { return int1x1((a._m00 != b._m00)?1:0); }
	__device__ __host__ int1x1 operator <(const float1x1 &a, const float1x1 &b) { return int1x1((a._m00 < b._m00)?1:0); }
	__device__ __host__ int1x1 operator <=(const float1x1 &a, const float1x1 &b) { return int1x1((a._m00 <= b._m00)?1:0); }
	__device__ __host__ int1x1 operator >=(const float1x1 &a, const float1x1 &b) { return int1x1((a._m00 >= b._m00)?1:0); }
	__device__ __host__ int1x1 operator >(const float1x1 &a, const float1x1 &b) { return int1x1((a._m00 > b._m00)?1:0); }

struct float1x2{
	float _m00;
	float _m01;
	__device__ __host__ float_2 operator[] (int row) const {
			if(row == 0) return float_2(_m00, _m01);
			return float_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float1x2(float _m00,float _m01){
		this->_m00=_m00;
		this->_m01=_m01;
	}
	__device__ __host__ float1x2(float v){ new (this) float1x2(v,v); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator int1x2() const;
	__device__ __host__ operator uint1x2() const;
};
	__device__ __host__ float1x2 operator -(const float1x2 &a) { return float1x2(-a._m00,-a._m01); }
	__device__ __host__ float1x2 operator +(const float1x2 &a) { return float1x2(+a._m00,+a._m01); }
	__device__ __host__ int1x2 operator !(const float1x2 &a) { return int1x2(a._m00==0?1:0,a._m01==0?1:0); }
	__device__ __host__ float1x2 operator +(const float1x2 &a, const float1x2 &b) { return float1x2(a._m00 + b._m00,a._m01 + b._m01); }
	__device__ __host__ float1x2 operator *(const float1x2 &a, const float1x2 &b) { return float1x2(a._m00 * b._m00,a._m01 * b._m01); }
	__device__ __host__ float1x2 operator -(const float1x2 &a, const float1x2 &b) { return float1x2(a._m00 - b._m00,a._m01 - b._m01); }
	__device__ __host__ float1x2 operator /(const float1x2 &a, const float1x2 &b) { return float1x2(a._m00 / b._m00,a._m01 / b._m01); }
	__device__ __host__ float1x2 operator %(const float1x2 &a, const float1x2 &b) { return float1x2(fmod(a._m00, b._m00),fmod(a._m01, b._m01)); }
	__device__ __host__ int1x2 operator ==(const float1x2 &a, const float1x2 &b) { return int1x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0); }
	__device__ __host__ int1x2 operator !=(const float1x2 &a, const float1x2 &b) { return int1x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0); }
	__device__ __host__ int1x2 operator <(const float1x2 &a, const float1x2 &b) { return int1x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0); }
	__device__ __host__ int1x2 operator <=(const float1x2 &a, const float1x2 &b) { return int1x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0); }
	__device__ __host__ int1x2 operator >=(const float1x2 &a, const float1x2 &b) { return int1x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0); }
	__device__ __host__ int1x2 operator >(const float1x2 &a, const float1x2 &b) { return int1x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0); }

struct float1x3{
	float _m00;
	float _m01;
	float _m02;
	__device__ __host__ float_3 operator[] (int row) const {
			if(row == 0) return float_3(_m00, _m01, _m02);
			return float_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float1x3(float _m00,float _m01,float _m02){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
	}
	__device__ __host__ float1x3(float v){ new (this) float1x3(v,v,v); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float1x2() const { return float1x2(this->_m00, this->_m01); }
	__device__ __host__ operator int1x3() const;
	__device__ __host__ operator uint1x3() const;
};
	__device__ __host__ float1x3 operator -(const float1x3 &a) { return float1x3(-a._m00,-a._m01,-a._m02); }
	__device__ __host__ float1x3 operator +(const float1x3 &a) { return float1x3(+a._m00,+a._m01,+a._m02); }
	__device__ __host__ int1x3 operator !(const float1x3 &a) { return int1x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0); }
	__device__ __host__ float1x3 operator +(const float1x3 &a, const float1x3 &b) { return float1x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02); }
	__device__ __host__ float1x3 operator *(const float1x3 &a, const float1x3 &b) { return float1x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02); }
	__device__ __host__ float1x3 operator -(const float1x3 &a, const float1x3 &b) { return float1x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02); }
	__device__ __host__ float1x3 operator /(const float1x3 &a, const float1x3 &b) { return float1x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02); }
	__device__ __host__ float1x3 operator %(const float1x3 &a, const float1x3 &b) { return float1x3(fmod(a._m00, b._m00),fmod(a._m01, b._m01),fmod(a._m02, b._m02)); }
	__device__ __host__ int1x3 operator ==(const float1x3 &a, const float1x3 &b) { return int1x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0); }
	__device__ __host__ int1x3 operator !=(const float1x3 &a, const float1x3 &b) { return int1x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0); }
	__device__ __host__ int1x3 operator <(const float1x3 &a, const float1x3 &b) { return int1x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0); }
	__device__ __host__ int1x3 operator <=(const float1x3 &a, const float1x3 &b) { return int1x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0); }
	__device__ __host__ int1x3 operator >=(const float1x3 &a, const float1x3 &b) { return int1x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0); }
	__device__ __host__ int1x3 operator >(const float1x3 &a, const float1x3 &b) { return int1x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0); }

struct float1x4{
	float _m00;
	float _m01;
	float _m02;
	float _m03;
	__device__ __host__ float_4 operator[] (int row) const {
			if(row == 0) return float_4(_m00, _m01, _m02, _m03);
			return float_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float1x4(float _m00,float _m01,float _m02,float _m03){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
	}
	__device__ __host__ float1x4(float v){ new (this) float1x4(v,v,v,v); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float1x2() const { return float1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float1x3() const { return float1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator int1x4() const;
	__device__ __host__ operator uint1x4() const;
};
	__device__ __host__ float1x4 operator -(const float1x4 &a) { return float1x4(-a._m00,-a._m01,-a._m02,-a._m03); }
	__device__ __host__ float1x4 operator +(const float1x4 &a) { return float1x4(+a._m00,+a._m01,+a._m02,+a._m03); }
	__device__ __host__ int1x4 operator !(const float1x4 &a) { return int1x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0); }
	__device__ __host__ float1x4 operator +(const float1x4 &a, const float1x4 &b) { return float1x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03); }
	__device__ __host__ float1x4 operator *(const float1x4 &a, const float1x4 &b) { return float1x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03); }
	__device__ __host__ float1x4 operator -(const float1x4 &a, const float1x4 &b) { return float1x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03); }
	__device__ __host__ float1x4 operator /(const float1x4 &a, const float1x4 &b) { return float1x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03); }
	__device__ __host__ float1x4 operator %(const float1x4 &a, const float1x4 &b) { return float1x4(fmod(a._m00, b._m00),fmod(a._m01, b._m01),fmod(a._m02, b._m02),fmod(a._m03, b._m03)); }
	__device__ __host__ int1x4 operator ==(const float1x4 &a, const float1x4 &b) { return int1x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0); }
	__device__ __host__ int1x4 operator !=(const float1x4 &a, const float1x4 &b) { return int1x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0); }
	__device__ __host__ int1x4 operator <(const float1x4 &a, const float1x4 &b) { return int1x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0); }
	__device__ __host__ int1x4 operator <=(const float1x4 &a, const float1x4 &b) { return int1x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0); }
	__device__ __host__ int1x4 operator >=(const float1x4 &a, const float1x4 &b) { return int1x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0); }
	__device__ __host__ int1x4 operator >(const float1x4 &a, const float1x4 &b) { return int1x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0); }

struct float2x1{
	float _m00;
	float _m10;
	__device__ __host__ float_1 operator[] (int row) const {
			if(row == 0) return float_1(_m00);
			if(row == 1) return float_1(_m10);
			return float_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float2x1(float _m00,float _m10){
		this->_m00=_m00;
		this->_m10=_m10;
	}
	__device__ __host__ float2x1(float v){ new (this) float2x1(v,v); }
	__device__ __host__ float2x1(const float1 &r0, const float1 &r1) { new (this) float2x1(r0.x, r1.x); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator int2x1() const;
	__device__ __host__ operator uint2x1() const;
};
	__device__ __host__ float2x1 operator -(const float2x1 &a) { return float2x1(-a._m00,-a._m10); }
	__device__ __host__ float2x1 operator +(const float2x1 &a) { return float2x1(+a._m00,+a._m10); }
	__device__ __host__ int2x1 operator !(const float2x1 &a) { return int2x1(a._m00==0?1:0,a._m10==0?1:0); }
	__device__ __host__ float2x1 operator +(const float2x1 &a, const float2x1 &b) { return float2x1(a._m00 + b._m00,a._m10 + b._m10); }
	__device__ __host__ float2x1 operator *(const float2x1 &a, const float2x1 &b) { return float2x1(a._m00 * b._m00,a._m10 * b._m10); }
	__device__ __host__ float2x1 operator -(const float2x1 &a, const float2x1 &b) { return float2x1(a._m00 - b._m00,a._m10 - b._m10); }
	__device__ __host__ float2x1 operator /(const float2x1 &a, const float2x1 &b) { return float2x1(a._m00 / b._m00,a._m10 / b._m10); }
	__device__ __host__ float2x1 operator %(const float2x1 &a, const float2x1 &b) { return float2x1(fmod(a._m00, b._m00),fmod(a._m10, b._m10)); }
	__device__ __host__ int2x1 operator ==(const float2x1 &a, const float2x1 &b) { return int2x1((a._m00 == b._m00)?1:0, (a._m10 == b._m10)?1:0); }
	__device__ __host__ int2x1 operator !=(const float2x1 &a, const float2x1 &b) { return int2x1((a._m00 != b._m00)?1:0, (a._m10 != b._m10)?1:0); }
	__device__ __host__ int2x1 operator <(const float2x1 &a, const float2x1 &b) { return int2x1((a._m00 < b._m00)?1:0, (a._m10 < b._m10)?1:0); }
	__device__ __host__ int2x1 operator <=(const float2x1 &a, const float2x1 &b) { return int2x1((a._m00 <= b._m00)?1:0, (a._m10 <= b._m10)?1:0); }
	__device__ __host__ int2x1 operator >=(const float2x1 &a, const float2x1 &b) { return int2x1((a._m00 >= b._m00)?1:0, (a._m10 >= b._m10)?1:0); }
	__device__ __host__ int2x1 operator >(const float2x1 &a, const float2x1 &b) { return int2x1((a._m00 > b._m00)?1:0, (a._m10 > b._m10)?1:0); }

struct float2x2{
	float _m00;
	float _m01;
	float _m10;
	float _m11;
	__device__ __host__ float_2 operator[] (int row) const {
			if(row == 0) return float_2(_m00, _m01);
			if(row == 1) return float_2(_m10, _m11);
			return float_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float2x2(float _m00,float _m01,float _m10,float _m11){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m10=_m10;
		this->_m11=_m11;
	}
	__device__ __host__ float2x2(float v){ new (this) float2x2(v,v,v,v); }
	__device__ __host__ float2x2(const float2 &r0, const float2 &r1) { new (this) float2x2(r0.x, r0.y, r1.x, r1.y); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float1x2() const { return float1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float2x1() const { return float2x1(this->_m00, this->_m10); }
	__device__ __host__ operator int2x2() const;
	__device__ __host__ operator uint2x2() const;
};
	__device__ __host__ float2x2 operator -(const float2x2 &a) { return float2x2(-a._m00,-a._m01,-a._m10,-a._m11); }
	__device__ __host__ float2x2 operator +(const float2x2 &a) { return float2x2(+a._m00,+a._m01,+a._m10,+a._m11); }
	__device__ __host__ int2x2 operator !(const float2x2 &a) { return int2x2(a._m00==0?1:0,a._m01==0?1:0,a._m10==0?1:0,a._m11==0?1:0); }
	__device__ __host__ float2x2 operator +(const float2x2 &a, const float2x2 &b) { return float2x2(a._m00 + b._m00,a._m01 + b._m01,a._m10 + b._m10,a._m11 + b._m11); }
	__device__ __host__ float2x2 operator *(const float2x2 &a, const float2x2 &b) { return float2x2(a._m00 * b._m00,a._m01 * b._m01,a._m10 * b._m10,a._m11 * b._m11); }
	__device__ __host__ float2x2 operator -(const float2x2 &a, const float2x2 &b) { return float2x2(a._m00 - b._m00,a._m01 - b._m01,a._m10 - b._m10,a._m11 - b._m11); }
	__device__ __host__ float2x2 operator /(const float2x2 &a, const float2x2 &b) { return float2x2(a._m00 / b._m00,a._m01 / b._m01,a._m10 / b._m10,a._m11 / b._m11); }
	__device__ __host__ float2x2 operator %(const float2x2 &a, const float2x2 &b) { return float2x2(fmod(a._m00, b._m00),fmod(a._m01, b._m01),fmod(a._m10, b._m10),fmod(a._m11, b._m11)); }
	__device__ __host__ int2x2 operator ==(const float2x2 &a, const float2x2 &b) { return int2x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0); }
	__device__ __host__ int2x2 operator !=(const float2x2 &a, const float2x2 &b) { return int2x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0); }
	__device__ __host__ int2x2 operator <(const float2x2 &a, const float2x2 &b) { return int2x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0); }
	__device__ __host__ int2x2 operator <=(const float2x2 &a, const float2x2 &b) { return int2x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0); }
	__device__ __host__ int2x2 operator >=(const float2x2 &a, const float2x2 &b) { return int2x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0); }
	__device__ __host__ int2x2 operator >(const float2x2 &a, const float2x2 &b) { return int2x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0); }

struct float2x3{
	float _m00;
	float _m01;
	float _m02;
	float _m10;
	float _m11;
	float _m12;
	__device__ __host__ float_3 operator[] (int row) const {
			if(row == 0) return float_3(_m00, _m01, _m02);
			if(row == 1) return float_3(_m10, _m11, _m12);
			return float_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float2x3(float _m00,float _m01,float _m02,float _m10,float _m11,float _m12){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
	}
	__device__ __host__ float2x3(float v){ new (this) float2x3(v,v,v,v,v,v); }
	__device__ __host__ float2x3(const float3 &r0, const float3 &r1) { new (this) float2x3(r0.x, r0.y, r0.z, r1.x, r1.y, r1.z); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float1x2() const { return float1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float1x3() const { return float1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator float2x1() const { return float2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float2x2() const { return float2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator int2x3() const;
	__device__ __host__ operator uint2x3() const;
};
	__device__ __host__ float2x3 operator -(const float2x3 &a) { return float2x3(-a._m00,-a._m01,-a._m02,-a._m10,-a._m11,-a._m12); }
	__device__ __host__ float2x3 operator +(const float2x3 &a) { return float2x3(+a._m00,+a._m01,+a._m02,+a._m10,+a._m11,+a._m12); }
	__device__ __host__ int2x3 operator !(const float2x3 &a) { return int2x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0); }
	__device__ __host__ float2x3 operator +(const float2x3 &a, const float2x3 &b) { return float2x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12); }
	__device__ __host__ float2x3 operator *(const float2x3 &a, const float2x3 &b) { return float2x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12); }
	__device__ __host__ float2x3 operator -(const float2x3 &a, const float2x3 &b) { return float2x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12); }
	__device__ __host__ float2x3 operator /(const float2x3 &a, const float2x3 &b) { return float2x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12); }
	__device__ __host__ float2x3 operator %(const float2x3 &a, const float2x3 &b) { return float2x3(fmod(a._m00, b._m00),fmod(a._m01, b._m01),fmod(a._m02, b._m02),fmod(a._m10, b._m10),fmod(a._m11, b._m11),fmod(a._m12, b._m12)); }
	__device__ __host__ int2x3 operator ==(const float2x3 &a, const float2x3 &b) { return int2x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0); }
	__device__ __host__ int2x3 operator !=(const float2x3 &a, const float2x3 &b) { return int2x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0); }
	__device__ __host__ int2x3 operator <(const float2x3 &a, const float2x3 &b) { return int2x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0); }
	__device__ __host__ int2x3 operator <=(const float2x3 &a, const float2x3 &b) { return int2x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0); }
	__device__ __host__ int2x3 operator >=(const float2x3 &a, const float2x3 &b) { return int2x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0); }
	__device__ __host__ int2x3 operator >(const float2x3 &a, const float2x3 &b) { return int2x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0); }

struct float2x4{
	float _m00;
	float _m01;
	float _m02;
	float _m03;
	float _m10;
	float _m11;
	float _m12;
	float _m13;
	__device__ __host__ float_4 operator[] (int row) const {
			if(row == 0) return float_4(_m00, _m01, _m02, _m03);
			if(row == 1) return float_4(_m10, _m11, _m12, _m13);
			return float_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float2x4(float _m00,float _m01,float _m02,float _m03,float _m10,float _m11,float _m12,float _m13){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m13=_m13;
	}
	__device__ __host__ float2x4(float v){ new (this) float2x4(v,v,v,v,v,v,v,v); }
	__device__ __host__ float2x4(const float4 &r0, const float4 &r1) { new (this) float2x4(r0.x, r0.y, r0.z, r0.w, r1.x, r1.y, r1.z, r1.w); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float1x2() const { return float1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float1x3() const { return float1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator float1x4() const { return float1x4(this->_m00, this->_m01, this->_m02, this->_m03); }
	__device__ __host__ operator float2x1() const { return float2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float2x2() const { return float2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator float2x3() const { return float2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator int2x4() const;
	__device__ __host__ operator uint2x4() const;
};
	__device__ __host__ float2x4 operator -(const float2x4 &a) { return float2x4(-a._m00,-a._m01,-a._m02,-a._m03,-a._m10,-a._m11,-a._m12,-a._m13); }
	__device__ __host__ float2x4 operator +(const float2x4 &a) { return float2x4(+a._m00,+a._m01,+a._m02,+a._m03,+a._m10,+a._m11,+a._m12,+a._m13); }
	__device__ __host__ int2x4 operator !(const float2x4 &a) { return int2x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m13==0?1:0); }
	__device__ __host__ float2x4 operator +(const float2x4 &a, const float2x4 &b) { return float2x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m13 + b._m13); }
	__device__ __host__ float2x4 operator *(const float2x4 &a, const float2x4 &b) { return float2x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m13 * b._m13); }
	__device__ __host__ float2x4 operator -(const float2x4 &a, const float2x4 &b) { return float2x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m13 - b._m13); }
	__device__ __host__ float2x4 operator /(const float2x4 &a, const float2x4 &b) { return float2x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m13 / b._m13); }
	__device__ __host__ float2x4 operator %(const float2x4 &a, const float2x4 &b) { return float2x4(fmod(a._m00, b._m00),fmod(a._m01, b._m01),fmod(a._m02, b._m02),fmod(a._m03, b._m03),fmod(a._m10, b._m10),fmod(a._m11, b._m11),fmod(a._m12, b._m12),fmod(a._m13, b._m13)); }
	__device__ __host__ int2x4 operator ==(const float2x4 &a, const float2x4 &b) { return int2x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m13 == b._m13)?1:0); }
	__device__ __host__ int2x4 operator !=(const float2x4 &a, const float2x4 &b) { return int2x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m13 != b._m13)?1:0); }
	__device__ __host__ int2x4 operator <(const float2x4 &a, const float2x4 &b) { return int2x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m13 < b._m13)?1:0); }
	__device__ __host__ int2x4 operator <=(const float2x4 &a, const float2x4 &b) { return int2x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m13 <= b._m13)?1:0); }
	__device__ __host__ int2x4 operator >=(const float2x4 &a, const float2x4 &b) { return int2x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m13 >= b._m13)?1:0); }
	__device__ __host__ int2x4 operator >(const float2x4 &a, const float2x4 &b) { return int2x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m13 > b._m13)?1:0); }

struct float3x1{
	float _m00;
	float _m10;
	float _m20;
	__device__ __host__ float_1 operator[] (int row) const {
			if(row == 0) return float_1(_m00);
			if(row == 1) return float_1(_m10);
			if(row == 2) return float_1(_m20);
			return float_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float3x1(float _m00,float _m10,float _m20){
		this->_m00=_m00;
		this->_m10=_m10;
		this->_m20=_m20;
	}
	__device__ __host__ float3x1(float v){ new (this) float3x1(v,v,v); }
	__device__ __host__ float3x1(const float1 &r0, const float1 &r1, const float1 &r2) { new (this) float3x1(r0.x, r1.x, r2.x); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float2x1() const { return float2x1(this->_m00, this->_m10); }
	__device__ __host__ operator int3x1() const;
	__device__ __host__ operator uint3x1() const;
};
	__device__ __host__ float3x1 operator -(const float3x1 &a) { return float3x1(-a._m00,-a._m10,-a._m20); }
	__device__ __host__ float3x1 operator +(const float3x1 &a) { return float3x1(+a._m00,+a._m10,+a._m20); }
	__device__ __host__ int3x1 operator !(const float3x1 &a) { return int3x1(a._m00==0?1:0,a._m10==0?1:0,a._m20==0?1:0); }
	__device__ __host__ float3x1 operator +(const float3x1 &a, const float3x1 &b) { return float3x1(a._m00 + b._m00,a._m10 + b._m10,a._m20 + b._m20); }
	__device__ __host__ float3x1 operator *(const float3x1 &a, const float3x1 &b) { return float3x1(a._m00 * b._m00,a._m10 * b._m10,a._m20 * b._m20); }
	__device__ __host__ float3x1 operator -(const float3x1 &a, const float3x1 &b) { return float3x1(a._m00 - b._m00,a._m10 - b._m10,a._m20 - b._m20); }
	__device__ __host__ float3x1 operator /(const float3x1 &a, const float3x1 &b) { return float3x1(a._m00 / b._m00,a._m10 / b._m10,a._m20 / b._m20); }
	__device__ __host__ float3x1 operator %(const float3x1 &a, const float3x1 &b) { return float3x1(fmod(a._m00, b._m00),fmod(a._m10, b._m10),fmod(a._m20, b._m20)); }
	__device__ __host__ int3x1 operator ==(const float3x1 &a, const float3x1 &b) { return int3x1((a._m00 == b._m00)?1:0, (a._m10 == b._m10)?1:0, (a._m20 == b._m20)?1:0); }
	__device__ __host__ int3x1 operator !=(const float3x1 &a, const float3x1 &b) { return int3x1((a._m00 != b._m00)?1:0, (a._m10 != b._m10)?1:0, (a._m20 != b._m20)?1:0); }
	__device__ __host__ int3x1 operator <(const float3x1 &a, const float3x1 &b) { return int3x1((a._m00 < b._m00)?1:0, (a._m10 < b._m10)?1:0, (a._m20 < b._m20)?1:0); }
	__device__ __host__ int3x1 operator <=(const float3x1 &a, const float3x1 &b) { return int3x1((a._m00 <= b._m00)?1:0, (a._m10 <= b._m10)?1:0, (a._m20 <= b._m20)?1:0); }
	__device__ __host__ int3x1 operator >=(const float3x1 &a, const float3x1 &b) { return int3x1((a._m00 >= b._m00)?1:0, (a._m10 >= b._m10)?1:0, (a._m20 >= b._m20)?1:0); }
	__device__ __host__ int3x1 operator >(const float3x1 &a, const float3x1 &b) { return int3x1((a._m00 > b._m00)?1:0, (a._m10 > b._m10)?1:0, (a._m20 > b._m20)?1:0); }

struct float3x2{
	float _m00;
	float _m01;
	float _m10;
	float _m11;
	float _m20;
	float _m21;
	__device__ __host__ float_2 operator[] (int row) const {
			if(row == 0) return float_2(_m00, _m01);
			if(row == 1) return float_2(_m10, _m11);
			if(row == 2) return float_2(_m20, _m21);
			return float_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float3x2(float _m00,float _m01,float _m10,float _m11,float _m20,float _m21){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m20=_m20;
		this->_m21=_m21;
	}
	__device__ __host__ float3x2(float v){ new (this) float3x2(v,v,v,v,v,v); }
	__device__ __host__ float3x2(const float2 &r0, const float2 &r1, const float2 &r2) { new (this) float3x2(r0.x, r0.y, r1.x, r1.y, r2.x, r2.y); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float1x2() const { return float1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float2x1() const { return float2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float2x2() const { return float2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator float3x1() const { return float3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator int3x2() const;
	__device__ __host__ operator uint3x2() const;
};
	__device__ __host__ float3x2 operator -(const float3x2 &a) { return float3x2(-a._m00,-a._m01,-a._m10,-a._m11,-a._m20,-a._m21); }
	__device__ __host__ float3x2 operator +(const float3x2 &a) { return float3x2(+a._m00,+a._m01,+a._m10,+a._m11,+a._m20,+a._m21); }
	__device__ __host__ int3x2 operator !(const float3x2 &a) { return int3x2(a._m00==0?1:0,a._m01==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m20==0?1:0,a._m21==0?1:0); }
	__device__ __host__ float3x2 operator +(const float3x2 &a, const float3x2 &b) { return float3x2(a._m00 + b._m00,a._m01 + b._m01,a._m10 + b._m10,a._m11 + b._m11,a._m20 + b._m20,a._m21 + b._m21); }
	__device__ __host__ float3x2 operator *(const float3x2 &a, const float3x2 &b) { return float3x2(a._m00 * b._m00,a._m01 * b._m01,a._m10 * b._m10,a._m11 * b._m11,a._m20 * b._m20,a._m21 * b._m21); }
	__device__ __host__ float3x2 operator -(const float3x2 &a, const float3x2 &b) { return float3x2(a._m00 - b._m00,a._m01 - b._m01,a._m10 - b._m10,a._m11 - b._m11,a._m20 - b._m20,a._m21 - b._m21); }
	__device__ __host__ float3x2 operator /(const float3x2 &a, const float3x2 &b) { return float3x2(a._m00 / b._m00,a._m01 / b._m01,a._m10 / b._m10,a._m11 / b._m11,a._m20 / b._m20,a._m21 / b._m21); }
	__device__ __host__ float3x2 operator %(const float3x2 &a, const float3x2 &b) { return float3x2(fmod(a._m00, b._m00),fmod(a._m01, b._m01),fmod(a._m10, b._m10),fmod(a._m11, b._m11),fmod(a._m20, b._m20),fmod(a._m21, b._m21)); }
	__device__ __host__ int3x2 operator ==(const float3x2 &a, const float3x2 &b) { return int3x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0); }
	__device__ __host__ int3x2 operator !=(const float3x2 &a, const float3x2 &b) { return int3x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0); }
	__device__ __host__ int3x2 operator <(const float3x2 &a, const float3x2 &b) { return int3x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0); }
	__device__ __host__ int3x2 operator <=(const float3x2 &a, const float3x2 &b) { return int3x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0); }
	__device__ __host__ int3x2 operator >=(const float3x2 &a, const float3x2 &b) { return int3x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0); }
	__device__ __host__ int3x2 operator >(const float3x2 &a, const float3x2 &b) { return int3x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0); }

struct float3x3{
	float _m00;
	float _m01;
	float _m02;
	float _m10;
	float _m11;
	float _m12;
	float _m20;
	float _m21;
	float _m22;
	__device__ __host__ float_3 operator[] (int row) const {
			if(row == 0) return float_3(_m00, _m01, _m02);
			if(row == 1) return float_3(_m10, _m11, _m12);
			if(row == 2) return float_3(_m20, _m21, _m22);
			return float_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float3x3(float _m00,float _m01,float _m02,float _m10,float _m11,float _m12,float _m20,float _m21,float _m22){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
	}
	__device__ __host__ float3x3(float v){ new (this) float3x3(v,v,v,v,v,v,v,v,v); }
	__device__ __host__ float3x3(const float3 &r0, const float3 &r1, const float3 &r2) { new (this) float3x3(r0.x, r0.y, r0.z, r1.x, r1.y, r1.z, r2.x, r2.y, r2.z); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float1x2() const { return float1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float1x3() const { return float1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator float2x1() const { return float2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float2x2() const { return float2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator float2x3() const { return float2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator float3x1() const { return float3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator float3x2() const { return float3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator int3x3() const;
	__device__ __host__ operator uint3x3() const;
};
	__device__ __host__ float3x3 operator -(const float3x3 &a) { return float3x3(-a._m00,-a._m01,-a._m02,-a._m10,-a._m11,-a._m12,-a._m20,-a._m21,-a._m22); }
	__device__ __host__ float3x3 operator +(const float3x3 &a) { return float3x3(+a._m00,+a._m01,+a._m02,+a._m10,+a._m11,+a._m12,+a._m20,+a._m21,+a._m22); }
	__device__ __host__ int3x3 operator !(const float3x3 &a) { return int3x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0); }
	__device__ __host__ float3x3 operator +(const float3x3 &a, const float3x3 &b) { return float3x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22); }
	__device__ __host__ float3x3 operator *(const float3x3 &a, const float3x3 &b) { return float3x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22); }
	__device__ __host__ float3x3 operator -(const float3x3 &a, const float3x3 &b) { return float3x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22); }
	__device__ __host__ float3x3 operator /(const float3x3 &a, const float3x3 &b) { return float3x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22); }
	__device__ __host__ float3x3 operator %(const float3x3 &a, const float3x3 &b) { return float3x3(fmod(a._m00, b._m00),fmod(a._m01, b._m01),fmod(a._m02, b._m02),fmod(a._m10, b._m10),fmod(a._m11, b._m11),fmod(a._m12, b._m12),fmod(a._m20, b._m20),fmod(a._m21, b._m21),fmod(a._m22, b._m22)); }
	__device__ __host__ int3x3 operator ==(const float3x3 &a, const float3x3 &b) { return int3x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0); }
	__device__ __host__ int3x3 operator !=(const float3x3 &a, const float3x3 &b) { return int3x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0); }
	__device__ __host__ int3x3 operator <(const float3x3 &a, const float3x3 &b) { return int3x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0); }
	__device__ __host__ int3x3 operator <=(const float3x3 &a, const float3x3 &b) { return int3x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0); }
	__device__ __host__ int3x3 operator >=(const float3x3 &a, const float3x3 &b) { return int3x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0); }
	__device__ __host__ int3x3 operator >(const float3x3 &a, const float3x3 &b) { return int3x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0); }

struct float3x4{
	float _m00;
	float _m01;
	float _m02;
	float _m03;
	float _m10;
	float _m11;
	float _m12;
	float _m13;
	float _m20;
	float _m21;
	float _m22;
	float _m23;
	__device__ __host__ float_4 operator[] (int row) const {
			if(row == 0) return float_4(_m00, _m01, _m02, _m03);
			if(row == 1) return float_4(_m10, _m11, _m12, _m13);
			if(row == 2) return float_4(_m20, _m21, _m22, _m23);
			return float_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float3x4(float _m00,float _m01,float _m02,float _m03,float _m10,float _m11,float _m12,float _m13,float _m20,float _m21,float _m22,float _m23){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m13=_m13;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
		this->_m23=_m23;
	}
	__device__ __host__ float3x4(float v){ new (this) float3x4(v,v,v,v,v,v,v,v,v,v,v,v); }
	__device__ __host__ float3x4(const float4 &r0, const float4 &r1, const float4 &r2) { new (this) float3x4(r0.x, r0.y, r0.z, r0.w, r1.x, r1.y, r1.z, r1.w, r2.x, r2.y, r2.z, r2.w); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float1x2() const { return float1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float1x3() const { return float1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator float1x4() const { return float1x4(this->_m00, this->_m01, this->_m02, this->_m03); }
	__device__ __host__ operator float2x1() const { return float2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float2x2() const { return float2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator float2x3() const { return float2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator float2x4() const { return float2x4(this->_m00, this->_m01, this->_m02, this->_m03, this->_m10, this->_m11, this->_m12, this->_m13); }
	__device__ __host__ operator float3x1() const { return float3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator float3x2() const { return float3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator float3x3() const { return float3x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22); }
	__device__ __host__ operator int3x4() const;
	__device__ __host__ operator uint3x4() const;
};
	__device__ __host__ float3x4 operator -(const float3x4 &a) { return float3x4(-a._m00,-a._m01,-a._m02,-a._m03,-a._m10,-a._m11,-a._m12,-a._m13,-a._m20,-a._m21,-a._m22,-a._m23); }
	__device__ __host__ float3x4 operator +(const float3x4 &a) { return float3x4(+a._m00,+a._m01,+a._m02,+a._m03,+a._m10,+a._m11,+a._m12,+a._m13,+a._m20,+a._m21,+a._m22,+a._m23); }
	__device__ __host__ int3x4 operator !(const float3x4 &a) { return int3x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m13==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0,a._m23==0?1:0); }
	__device__ __host__ float3x4 operator +(const float3x4 &a, const float3x4 &b) { return float3x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m13 + b._m13,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22,a._m23 + b._m23); }
	__device__ __host__ float3x4 operator *(const float3x4 &a, const float3x4 &b) { return float3x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m13 * b._m13,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22,a._m23 * b._m23); }
	__device__ __host__ float3x4 operator -(const float3x4 &a, const float3x4 &b) { return float3x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m13 - b._m13,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22,a._m23 - b._m23); }
	__device__ __host__ float3x4 operator /(const float3x4 &a, const float3x4 &b) { return float3x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m13 / b._m13,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22,a._m23 / b._m23); }
	__device__ __host__ float3x4 operator %(const float3x4 &a, const float3x4 &b) { return float3x4(fmod(a._m00, b._m00),fmod(a._m01, b._m01),fmod(a._m02, b._m02),fmod(a._m03, b._m03),fmod(a._m10, b._m10),fmod(a._m11, b._m11),fmod(a._m12, b._m12),fmod(a._m13, b._m13),fmod(a._m20, b._m20),fmod(a._m21, b._m21),fmod(a._m22, b._m22),fmod(a._m23, b._m23)); }
	__device__ __host__ int3x4 operator ==(const float3x4 &a, const float3x4 &b) { return int3x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m13 == b._m13)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0, (a._m23 == b._m23)?1:0); }
	__device__ __host__ int3x4 operator !=(const float3x4 &a, const float3x4 &b) { return int3x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m13 != b._m13)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0, (a._m23 != b._m23)?1:0); }
	__device__ __host__ int3x4 operator <(const float3x4 &a, const float3x4 &b) { return int3x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m13 < b._m13)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0, (a._m23 < b._m23)?1:0); }
	__device__ __host__ int3x4 operator <=(const float3x4 &a, const float3x4 &b) { return int3x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m13 <= b._m13)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0, (a._m23 <= b._m23)?1:0); }
	__device__ __host__ int3x4 operator >=(const float3x4 &a, const float3x4 &b) { return int3x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m13 >= b._m13)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0, (a._m23 >= b._m23)?1:0); }
	__device__ __host__ int3x4 operator >(const float3x4 &a, const float3x4 &b) { return int3x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m13 > b._m13)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0, (a._m23 > b._m23)?1:0); }

struct float4x1{
	float _m00;
	float _m10;
	float _m20;
	float _m30;
	__device__ __host__ float_1 operator[] (int row) const {
			if(row == 0) return float_1(_m00);
			if(row == 1) return float_1(_m10);
			if(row == 2) return float_1(_m20);
			if(row == 3) return float_1(_m30);
			return float_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float4x1(float _m00,float _m10,float _m20,float _m30){
		this->_m00=_m00;
		this->_m10=_m10;
		this->_m20=_m20;
		this->_m30=_m30;
	}
	__device__ __host__ float4x1(float v){ new (this) float4x1(v,v,v,v); }
	__device__ __host__ float4x1(const float1 &r0, const float1 &r1, const float1 &r2, const float1 &r3) { new (this) float4x1(r0.x, r1.x, r2.x, r3.x); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float2x1() const { return float2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float3x1() const { return float3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator int4x1() const;
	__device__ __host__ operator uint4x1() const;
};
	__device__ __host__ float4x1 operator -(const float4x1 &a) { return float4x1(-a._m00,-a._m10,-a._m20,-a._m30); }
	__device__ __host__ float4x1 operator +(const float4x1 &a) { return float4x1(+a._m00,+a._m10,+a._m20,+a._m30); }
	__device__ __host__ int4x1 operator !(const float4x1 &a) { return int4x1(a._m00==0?1:0,a._m10==0?1:0,a._m20==0?1:0,a._m30==0?1:0); }
	__device__ __host__ float4x1 operator +(const float4x1 &a, const float4x1 &b) { return float4x1(a._m00 + b._m00,a._m10 + b._m10,a._m20 + b._m20,a._m30 + b._m30); }
	__device__ __host__ float4x1 operator *(const float4x1 &a, const float4x1 &b) { return float4x1(a._m00 * b._m00,a._m10 * b._m10,a._m20 * b._m20,a._m30 * b._m30); }
	__device__ __host__ float4x1 operator -(const float4x1 &a, const float4x1 &b) { return float4x1(a._m00 - b._m00,a._m10 - b._m10,a._m20 - b._m20,a._m30 - b._m30); }
	__device__ __host__ float4x1 operator /(const float4x1 &a, const float4x1 &b) { return float4x1(a._m00 / b._m00,a._m10 / b._m10,a._m20 / b._m20,a._m30 / b._m30); }
	__device__ __host__ float4x1 operator %(const float4x1 &a, const float4x1 &b) { return float4x1(fmod(a._m00, b._m00),fmod(a._m10, b._m10),fmod(a._m20, b._m20),fmod(a._m30, b._m30)); }
	__device__ __host__ int4x1 operator ==(const float4x1 &a, const float4x1 &b) { return int4x1((a._m00 == b._m00)?1:0, (a._m10 == b._m10)?1:0, (a._m20 == b._m20)?1:0, (a._m30 == b._m30)?1:0); }
	__device__ __host__ int4x1 operator !=(const float4x1 &a, const float4x1 &b) { return int4x1((a._m00 != b._m00)?1:0, (a._m10 != b._m10)?1:0, (a._m20 != b._m20)?1:0, (a._m30 != b._m30)?1:0); }
	__device__ __host__ int4x1 operator <(const float4x1 &a, const float4x1 &b) { return int4x1((a._m00 < b._m00)?1:0, (a._m10 < b._m10)?1:0, (a._m20 < b._m20)?1:0, (a._m30 < b._m30)?1:0); }
	__device__ __host__ int4x1 operator <=(const float4x1 &a, const float4x1 &b) { return int4x1((a._m00 <= b._m00)?1:0, (a._m10 <= b._m10)?1:0, (a._m20 <= b._m20)?1:0, (a._m30 <= b._m30)?1:0); }
	__device__ __host__ int4x1 operator >=(const float4x1 &a, const float4x1 &b) { return int4x1((a._m00 >= b._m00)?1:0, (a._m10 >= b._m10)?1:0, (a._m20 >= b._m20)?1:0, (a._m30 >= b._m30)?1:0); }
	__device__ __host__ int4x1 operator >(const float4x1 &a, const float4x1 &b) { return int4x1((a._m00 > b._m00)?1:0, (a._m10 > b._m10)?1:0, (a._m20 > b._m20)?1:0, (a._m30 > b._m30)?1:0); }

struct float4x2{
	float _m00;
	float _m01;
	float _m10;
	float _m11;
	float _m20;
	float _m21;
	float _m30;
	float _m31;
	__device__ __host__ float_2 operator[] (int row) const {
			if(row == 0) return float_2(_m00, _m01);
			if(row == 1) return float_2(_m10, _m11);
			if(row == 2) return float_2(_m20, _m21);
			if(row == 3) return float_2(_m30, _m31);
			return float_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float4x2(float _m00,float _m01,float _m10,float _m11,float _m20,float _m21,float _m30,float _m31){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m30=_m30;
		this->_m31=_m31;
	}
	__device__ __host__ float4x2(float v){ new (this) float4x2(v,v,v,v,v,v,v,v); }
	__device__ __host__ float4x2(const float2 &r0, const float2 &r1, const float2 &r2, const float2 &r3) { new (this) float4x2(r0.x, r0.y, r1.x, r1.y, r2.x, r2.y, r3.x, r3.y); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float1x2() const { return float1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float2x1() const { return float2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float2x2() const { return float2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator float3x1() const { return float3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator float3x2() const { return float3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator float4x1() const { return float4x1(this->_m00, this->_m10, this->_m20, this->_m30); }
	__device__ __host__ operator int4x2() const;
	__device__ __host__ operator uint4x2() const;
};
	__device__ __host__ float4x2 operator -(const float4x2 &a) { return float4x2(-a._m00,-a._m01,-a._m10,-a._m11,-a._m20,-a._m21,-a._m30,-a._m31); }
	__device__ __host__ float4x2 operator +(const float4x2 &a) { return float4x2(+a._m00,+a._m01,+a._m10,+a._m11,+a._m20,+a._m21,+a._m30,+a._m31); }
	__device__ __host__ int4x2 operator !(const float4x2 &a) { return int4x2(a._m00==0?1:0,a._m01==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m30==0?1:0,a._m31==0?1:0); }
	__device__ __host__ float4x2 operator +(const float4x2 &a, const float4x2 &b) { return float4x2(a._m00 + b._m00,a._m01 + b._m01,a._m10 + b._m10,a._m11 + b._m11,a._m20 + b._m20,a._m21 + b._m21,a._m30 + b._m30,a._m31 + b._m31); }
	__device__ __host__ float4x2 operator *(const float4x2 &a, const float4x2 &b) { return float4x2(a._m00 * b._m00,a._m01 * b._m01,a._m10 * b._m10,a._m11 * b._m11,a._m20 * b._m20,a._m21 * b._m21,a._m30 * b._m30,a._m31 * b._m31); }
	__device__ __host__ float4x2 operator -(const float4x2 &a, const float4x2 &b) { return float4x2(a._m00 - b._m00,a._m01 - b._m01,a._m10 - b._m10,a._m11 - b._m11,a._m20 - b._m20,a._m21 - b._m21,a._m30 - b._m30,a._m31 - b._m31); }
	__device__ __host__ float4x2 operator /(const float4x2 &a, const float4x2 &b) { return float4x2(a._m00 / b._m00,a._m01 / b._m01,a._m10 / b._m10,a._m11 / b._m11,a._m20 / b._m20,a._m21 / b._m21,a._m30 / b._m30,a._m31 / b._m31); }
	__device__ __host__ float4x2 operator %(const float4x2 &a, const float4x2 &b) { return float4x2(fmod(a._m00, b._m00),fmod(a._m01, b._m01),fmod(a._m10, b._m10),fmod(a._m11, b._m11),fmod(a._m20, b._m20),fmod(a._m21, b._m21),fmod(a._m30, b._m30),fmod(a._m31, b._m31)); }
	__device__ __host__ int4x2 operator ==(const float4x2 &a, const float4x2 &b) { return int4x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m30 == b._m30)?1:0, (a._m31 == b._m31)?1:0); }
	__device__ __host__ int4x2 operator !=(const float4x2 &a, const float4x2 &b) { return int4x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m30 != b._m30)?1:0, (a._m31 != b._m31)?1:0); }
	__device__ __host__ int4x2 operator <(const float4x2 &a, const float4x2 &b) { return int4x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m30 < b._m30)?1:0, (a._m31 < b._m31)?1:0); }
	__device__ __host__ int4x2 operator <=(const float4x2 &a, const float4x2 &b) { return int4x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m30 <= b._m30)?1:0, (a._m31 <= b._m31)?1:0); }
	__device__ __host__ int4x2 operator >=(const float4x2 &a, const float4x2 &b) { return int4x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m30 >= b._m30)?1:0, (a._m31 >= b._m31)?1:0); }
	__device__ __host__ int4x2 operator >(const float4x2 &a, const float4x2 &b) { return int4x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m30 > b._m30)?1:0, (a._m31 > b._m31)?1:0); }

struct float4x3{
	float _m00;
	float _m01;
	float _m02;
	float _m10;
	float _m11;
	float _m12;
	float _m20;
	float _m21;
	float _m22;
	float _m30;
	float _m31;
	float _m32;
	__device__ __host__ float_3 operator[] (int row) const {
			if(row == 0) return float_3(_m00, _m01, _m02);
			if(row == 1) return float_3(_m10, _m11, _m12);
			if(row == 2) return float_3(_m20, _m21, _m22);
			if(row == 3) return float_3(_m30, _m31, _m32);
			return float_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float4x3(float _m00,float _m01,float _m02,float _m10,float _m11,float _m12,float _m20,float _m21,float _m22,float _m30,float _m31,float _m32){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
		this->_m30=_m30;
		this->_m31=_m31;
		this->_m32=_m32;
	}
	__device__ __host__ float4x3(float v){ new (this) float4x3(v,v,v,v,v,v,v,v,v,v,v,v); }
	__device__ __host__ float4x3(const float3 &r0, const float3 &r1, const float3 &r2, const float3 &r3) { new (this) float4x3(r0.x, r0.y, r0.z, r1.x, r1.y, r1.z, r2.x, r2.y, r2.z, r3.x, r3.y, r3.z); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float1x2() const { return float1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float1x3() const { return float1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator float2x1() const { return float2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float2x2() const { return float2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator float2x3() const { return float2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator float3x1() const { return float3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator float3x2() const { return float3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator float3x3() const { return float3x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22); }
	__device__ __host__ operator float4x1() const { return float4x1(this->_m00, this->_m10, this->_m20, this->_m30); }
	__device__ __host__ operator float4x2() const { return float4x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21, this->_m30, this->_m31); }
	__device__ __host__ operator int4x3() const;
	__device__ __host__ operator uint4x3() const;
};
	__device__ __host__ float4x3 operator -(const float4x3 &a) { return float4x3(-a._m00,-a._m01,-a._m02,-a._m10,-a._m11,-a._m12,-a._m20,-a._m21,-a._m22,-a._m30,-a._m31,-a._m32); }
	__device__ __host__ float4x3 operator +(const float4x3 &a) { return float4x3(+a._m00,+a._m01,+a._m02,+a._m10,+a._m11,+a._m12,+a._m20,+a._m21,+a._m22,+a._m30,+a._m31,+a._m32); }
	__device__ __host__ int4x3 operator !(const float4x3 &a) { return int4x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0,a._m30==0?1:0,a._m31==0?1:0,a._m32==0?1:0); }
	__device__ __host__ float4x3 operator +(const float4x3 &a, const float4x3 &b) { return float4x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22,a._m30 + b._m30,a._m31 + b._m31,a._m32 + b._m32); }
	__device__ __host__ float4x3 operator *(const float4x3 &a, const float4x3 &b) { return float4x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22,a._m30 * b._m30,a._m31 * b._m31,a._m32 * b._m32); }
	__device__ __host__ float4x3 operator -(const float4x3 &a, const float4x3 &b) { return float4x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22,a._m30 - b._m30,a._m31 - b._m31,a._m32 - b._m32); }
	__device__ __host__ float4x3 operator /(const float4x3 &a, const float4x3 &b) { return float4x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22,a._m30 / b._m30,a._m31 / b._m31,a._m32 / b._m32); }
	__device__ __host__ float4x3 operator %(const float4x3 &a, const float4x3 &b) { return float4x3(fmod(a._m00, b._m00),fmod(a._m01, b._m01),fmod(a._m02, b._m02),fmod(a._m10, b._m10),fmod(a._m11, b._m11),fmod(a._m12, b._m12),fmod(a._m20, b._m20),fmod(a._m21, b._m21),fmod(a._m22, b._m22),fmod(a._m30, b._m30),fmod(a._m31, b._m31),fmod(a._m32, b._m32)); }
	__device__ __host__ int4x3 operator ==(const float4x3 &a, const float4x3 &b) { return int4x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0, (a._m30 == b._m30)?1:0, (a._m31 == b._m31)?1:0, (a._m32 == b._m32)?1:0); }
	__device__ __host__ int4x3 operator !=(const float4x3 &a, const float4x3 &b) { return int4x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0, (a._m30 != b._m30)?1:0, (a._m31 != b._m31)?1:0, (a._m32 != b._m32)?1:0); }
	__device__ __host__ int4x3 operator <(const float4x3 &a, const float4x3 &b) { return int4x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0, (a._m30 < b._m30)?1:0, (a._m31 < b._m31)?1:0, (a._m32 < b._m32)?1:0); }
	__device__ __host__ int4x3 operator <=(const float4x3 &a, const float4x3 &b) { return int4x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0, (a._m30 <= b._m30)?1:0, (a._m31 <= b._m31)?1:0, (a._m32 <= b._m32)?1:0); }
	__device__ __host__ int4x3 operator >=(const float4x3 &a, const float4x3 &b) { return int4x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0, (a._m30 >= b._m30)?1:0, (a._m31 >= b._m31)?1:0, (a._m32 >= b._m32)?1:0); }
	__device__ __host__ int4x3 operator >(const float4x3 &a, const float4x3 &b) { return int4x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0, (a._m30 > b._m30)?1:0, (a._m31 > b._m31)?1:0, (a._m32 > b._m32)?1:0); }

struct float4x4{
	float _m00;
	float _m01;
	float _m02;
	float _m03;
	float _m10;
	float _m11;
	float _m12;
	float _m13;
	float _m20;
	float _m21;
	float _m22;
	float _m23;
	float _m30;
	float _m31;
	float _m32;
	float _m33;
	__device__ __host__ float_4 operator[] (int row) const {
			if(row == 0) return float_4(_m00, _m01, _m02, _m03);
			if(row == 1) return float_4(_m10, _m11, _m12, _m13);
			if(row == 2) return float_4(_m20, _m21, _m22, _m23);
			if(row == 3) return float_4(_m30, _m31, _m32, _m33);
			return float_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ float4x4(float _m00,float _m01,float _m02,float _m03,float _m10,float _m11,float _m12,float _m13,float _m20,float _m21,float _m22,float _m23,float _m30,float _m31,float _m32,float _m33){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m13=_m13;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
		this->_m23=_m23;
		this->_m30=_m30;
		this->_m31=_m31;
		this->_m32=_m32;
		this->_m33=_m33;
	}
	__device__ __host__ float4x4(float v){ new (this) float4x4(v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v); }
	__device__ __host__ float4x4(const float4 &r0, const float4 &r1, const float4 &r2, const float4 &r3) { new (this) float4x4(r0.x, r0.y, r0.z, r0.w, r1.x, r1.y, r1.z, r1.w, r2.x, r2.y, r2.z, r2.w, r3.x, r3.y, r3.z, r3.w); }
	__device__ __host__ operator float1x1() const { return float1x1(this->_m00); }
	__device__ __host__ operator float1x2() const { return float1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float1x3() const { return float1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator float1x4() const { return float1x4(this->_m00, this->_m01, this->_m02, this->_m03); }
	__device__ __host__ operator float2x1() const { return float2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float2x2() const { return float2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator float2x3() const { return float2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator float2x4() const { return float2x4(this->_m00, this->_m01, this->_m02, this->_m03, this->_m10, this->_m11, this->_m12, this->_m13); }
	__device__ __host__ operator float3x1() const { return float3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator float3x2() const { return float3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator float3x3() const { return float3x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22); }
	__device__ __host__ operator float3x4() const { return float3x4(this->_m00, this->_m01, this->_m02, this->_m03, this->_m10, this->_m11, this->_m12, this->_m13, this->_m20, this->_m21, this->_m22, this->_m23); }
	__device__ __host__ operator float4x1() const { return float4x1(this->_m00, this->_m10, this->_m20, this->_m30); }
	__device__ __host__ operator float4x2() const { return float4x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21, this->_m30, this->_m31); }
	__device__ __host__ operator float4x3() const { return float4x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22, this->_m30, this->_m31, this->_m32); }
	__device__ __host__ operator int4x4() const;
	__device__ __host__ operator uint4x4() const;
};
	__device__ __host__ float4x4 operator -(const float4x4 &a) { return float4x4(-a._m00,-a._m01,-a._m02,-a._m03,-a._m10,-a._m11,-a._m12,-a._m13,-a._m20,-a._m21,-a._m22,-a._m23,-a._m30,-a._m31,-a._m32,-a._m33); }
	__device__ __host__ float4x4 operator +(const float4x4 &a) { return float4x4(+a._m00,+a._m01,+a._m02,+a._m03,+a._m10,+a._m11,+a._m12,+a._m13,+a._m20,+a._m21,+a._m22,+a._m23,+a._m30,+a._m31,+a._m32,+a._m33); }
	__device__ __host__ int4x4 operator !(const float4x4 &a) { return int4x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m13==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0,a._m23==0?1:0,a._m30==0?1:0,a._m31==0?1:0,a._m32==0?1:0,a._m33==0?1:0); }
	__device__ __host__ float4x4 operator +(const float4x4 &a, const float4x4 &b) { return float4x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m13 + b._m13,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22,a._m23 + b._m23,a._m30 + b._m30,a._m31 + b._m31,a._m32 + b._m32,a._m33 + b._m33); }
	__device__ __host__ float4x4 operator *(const float4x4 &a, const float4x4 &b) { return float4x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m13 * b._m13,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22,a._m23 * b._m23,a._m30 * b._m30,a._m31 * b._m31,a._m32 * b._m32,a._m33 * b._m33); }
	__device__ __host__ float4x4 operator -(const float4x4 &a, const float4x4 &b) { return float4x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m13 - b._m13,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22,a._m23 - b._m23,a._m30 - b._m30,a._m31 - b._m31,a._m32 - b._m32,a._m33 - b._m33); }
	__device__ __host__ float4x4 operator /(const float4x4 &a, const float4x4 &b) { return float4x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m13 / b._m13,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22,a._m23 / b._m23,a._m30 / b._m30,a._m31 / b._m31,a._m32 / b._m32,a._m33 / b._m33); }
	__device__ __host__ float4x4 operator %(const float4x4 &a, const float4x4 &b) { return float4x4(fmod(a._m00, b._m00),fmod(a._m01, b._m01),fmod(a._m02, b._m02),fmod(a._m03, b._m03),fmod(a._m10, b._m10),fmod(a._m11, b._m11),fmod(a._m12, b._m12),fmod(a._m13, b._m13),fmod(a._m20, b._m20),fmod(a._m21, b._m21),fmod(a._m22, b._m22),fmod(a._m23, b._m23),fmod(a._m30, b._m30),fmod(a._m31, b._m31),fmod(a._m32, b._m32),fmod(a._m33, b._m33)); }
	__device__ __host__ int4x4 operator ==(const float4x4 &a, const float4x4 &b) { return int4x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m13 == b._m13)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0, (a._m23 == b._m23)?1:0, (a._m30 == b._m30)?1:0, (a._m31 == b._m31)?1:0, (a._m32 == b._m32)?1:0, (a._m33 == b._m33)?1:0); }
	__device__ __host__ int4x4 operator !=(const float4x4 &a, const float4x4 &b) { return int4x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m13 != b._m13)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0, (a._m23 != b._m23)?1:0, (a._m30 != b._m30)?1:0, (a._m31 != b._m31)?1:0, (a._m32 != b._m32)?1:0, (a._m33 != b._m33)?1:0); }
	__device__ __host__ int4x4 operator <(const float4x4 &a, const float4x4 &b) { return int4x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m13 < b._m13)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0, (a._m23 < b._m23)?1:0, (a._m30 < b._m30)?1:0, (a._m31 < b._m31)?1:0, (a._m32 < b._m32)?1:0, (a._m33 < b._m33)?1:0); }
	__device__ __host__ int4x4 operator <=(const float4x4 &a, const float4x4 &b) { return int4x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m13 <= b._m13)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0, (a._m23 <= b._m23)?1:0, (a._m30 <= b._m30)?1:0, (a._m31 <= b._m31)?1:0, (a._m32 <= b._m32)?1:0, (a._m33 <= b._m33)?1:0); }
	__device__ __host__ int4x4 operator >=(const float4x4 &a, const float4x4 &b) { return int4x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m13 >= b._m13)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0, (a._m23 >= b._m23)?1:0, (a._m30 >= b._m30)?1:0, (a._m31 >= b._m31)?1:0, (a._m32 >= b._m32)?1:0, (a._m33 >= b._m33)?1:0); }
	__device__ __host__ int4x4 operator >(const float4x4 &a, const float4x4 &b) { return int4x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m13 > b._m13)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0, (a._m23 > b._m23)?1:0, (a._m30 > b._m30)?1:0, (a._m31 > b._m31)?1:0, (a._m32 > b._m32)?1:0, (a._m33 > b._m33)?1:0); }

	__device__ uint __TRASH_uint_1;
struct uint_1{
	uint x;
	__device__ __host__ uint& operator[](int idx) {
			if(idx == 0) return this->x;
			return __TRASH_uint_1; // Silent return ... valid for HLSL 
	}
	__device__ __host__ uint_1(uint x){
		this->x=x;
	}
	__device__ __host__ uint_1(const float_1 &v);
	__device__ __host__ uint_1(const int_1 &v);
};
	__device__ __host__ uint_1 operator -(const uint_1 &a) { return uint_1(-a.x); }
	__device__ __host__ uint_1 operator +(const uint_1 &a) { return uint_1(+a.x); }
	__device__ __host__  int_1 operator !(const uint_1 &a) { return int_1(a.x==0?1:0); }
	__device__ __host__ int_1 operator ==(const uint_1 &a, const uint_1 &b) { return int_1((a.x == b.x)?1:0); }
	__device__ __host__ int_1 operator !=(const uint_1 &a, const uint_1 &b) { return int_1((a.x != b.x)?1:0); }
	__device__ __host__ int_1 operator <(const uint_1 &a, const uint_1 &b) { return int_1((a.x < b.x)?1:0); }
	__device__ __host__ int_1 operator <=(const uint_1 &a, const uint_1 &b) { return int_1((a.x <= b.x)?1:0); }
	__device__ __host__ int_1 operator >=(const uint_1 &a, const uint_1 &b) { return int_1((a.x >= b.x)?1:0); }
	__device__ __host__ int_1 operator >(const uint_1 &a, const uint_1 &b) { return int_1((a.x > b.x)?1:0); }
	__device__ __host__ uint_1 operator +(const uint_1& a, const uint_1& b) { return uint_1(a.x + b.x); }
	__device__ __host__ uint_1 operator +(const uint_1& a, uint b) { return uint_1(a.x + b); }
	__device__ __host__ uint_1 operator +(uint a, const uint_1& b) { return uint_1(a + b.x); }
	__device__ __host__ uint_1 operator *(const uint_1& a, const uint_1& b) { return uint_1(a.x * b.x); }
	__device__ __host__ uint_1 operator *(const uint_1& a, uint b) { return uint_1(a.x * b); }
	__device__ __host__ uint_1 operator *(uint a, const uint_1& b) { return uint_1(a * b.x); }
	__device__ __host__ uint_1 operator -(const uint_1& a, const uint_1& b) { return uint_1(a.x - b.x); }
	__device__ __host__ uint_1 operator -(const uint_1& a, uint b) { return uint_1(a.x - b); }
	__device__ __host__ uint_1 operator -(uint a, const uint_1& b) { return uint_1(a - b.x); }
	__device__ __host__ uint_1 operator /(const uint_1& a, const uint_1& b) { return uint_1(a.x / b.x); }
	__device__ __host__ uint_1 operator /(const uint_1& a, uint b) { return uint_1(a.x / b); }
	__device__ __host__ uint_1 operator /(uint a, const uint_1& b) { return uint_1(a / b.x); }
	__device__ __host__ uint_1 operator %(const uint_1& a, const uint_1& b) { return uint_1(a.x % b.x); }
	__device__ __host__ uint_1 operator %(const uint_1& a, uint b) { return uint_1(a.x % b); }
	__device__ __host__ uint_1 operator %(uint a, const uint_1& b) { return uint_1(a % b.x); }

	__device__ uint __TRASH_uint_2;
struct uint_2{
	uint x;
	uint y;
	__device__ __host__ uint& operator[](int idx) {
			if(idx == 0) return this->x;
			if(idx == 1) return this->y;
			return __TRASH_uint_2; // Silent return ... valid for HLSL 
	}
	__device__ __host__ uint_2(uint x,uint y){
		this->x=x;
		this->y=y;
	}
	__device__ __host__ uint_2(uint v) { new (this) uint_2(v,v); }
	__device__ __host__ uint_2(uint_1 v, uint last) { new (this) uint_2(v.x,last); }
	__device__ __host__ operator uint_1() const { return uint_1(this->x); }
	__device__ __host__ uint_2(const float_2 &v);
	__device__ __host__ uint_2(const int_2 &v);
};
	__device__ __host__ uint_2 operator -(const uint_2 &a) { return uint_2(-a.x,-a.y); }
	__device__ __host__ uint_2 operator +(const uint_2 &a) { return uint_2(+a.x,+a.y); }
	__device__ __host__  int_2 operator !(const uint_2 &a) { return int_2(a.x==0?1:0,a.y==0?1:0); }
	__device__ __host__ int_2 operator ==(const uint_2 &a, const uint_2 &b) { return int_2((a.x == b.x)?1:0, (a.y == b.y)?1:0); }
	__device__ __host__ int_2 operator !=(const uint_2 &a, const uint_2 &b) { return int_2((a.x != b.x)?1:0, (a.y != b.y)?1:0); }
	__device__ __host__ int_2 operator <(const uint_2 &a, const uint_2 &b) { return int_2((a.x < b.x)?1:0, (a.y < b.y)?1:0); }
	__device__ __host__ int_2 operator <=(const uint_2 &a, const uint_2 &b) { return int_2((a.x <= b.x)?1:0, (a.y <= b.y)?1:0); }
	__device__ __host__ int_2 operator >=(const uint_2 &a, const uint_2 &b) { return int_2((a.x >= b.x)?1:0, (a.y >= b.y)?1:0); }
	__device__ __host__ int_2 operator >(const uint_2 &a, const uint_2 &b) { return int_2((a.x > b.x)?1:0, (a.y > b.y)?1:0); }
	__device__ __host__ uint_2 operator +(const uint_2& a, const uint_2& b) { return uint_2(a.x + b.x,a.y + b.y); }
	__device__ __host__ uint_2 operator +(const uint_2& a, uint b) { return uint_2(a.x + b,a.y + b); }
	__device__ __host__ uint_2 operator +(uint a, const uint_2& b) { return uint_2(a + b.x,a + b.y); }
	__device__ __host__ uint_2 operator *(const uint_2& a, const uint_2& b) { return uint_2(a.x * b.x,a.y * b.y); }
	__device__ __host__ uint_2 operator *(const uint_2& a, uint b) { return uint_2(a.x * b,a.y * b); }
	__device__ __host__ uint_2 operator *(uint a, const uint_2& b) { return uint_2(a * b.x,a * b.y); }
	__device__ __host__ uint_2 operator -(const uint_2& a, const uint_2& b) { return uint_2(a.x - b.x,a.y - b.y); }
	__device__ __host__ uint_2 operator -(const uint_2& a, uint b) { return uint_2(a.x - b,a.y - b); }
	__device__ __host__ uint_2 operator -(uint a, const uint_2& b) { return uint_2(a - b.x,a - b.y); }
	__device__ __host__ uint_2 operator /(const uint_2& a, const uint_2& b) { return uint_2(a.x / b.x,a.y / b.y); }
	__device__ __host__ uint_2 operator /(const uint_2& a, uint b) { return uint_2(a.x / b,a.y / b); }
	__device__ __host__ uint_2 operator /(uint a, const uint_2& b) { return uint_2(a / b.x,a / b.y); }
	__device__ __host__ uint_2 operator %(const uint_2& a, const uint_2& b) { return uint_2(a.x % b.x,a.y % b.y); }
	__device__ __host__ uint_2 operator %(const uint_2& a, uint b) { return uint_2(a.x % b,a.y % b); }
	__device__ __host__ uint_2 operator %(uint a, const uint_2& b) { return uint_2(a % b.x,a % b.y); }

	__device__ uint __TRASH_uint_3;
struct uint_3{
	uint x;
	uint y;
	uint z;
	__device__ __host__ uint_2 get_xy() { return uint_2(this->x, this->y); }
	__device__ __host__ uint& operator[](int idx) {
			if(idx == 0) return this->x;
			if(idx == 1) return this->y;
			if(idx == 2) return this->z;
			return __TRASH_uint_3; // Silent return ... valid for HLSL 
	}
	__device__ __host__ uint_3(uint x,uint y,uint z){
		this->x=x;
		this->y=y;
		this->z=z;
	}
	__device__ __host__ uint_3(uint v) { new (this) uint_3(v,v,v); }
	__device__ __host__ uint_3(uint_2 v, uint last) { new (this) uint_3(v.x,v.y,last); }
	__device__ __host__ operator uint_1() const { return uint_1(this->x); }
	__device__ __host__ operator uint_2() const { return uint_2(this->x, this->y); }
	__device__ __host__ uint_3(const float_3 &v);
	__device__ __host__ uint_3(const int_3 &v);
};
	__device__ __host__ uint_3 operator -(const uint_3 &a) { return uint_3(-a.x,-a.y,-a.z); }
	__device__ __host__ uint_3 operator +(const uint_3 &a) { return uint_3(+a.x,+a.y,+a.z); }
	__device__ __host__  int_3 operator !(const uint_3 &a) { return int_3(a.x==0?1:0,a.y==0?1:0,a.z==0?1:0); }
	__device__ __host__ int_3 operator ==(const uint_3 &a, const uint_3 &b) { return int_3((a.x == b.x)?1:0, (a.y == b.y)?1:0, (a.z == b.z)?1:0); }
	__device__ __host__ int_3 operator !=(const uint_3 &a, const uint_3 &b) { return int_3((a.x != b.x)?1:0, (a.y != b.y)?1:0, (a.z != b.z)?1:0); }
	__device__ __host__ int_3 operator <(const uint_3 &a, const uint_3 &b) { return int_3((a.x < b.x)?1:0, (a.y < b.y)?1:0, (a.z < b.z)?1:0); }
	__device__ __host__ int_3 operator <=(const uint_3 &a, const uint_3 &b) { return int_3((a.x <= b.x)?1:0, (a.y <= b.y)?1:0, (a.z <= b.z)?1:0); }
	__device__ __host__ int_3 operator >=(const uint_3 &a, const uint_3 &b) { return int_3((a.x >= b.x)?1:0, (a.y >= b.y)?1:0, (a.z >= b.z)?1:0); }
	__device__ __host__ int_3 operator >(const uint_3 &a, const uint_3 &b) { return int_3((a.x > b.x)?1:0, (a.y > b.y)?1:0, (a.z > b.z)?1:0); }
	__device__ __host__ uint_3 operator +(const uint_3& a, const uint_3& b) { return uint_3(a.x + b.x,a.y + b.y,a.z + b.z); }
	__device__ __host__ uint_3 operator +(const uint_3& a, uint b) { return uint_3(a.x + b,a.y + b,a.z + b); }
	__device__ __host__ uint_3 operator +(uint a, const uint_3& b) { return uint_3(a + b.x,a + b.y,a + b.z); }
	__device__ __host__ uint_3 operator *(const uint_3& a, const uint_3& b) { return uint_3(a.x * b.x,a.y * b.y,a.z * b.z); }
	__device__ __host__ uint_3 operator *(const uint_3& a, uint b) { return uint_3(a.x * b,a.y * b,a.z * b); }
	__device__ __host__ uint_3 operator *(uint a, const uint_3& b) { return uint_3(a * b.x,a * b.y,a * b.z); }
	__device__ __host__ uint_3 operator -(const uint_3& a, const uint_3& b) { return uint_3(a.x - b.x,a.y - b.y,a.z - b.z); }
	__device__ __host__ uint_3 operator -(const uint_3& a, uint b) { return uint_3(a.x - b,a.y - b,a.z - b); }
	__device__ __host__ uint_3 operator -(uint a, const uint_3& b) { return uint_3(a - b.x,a - b.y,a - b.z); }
	__device__ __host__ uint_3 operator /(const uint_3& a, const uint_3& b) { return uint_3(a.x / b.x,a.y / b.y,a.z / b.z); }
	__device__ __host__ uint_3 operator /(const uint_3& a, uint b) { return uint_3(a.x / b,a.y / b,a.z / b); }
	__device__ __host__ uint_3 operator /(uint a, const uint_3& b) { return uint_3(a / b.x,a / b.y,a / b.z); }
	__device__ __host__ uint_3 operator %(const uint_3& a, const uint_3& b) { return uint_3(a.x % b.x,a.y % b.y,a.z % b.z); }
	__device__ __host__ uint_3 operator %(const uint_3& a, uint b) { return uint_3(a.x % b,a.y % b,a.z % b); }
	__device__ __host__ uint_3 operator %(uint a, const uint_3& b) { return uint_3(a % b.x,a % b.y,a % b.z); }

	__device__ uint __TRASH_uint_4;
struct uint_4{
	uint x;
	uint y;
	uint z;
	uint w;
	__device__ __host__ uint_2 get_xy() { return uint_2(this->x, this->y); }
	__device__ __host__ uint_3 get_xyz() { return uint_3(this->x, this->y, this->z); }
	__device__ __host__ uint& operator[](int idx) {
			if(idx == 0) return this->x;
			if(idx == 1) return this->y;
			if(idx == 2) return this->z;
			if(idx == 3) return this->w;
			return __TRASH_uint_4; // Silent return ... valid for HLSL 
	}
	__device__ __host__ uint_4(uint x,uint y,uint z,uint w){
		this->x=x;
		this->y=y;
		this->z=z;
		this->w=w;
	}
	__device__ __host__ uint_4(uint v) { new (this) uint_4(v,v,v,v); }
	__device__ __host__ uint_4(uint_3 v, uint last) { new (this) uint_4(v.x,v.y,v.z,last); }
	__device__ __host__ operator uint_1() const { return uint_1(this->x); }
	__device__ __host__ operator uint_2() const { return uint_2(this->x, this->y); }
	__device__ __host__ operator uint_3() const { return uint_3(this->x, this->y, this->z); }
	__device__ __host__ uint_4(const float_4 &v);
	__device__ __host__ uint_4(const int_4 &v);
};
	__device__ __host__ uint_4 operator -(const uint_4 &a) { return uint_4(-a.x,-a.y,-a.z,-a.w); }
	__device__ __host__ uint_4 operator +(const uint_4 &a) { return uint_4(+a.x,+a.y,+a.z,+a.w); }
	__device__ __host__  int_4 operator !(const uint_4 &a) { return int_4(a.x==0?1:0,a.y==0?1:0,a.z==0?1:0,a.w==0?1:0); }
	__device__ __host__ int_4 operator ==(const uint_4 &a, const uint_4 &b) { return int_4((a.x == b.x)?1:0, (a.y == b.y)?1:0, (a.z == b.z)?1:0, (a.w == b.w)?1:0); }
	__device__ __host__ int_4 operator !=(const uint_4 &a, const uint_4 &b) { return int_4((a.x != b.x)?1:0, (a.y != b.y)?1:0, (a.z != b.z)?1:0, (a.w != b.w)?1:0); }
	__device__ __host__ int_4 operator <(const uint_4 &a, const uint_4 &b) { return int_4((a.x < b.x)?1:0, (a.y < b.y)?1:0, (a.z < b.z)?1:0, (a.w < b.w)?1:0); }
	__device__ __host__ int_4 operator <=(const uint_4 &a, const uint_4 &b) { return int_4((a.x <= b.x)?1:0, (a.y <= b.y)?1:0, (a.z <= b.z)?1:0, (a.w <= b.w)?1:0); }
	__device__ __host__ int_4 operator >=(const uint_4 &a, const uint_4 &b) { return int_4((a.x >= b.x)?1:0, (a.y >= b.y)?1:0, (a.z >= b.z)?1:0, (a.w >= b.w)?1:0); }
	__device__ __host__ int_4 operator >(const uint_4 &a, const uint_4 &b) { return int_4((a.x > b.x)?1:0, (a.y > b.y)?1:0, (a.z > b.z)?1:0, (a.w > b.w)?1:0); }
	__device__ __host__ uint_4 operator +(const uint_4& a, const uint_4& b) { return uint_4(a.x + b.x,a.y + b.y,a.z + b.z,a.w + b.w); }
	__device__ __host__ uint_4 operator +(const uint_4& a, uint b) { return uint_4(a.x + b,a.y + b,a.z + b,a.w + b); }
	__device__ __host__ uint_4 operator +(uint a, const uint_4& b) { return uint_4(a + b.x,a + b.y,a + b.z,a + b.w); }
	__device__ __host__ uint_4 operator *(const uint_4& a, const uint_4& b) { return uint_4(a.x * b.x,a.y * b.y,a.z * b.z,a.w * b.w); }
	__device__ __host__ uint_4 operator *(const uint_4& a, uint b) { return uint_4(a.x * b,a.y * b,a.z * b,a.w * b); }
	__device__ __host__ uint_4 operator *(uint a, const uint_4& b) { return uint_4(a * b.x,a * b.y,a * b.z,a * b.w); }
	__device__ __host__ uint_4 operator -(const uint_4& a, const uint_4& b) { return uint_4(a.x - b.x,a.y - b.y,a.z - b.z,a.w - b.w); }
	__device__ __host__ uint_4 operator -(const uint_4& a, uint b) { return uint_4(a.x - b,a.y - b,a.z - b,a.w - b); }
	__device__ __host__ uint_4 operator -(uint a, const uint_4& b) { return uint_4(a - b.x,a - b.y,a - b.z,a - b.w); }
	__device__ __host__ uint_4 operator /(const uint_4& a, const uint_4& b) { return uint_4(a.x / b.x,a.y / b.y,a.z / b.z,a.w / b.w); }
	__device__ __host__ uint_4 operator /(const uint_4& a, uint b) { return uint_4(a.x / b,a.y / b,a.z / b,a.w / b); }
	__device__ __host__ uint_4 operator /(uint a, const uint_4& b) { return uint_4(a / b.x,a / b.y,a / b.z,a / b.w); }
	__device__ __host__ uint_4 operator %(const uint_4& a, const uint_4& b) { return uint_4(a.x % b.x,a.y % b.y,a.z % b.z,a.w % b.w); }
	__device__ __host__ uint_4 operator %(const uint_4& a, uint b) { return uint_4(a.x % b,a.y % b,a.z % b,a.w % b); }
	__device__ __host__ uint_4 operator %(uint a, const uint_4& b) { return uint_4(a % b.x,a % b.y,a % b.z,a % b.w); }

struct uint1x1{
	uint _m00;
	__device__ __host__ uint_1 operator[] (int row) const {
			if(row == 0) return uint_1(_m00);
			return uint_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint1x1(uint _m00){
		this->_m00=_m00;
	}
	__device__ __host__ operator float1x1() const;
	__device__ __host__ operator int1x1() const;
};
	__device__ __host__ uint1x1 operator -(const uint1x1 &a) { return uint1x1(-a._m00); }
	__device__ __host__ uint1x1 operator +(const uint1x1 &a) { return uint1x1(+a._m00); }
	__device__ __host__ int1x1 operator !(const uint1x1 &a) { return int1x1(a._m00==0?1:0); }
	__device__ __host__ uint1x1 operator +(const uint1x1 &a, const uint1x1 &b) { return uint1x1(a._m00 + b._m00); }
	__device__ __host__ uint1x1 operator *(const uint1x1 &a, const uint1x1 &b) { return uint1x1(a._m00 * b._m00); }
	__device__ __host__ uint1x1 operator -(const uint1x1 &a, const uint1x1 &b) { return uint1x1(a._m00 - b._m00); }
	__device__ __host__ uint1x1 operator /(const uint1x1 &a, const uint1x1 &b) { return uint1x1(a._m00 / b._m00); }
	__device__ __host__ uint1x1 operator %(const uint1x1 &a, const uint1x1 &b) { return uint1x1(a._m00 % b._m00); }
	__device__ __host__ int1x1 operator ==(const uint1x1 &a, const uint1x1 &b) { return int1x1((a._m00 == b._m00)?1:0); }
	__device__ __host__ int1x1 operator !=(const uint1x1 &a, const uint1x1 &b) { return int1x1((a._m00 != b._m00)?1:0); }
	__device__ __host__ int1x1 operator <(const uint1x1 &a, const uint1x1 &b) { return int1x1((a._m00 < b._m00)?1:0); }
	__device__ __host__ int1x1 operator <=(const uint1x1 &a, const uint1x1 &b) { return int1x1((a._m00 <= b._m00)?1:0); }
	__device__ __host__ int1x1 operator >=(const uint1x1 &a, const uint1x1 &b) { return int1x1((a._m00 >= b._m00)?1:0); }
	__device__ __host__ int1x1 operator >(const uint1x1 &a, const uint1x1 &b) { return int1x1((a._m00 > b._m00)?1:0); }

struct uint1x2{
	uint _m00;
	uint _m01;
	__device__ __host__ uint_2 operator[] (int row) const {
			if(row == 0) return uint_2(_m00, _m01);
			return uint_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint1x2(uint _m00,uint _m01){
		this->_m00=_m00;
		this->_m01=_m01;
	}
	__device__ __host__ uint1x2(uint v){ new (this) uint1x2(v,v); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator float1x2() const;
	__device__ __host__ operator int1x2() const;
};
	__device__ __host__ uint1x2 operator -(const uint1x2 &a) { return uint1x2(-a._m00,-a._m01); }
	__device__ __host__ uint1x2 operator +(const uint1x2 &a) { return uint1x2(+a._m00,+a._m01); }
	__device__ __host__ int1x2 operator !(const uint1x2 &a) { return int1x2(a._m00==0?1:0,a._m01==0?1:0); }
	__device__ __host__ uint1x2 operator +(const uint1x2 &a, const uint1x2 &b) { return uint1x2(a._m00 + b._m00,a._m01 + b._m01); }
	__device__ __host__ uint1x2 operator *(const uint1x2 &a, const uint1x2 &b) { return uint1x2(a._m00 * b._m00,a._m01 * b._m01); }
	__device__ __host__ uint1x2 operator -(const uint1x2 &a, const uint1x2 &b) { return uint1x2(a._m00 - b._m00,a._m01 - b._m01); }
	__device__ __host__ uint1x2 operator /(const uint1x2 &a, const uint1x2 &b) { return uint1x2(a._m00 / b._m00,a._m01 / b._m01); }
	__device__ __host__ uint1x2 operator %(const uint1x2 &a, const uint1x2 &b) { return uint1x2(a._m00 % b._m00,a._m01 % b._m01); }
	__device__ __host__ int1x2 operator ==(const uint1x2 &a, const uint1x2 &b) { return int1x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0); }
	__device__ __host__ int1x2 operator !=(const uint1x2 &a, const uint1x2 &b) { return int1x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0); }
	__device__ __host__ int1x2 operator <(const uint1x2 &a, const uint1x2 &b) { return int1x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0); }
	__device__ __host__ int1x2 operator <=(const uint1x2 &a, const uint1x2 &b) { return int1x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0); }
	__device__ __host__ int1x2 operator >=(const uint1x2 &a, const uint1x2 &b) { return int1x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0); }
	__device__ __host__ int1x2 operator >(const uint1x2 &a, const uint1x2 &b) { return int1x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0); }

struct uint1x3{
	uint _m00;
	uint _m01;
	uint _m02;
	__device__ __host__ uint_3 operator[] (int row) const {
			if(row == 0) return uint_3(_m00, _m01, _m02);
			return uint_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint1x3(uint _m00,uint _m01,uint _m02){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
	}
	__device__ __host__ uint1x3(uint v){ new (this) uint1x3(v,v,v); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint1x2() const { return uint1x2(this->_m00, this->_m01); }
	__device__ __host__ operator float1x3() const;
	__device__ __host__ operator int1x3() const;
};
	__device__ __host__ uint1x3 operator -(const uint1x3 &a) { return uint1x3(-a._m00,-a._m01,-a._m02); }
	__device__ __host__ uint1x3 operator +(const uint1x3 &a) { return uint1x3(+a._m00,+a._m01,+a._m02); }
	__device__ __host__ int1x3 operator !(const uint1x3 &a) { return int1x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0); }
	__device__ __host__ uint1x3 operator +(const uint1x3 &a, const uint1x3 &b) { return uint1x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02); }
	__device__ __host__ uint1x3 operator *(const uint1x3 &a, const uint1x3 &b) { return uint1x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02); }
	__device__ __host__ uint1x3 operator -(const uint1x3 &a, const uint1x3 &b) { return uint1x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02); }
	__device__ __host__ uint1x3 operator /(const uint1x3 &a, const uint1x3 &b) { return uint1x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02); }
	__device__ __host__ uint1x3 operator %(const uint1x3 &a, const uint1x3 &b) { return uint1x3(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02); }
	__device__ __host__ int1x3 operator ==(const uint1x3 &a, const uint1x3 &b) { return int1x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0); }
	__device__ __host__ int1x3 operator !=(const uint1x3 &a, const uint1x3 &b) { return int1x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0); }
	__device__ __host__ int1x3 operator <(const uint1x3 &a, const uint1x3 &b) { return int1x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0); }
	__device__ __host__ int1x3 operator <=(const uint1x3 &a, const uint1x3 &b) { return int1x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0); }
	__device__ __host__ int1x3 operator >=(const uint1x3 &a, const uint1x3 &b) { return int1x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0); }
	__device__ __host__ int1x3 operator >(const uint1x3 &a, const uint1x3 &b) { return int1x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0); }

struct uint1x4{
	uint _m00;
	uint _m01;
	uint _m02;
	uint _m03;
	__device__ __host__ uint_4 operator[] (int row) const {
			if(row == 0) return uint_4(_m00, _m01, _m02, _m03);
			return uint_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint1x4(uint _m00,uint _m01,uint _m02,uint _m03){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
	}
	__device__ __host__ uint1x4(uint v){ new (this) uint1x4(v,v,v,v); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint1x2() const { return uint1x2(this->_m00, this->_m01); }
	__device__ __host__ operator uint1x3() const { return uint1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator float1x4() const;
	__device__ __host__ operator int1x4() const;
};
	__device__ __host__ uint1x4 operator -(const uint1x4 &a) { return uint1x4(-a._m00,-a._m01,-a._m02,-a._m03); }
	__device__ __host__ uint1x4 operator +(const uint1x4 &a) { return uint1x4(+a._m00,+a._m01,+a._m02,+a._m03); }
	__device__ __host__ int1x4 operator !(const uint1x4 &a) { return int1x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0); }
	__device__ __host__ uint1x4 operator +(const uint1x4 &a, const uint1x4 &b) { return uint1x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03); }
	__device__ __host__ uint1x4 operator *(const uint1x4 &a, const uint1x4 &b) { return uint1x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03); }
	__device__ __host__ uint1x4 operator -(const uint1x4 &a, const uint1x4 &b) { return uint1x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03); }
	__device__ __host__ uint1x4 operator /(const uint1x4 &a, const uint1x4 &b) { return uint1x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03); }
	__device__ __host__ uint1x4 operator %(const uint1x4 &a, const uint1x4 &b) { return uint1x4(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m03 % b._m03); }
	__device__ __host__ int1x4 operator ==(const uint1x4 &a, const uint1x4 &b) { return int1x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0); }
	__device__ __host__ int1x4 operator !=(const uint1x4 &a, const uint1x4 &b) { return int1x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0); }
	__device__ __host__ int1x4 operator <(const uint1x4 &a, const uint1x4 &b) { return int1x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0); }
	__device__ __host__ int1x4 operator <=(const uint1x4 &a, const uint1x4 &b) { return int1x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0); }
	__device__ __host__ int1x4 operator >=(const uint1x4 &a, const uint1x4 &b) { return int1x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0); }
	__device__ __host__ int1x4 operator >(const uint1x4 &a, const uint1x4 &b) { return int1x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0); }

struct uint2x1{
	uint _m00;
	uint _m10;
	__device__ __host__ uint_1 operator[] (int row) const {
			if(row == 0) return uint_1(_m00);
			if(row == 1) return uint_1(_m10);
			return uint_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint2x1(uint _m00,uint _m10){
		this->_m00=_m00;
		this->_m10=_m10;
	}
	__device__ __host__ uint2x1(uint v){ new (this) uint2x1(v,v); }
	__device__ __host__ uint2x1(const uint1 &r0, const uint1 &r1) { new (this) uint2x1(r0.x, r1.x); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator float2x1() const;
	__device__ __host__ operator int2x1() const;
};
	__device__ __host__ uint2x1 operator -(const uint2x1 &a) { return uint2x1(-a._m00,-a._m10); }
	__device__ __host__ uint2x1 operator +(const uint2x1 &a) { return uint2x1(+a._m00,+a._m10); }
	__device__ __host__ int2x1 operator !(const uint2x1 &a) { return int2x1(a._m00==0?1:0,a._m10==0?1:0); }
	__device__ __host__ uint2x1 operator +(const uint2x1 &a, const uint2x1 &b) { return uint2x1(a._m00 + b._m00,a._m10 + b._m10); }
	__device__ __host__ uint2x1 operator *(const uint2x1 &a, const uint2x1 &b) { return uint2x1(a._m00 * b._m00,a._m10 * b._m10); }
	__device__ __host__ uint2x1 operator -(const uint2x1 &a, const uint2x1 &b) { return uint2x1(a._m00 - b._m00,a._m10 - b._m10); }
	__device__ __host__ uint2x1 operator /(const uint2x1 &a, const uint2x1 &b) { return uint2x1(a._m00 / b._m00,a._m10 / b._m10); }
	__device__ __host__ uint2x1 operator %(const uint2x1 &a, const uint2x1 &b) { return uint2x1(a._m00 % b._m00,a._m10 % b._m10); }
	__device__ __host__ int2x1 operator ==(const uint2x1 &a, const uint2x1 &b) { return int2x1((a._m00 == b._m00)?1:0, (a._m10 == b._m10)?1:0); }
	__device__ __host__ int2x1 operator !=(const uint2x1 &a, const uint2x1 &b) { return int2x1((a._m00 != b._m00)?1:0, (a._m10 != b._m10)?1:0); }
	__device__ __host__ int2x1 operator <(const uint2x1 &a, const uint2x1 &b) { return int2x1((a._m00 < b._m00)?1:0, (a._m10 < b._m10)?1:0); }
	__device__ __host__ int2x1 operator <=(const uint2x1 &a, const uint2x1 &b) { return int2x1((a._m00 <= b._m00)?1:0, (a._m10 <= b._m10)?1:0); }
	__device__ __host__ int2x1 operator >=(const uint2x1 &a, const uint2x1 &b) { return int2x1((a._m00 >= b._m00)?1:0, (a._m10 >= b._m10)?1:0); }
	__device__ __host__ int2x1 operator >(const uint2x1 &a, const uint2x1 &b) { return int2x1((a._m00 > b._m00)?1:0, (a._m10 > b._m10)?1:0); }

struct uint2x2{
	uint _m00;
	uint _m01;
	uint _m10;
	uint _m11;
	__device__ __host__ uint_2 operator[] (int row) const {
			if(row == 0) return uint_2(_m00, _m01);
			if(row == 1) return uint_2(_m10, _m11);
			return uint_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint2x2(uint _m00,uint _m01,uint _m10,uint _m11){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m10=_m10;
		this->_m11=_m11;
	}
	__device__ __host__ uint2x2(uint v){ new (this) uint2x2(v,v,v,v); }
	__device__ __host__ uint2x2(const uint2 &r0, const uint2 &r1) { new (this) uint2x2(r0.x, r0.y, r1.x, r1.y); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint1x2() const { return uint1x2(this->_m00, this->_m01); }
	__device__ __host__ operator uint2x1() const { return uint2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float2x2() const;
	__device__ __host__ operator int2x2() const;
};
	__device__ __host__ uint2x2 operator -(const uint2x2 &a) { return uint2x2(-a._m00,-a._m01,-a._m10,-a._m11); }
	__device__ __host__ uint2x2 operator +(const uint2x2 &a) { return uint2x2(+a._m00,+a._m01,+a._m10,+a._m11); }
	__device__ __host__ int2x2 operator !(const uint2x2 &a) { return int2x2(a._m00==0?1:0,a._m01==0?1:0,a._m10==0?1:0,a._m11==0?1:0); }
	__device__ __host__ uint2x2 operator +(const uint2x2 &a, const uint2x2 &b) { return uint2x2(a._m00 + b._m00,a._m01 + b._m01,a._m10 + b._m10,a._m11 + b._m11); }
	__device__ __host__ uint2x2 operator *(const uint2x2 &a, const uint2x2 &b) { return uint2x2(a._m00 * b._m00,a._m01 * b._m01,a._m10 * b._m10,a._m11 * b._m11); }
	__device__ __host__ uint2x2 operator -(const uint2x2 &a, const uint2x2 &b) { return uint2x2(a._m00 - b._m00,a._m01 - b._m01,a._m10 - b._m10,a._m11 - b._m11); }
	__device__ __host__ uint2x2 operator /(const uint2x2 &a, const uint2x2 &b) { return uint2x2(a._m00 / b._m00,a._m01 / b._m01,a._m10 / b._m10,a._m11 / b._m11); }
	__device__ __host__ uint2x2 operator %(const uint2x2 &a, const uint2x2 &b) { return uint2x2(a._m00 % b._m00,a._m01 % b._m01,a._m10 % b._m10,a._m11 % b._m11); }
	__device__ __host__ int2x2 operator ==(const uint2x2 &a, const uint2x2 &b) { return int2x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0); }
	__device__ __host__ int2x2 operator !=(const uint2x2 &a, const uint2x2 &b) { return int2x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0); }
	__device__ __host__ int2x2 operator <(const uint2x2 &a, const uint2x2 &b) { return int2x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0); }
	__device__ __host__ int2x2 operator <=(const uint2x2 &a, const uint2x2 &b) { return int2x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0); }
	__device__ __host__ int2x2 operator >=(const uint2x2 &a, const uint2x2 &b) { return int2x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0); }
	__device__ __host__ int2x2 operator >(const uint2x2 &a, const uint2x2 &b) { return int2x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0); }

struct uint2x3{
	uint _m00;
	uint _m01;
	uint _m02;
	uint _m10;
	uint _m11;
	uint _m12;
	__device__ __host__ uint_3 operator[] (int row) const {
			if(row == 0) return uint_3(_m00, _m01, _m02);
			if(row == 1) return uint_3(_m10, _m11, _m12);
			return uint_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint2x3(uint _m00,uint _m01,uint _m02,uint _m10,uint _m11,uint _m12){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
	}
	__device__ __host__ uint2x3(uint v){ new (this) uint2x3(v,v,v,v,v,v); }
	__device__ __host__ uint2x3(const uint3 &r0, const uint3 &r1) { new (this) uint2x3(r0.x, r0.y, r0.z, r1.x, r1.y, r1.z); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint1x2() const { return uint1x2(this->_m00, this->_m01); }
	__device__ __host__ operator uint1x3() const { return uint1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator uint2x1() const { return uint2x1(this->_m00, this->_m10); }
	__device__ __host__ operator uint2x2() const { return uint2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator float2x3() const;
	__device__ __host__ operator int2x3() const;
};
	__device__ __host__ uint2x3 operator -(const uint2x3 &a) { return uint2x3(-a._m00,-a._m01,-a._m02,-a._m10,-a._m11,-a._m12); }
	__device__ __host__ uint2x3 operator +(const uint2x3 &a) { return uint2x3(+a._m00,+a._m01,+a._m02,+a._m10,+a._m11,+a._m12); }
	__device__ __host__ int2x3 operator !(const uint2x3 &a) { return int2x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0); }
	__device__ __host__ uint2x3 operator +(const uint2x3 &a, const uint2x3 &b) { return uint2x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12); }
	__device__ __host__ uint2x3 operator *(const uint2x3 &a, const uint2x3 &b) { return uint2x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12); }
	__device__ __host__ uint2x3 operator -(const uint2x3 &a, const uint2x3 &b) { return uint2x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12); }
	__device__ __host__ uint2x3 operator /(const uint2x3 &a, const uint2x3 &b) { return uint2x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12); }
	__device__ __host__ uint2x3 operator %(const uint2x3 &a, const uint2x3 &b) { return uint2x3(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12); }
	__device__ __host__ int2x3 operator ==(const uint2x3 &a, const uint2x3 &b) { return int2x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0); }
	__device__ __host__ int2x3 operator !=(const uint2x3 &a, const uint2x3 &b) { return int2x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0); }
	__device__ __host__ int2x3 operator <(const uint2x3 &a, const uint2x3 &b) { return int2x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0); }
	__device__ __host__ int2x3 operator <=(const uint2x3 &a, const uint2x3 &b) { return int2x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0); }
	__device__ __host__ int2x3 operator >=(const uint2x3 &a, const uint2x3 &b) { return int2x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0); }
	__device__ __host__ int2x3 operator >(const uint2x3 &a, const uint2x3 &b) { return int2x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0); }

struct uint2x4{
	uint _m00;
	uint _m01;
	uint _m02;
	uint _m03;
	uint _m10;
	uint _m11;
	uint _m12;
	uint _m13;
	__device__ __host__ uint_4 operator[] (int row) const {
			if(row == 0) return uint_4(_m00, _m01, _m02, _m03);
			if(row == 1) return uint_4(_m10, _m11, _m12, _m13);
			return uint_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint2x4(uint _m00,uint _m01,uint _m02,uint _m03,uint _m10,uint _m11,uint _m12,uint _m13){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m13=_m13;
	}
	__device__ __host__ uint2x4(uint v){ new (this) uint2x4(v,v,v,v,v,v,v,v); }
	__device__ __host__ uint2x4(const uint4 &r0, const uint4 &r1) { new (this) uint2x4(r0.x, r0.y, r0.z, r0.w, r1.x, r1.y, r1.z, r1.w); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint1x2() const { return uint1x2(this->_m00, this->_m01); }
	__device__ __host__ operator uint1x3() const { return uint1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator uint1x4() const { return uint1x4(this->_m00, this->_m01, this->_m02, this->_m03); }
	__device__ __host__ operator uint2x1() const { return uint2x1(this->_m00, this->_m10); }
	__device__ __host__ operator uint2x2() const { return uint2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator uint2x3() const { return uint2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator float2x4() const;
	__device__ __host__ operator int2x4() const;
};
	__device__ __host__ uint2x4 operator -(const uint2x4 &a) { return uint2x4(-a._m00,-a._m01,-a._m02,-a._m03,-a._m10,-a._m11,-a._m12,-a._m13); }
	__device__ __host__ uint2x4 operator +(const uint2x4 &a) { return uint2x4(+a._m00,+a._m01,+a._m02,+a._m03,+a._m10,+a._m11,+a._m12,+a._m13); }
	__device__ __host__ int2x4 operator !(const uint2x4 &a) { return int2x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m13==0?1:0); }
	__device__ __host__ uint2x4 operator +(const uint2x4 &a, const uint2x4 &b) { return uint2x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m13 + b._m13); }
	__device__ __host__ uint2x4 operator *(const uint2x4 &a, const uint2x4 &b) { return uint2x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m13 * b._m13); }
	__device__ __host__ uint2x4 operator -(const uint2x4 &a, const uint2x4 &b) { return uint2x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m13 - b._m13); }
	__device__ __host__ uint2x4 operator /(const uint2x4 &a, const uint2x4 &b) { return uint2x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m13 / b._m13); }
	__device__ __host__ uint2x4 operator %(const uint2x4 &a, const uint2x4 &b) { return uint2x4(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m03 % b._m03,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12,a._m13 % b._m13); }
	__device__ __host__ int2x4 operator ==(const uint2x4 &a, const uint2x4 &b) { return int2x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m13 == b._m13)?1:0); }
	__device__ __host__ int2x4 operator !=(const uint2x4 &a, const uint2x4 &b) { return int2x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m13 != b._m13)?1:0); }
	__device__ __host__ int2x4 operator <(const uint2x4 &a, const uint2x4 &b) { return int2x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m13 < b._m13)?1:0); }
	__device__ __host__ int2x4 operator <=(const uint2x4 &a, const uint2x4 &b) { return int2x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m13 <= b._m13)?1:0); }
	__device__ __host__ int2x4 operator >=(const uint2x4 &a, const uint2x4 &b) { return int2x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m13 >= b._m13)?1:0); }
	__device__ __host__ int2x4 operator >(const uint2x4 &a, const uint2x4 &b) { return int2x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m13 > b._m13)?1:0); }

struct uint3x1{
	uint _m00;
	uint _m10;
	uint _m20;
	__device__ __host__ uint_1 operator[] (int row) const {
			if(row == 0) return uint_1(_m00);
			if(row == 1) return uint_1(_m10);
			if(row == 2) return uint_1(_m20);
			return uint_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint3x1(uint _m00,uint _m10,uint _m20){
		this->_m00=_m00;
		this->_m10=_m10;
		this->_m20=_m20;
	}
	__device__ __host__ uint3x1(uint v){ new (this) uint3x1(v,v,v); }
	__device__ __host__ uint3x1(const uint1 &r0, const uint1 &r1, const uint1 &r2) { new (this) uint3x1(r0.x, r1.x, r2.x); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint2x1() const { return uint2x1(this->_m00, this->_m10); }
	__device__ __host__ operator float3x1() const;
	__device__ __host__ operator int3x1() const;
};
	__device__ __host__ uint3x1 operator -(const uint3x1 &a) { return uint3x1(-a._m00,-a._m10,-a._m20); }
	__device__ __host__ uint3x1 operator +(const uint3x1 &a) { return uint3x1(+a._m00,+a._m10,+a._m20); }
	__device__ __host__ int3x1 operator !(const uint3x1 &a) { return int3x1(a._m00==0?1:0,a._m10==0?1:0,a._m20==0?1:0); }
	__device__ __host__ uint3x1 operator +(const uint3x1 &a, const uint3x1 &b) { return uint3x1(a._m00 + b._m00,a._m10 + b._m10,a._m20 + b._m20); }
	__device__ __host__ uint3x1 operator *(const uint3x1 &a, const uint3x1 &b) { return uint3x1(a._m00 * b._m00,a._m10 * b._m10,a._m20 * b._m20); }
	__device__ __host__ uint3x1 operator -(const uint3x1 &a, const uint3x1 &b) { return uint3x1(a._m00 - b._m00,a._m10 - b._m10,a._m20 - b._m20); }
	__device__ __host__ uint3x1 operator /(const uint3x1 &a, const uint3x1 &b) { return uint3x1(a._m00 / b._m00,a._m10 / b._m10,a._m20 / b._m20); }
	__device__ __host__ uint3x1 operator %(const uint3x1 &a, const uint3x1 &b) { return uint3x1(a._m00 % b._m00,a._m10 % b._m10,a._m20 % b._m20); }
	__device__ __host__ int3x1 operator ==(const uint3x1 &a, const uint3x1 &b) { return int3x1((a._m00 == b._m00)?1:0, (a._m10 == b._m10)?1:0, (a._m20 == b._m20)?1:0); }
	__device__ __host__ int3x1 operator !=(const uint3x1 &a, const uint3x1 &b) { return int3x1((a._m00 != b._m00)?1:0, (a._m10 != b._m10)?1:0, (a._m20 != b._m20)?1:0); }
	__device__ __host__ int3x1 operator <(const uint3x1 &a, const uint3x1 &b) { return int3x1((a._m00 < b._m00)?1:0, (a._m10 < b._m10)?1:0, (a._m20 < b._m20)?1:0); }
	__device__ __host__ int3x1 operator <=(const uint3x1 &a, const uint3x1 &b) { return int3x1((a._m00 <= b._m00)?1:0, (a._m10 <= b._m10)?1:0, (a._m20 <= b._m20)?1:0); }
	__device__ __host__ int3x1 operator >=(const uint3x1 &a, const uint3x1 &b) { return int3x1((a._m00 >= b._m00)?1:0, (a._m10 >= b._m10)?1:0, (a._m20 >= b._m20)?1:0); }
	__device__ __host__ int3x1 operator >(const uint3x1 &a, const uint3x1 &b) { return int3x1((a._m00 > b._m00)?1:0, (a._m10 > b._m10)?1:0, (a._m20 > b._m20)?1:0); }

struct uint3x2{
	uint _m00;
	uint _m01;
	uint _m10;
	uint _m11;
	uint _m20;
	uint _m21;
	__device__ __host__ uint_2 operator[] (int row) const {
			if(row == 0) return uint_2(_m00, _m01);
			if(row == 1) return uint_2(_m10, _m11);
			if(row == 2) return uint_2(_m20, _m21);
			return uint_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint3x2(uint _m00,uint _m01,uint _m10,uint _m11,uint _m20,uint _m21){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m20=_m20;
		this->_m21=_m21;
	}
	__device__ __host__ uint3x2(uint v){ new (this) uint3x2(v,v,v,v,v,v); }
	__device__ __host__ uint3x2(const uint2 &r0, const uint2 &r1, const uint2 &r2) { new (this) uint3x2(r0.x, r0.y, r1.x, r1.y, r2.x, r2.y); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint1x2() const { return uint1x2(this->_m00, this->_m01); }
	__device__ __host__ operator uint2x1() const { return uint2x1(this->_m00, this->_m10); }
	__device__ __host__ operator uint2x2() const { return uint2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator uint3x1() const { return uint3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator float3x2() const;
	__device__ __host__ operator int3x2() const;
};
	__device__ __host__ uint3x2 operator -(const uint3x2 &a) { return uint3x2(-a._m00,-a._m01,-a._m10,-a._m11,-a._m20,-a._m21); }
	__device__ __host__ uint3x2 operator +(const uint3x2 &a) { return uint3x2(+a._m00,+a._m01,+a._m10,+a._m11,+a._m20,+a._m21); }
	__device__ __host__ int3x2 operator !(const uint3x2 &a) { return int3x2(a._m00==0?1:0,a._m01==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m20==0?1:0,a._m21==0?1:0); }
	__device__ __host__ uint3x2 operator +(const uint3x2 &a, const uint3x2 &b) { return uint3x2(a._m00 + b._m00,a._m01 + b._m01,a._m10 + b._m10,a._m11 + b._m11,a._m20 + b._m20,a._m21 + b._m21); }
	__device__ __host__ uint3x2 operator *(const uint3x2 &a, const uint3x2 &b) { return uint3x2(a._m00 * b._m00,a._m01 * b._m01,a._m10 * b._m10,a._m11 * b._m11,a._m20 * b._m20,a._m21 * b._m21); }
	__device__ __host__ uint3x2 operator -(const uint3x2 &a, const uint3x2 &b) { return uint3x2(a._m00 - b._m00,a._m01 - b._m01,a._m10 - b._m10,a._m11 - b._m11,a._m20 - b._m20,a._m21 - b._m21); }
	__device__ __host__ uint3x2 operator /(const uint3x2 &a, const uint3x2 &b) { return uint3x2(a._m00 / b._m00,a._m01 / b._m01,a._m10 / b._m10,a._m11 / b._m11,a._m20 / b._m20,a._m21 / b._m21); }
	__device__ __host__ uint3x2 operator %(const uint3x2 &a, const uint3x2 &b) { return uint3x2(a._m00 % b._m00,a._m01 % b._m01,a._m10 % b._m10,a._m11 % b._m11,a._m20 % b._m20,a._m21 % b._m21); }
	__device__ __host__ int3x2 operator ==(const uint3x2 &a, const uint3x2 &b) { return int3x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0); }
	__device__ __host__ int3x2 operator !=(const uint3x2 &a, const uint3x2 &b) { return int3x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0); }
	__device__ __host__ int3x2 operator <(const uint3x2 &a, const uint3x2 &b) { return int3x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0); }
	__device__ __host__ int3x2 operator <=(const uint3x2 &a, const uint3x2 &b) { return int3x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0); }
	__device__ __host__ int3x2 operator >=(const uint3x2 &a, const uint3x2 &b) { return int3x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0); }
	__device__ __host__ int3x2 operator >(const uint3x2 &a, const uint3x2 &b) { return int3x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0); }

struct uint3x3{
	uint _m00;
	uint _m01;
	uint _m02;
	uint _m10;
	uint _m11;
	uint _m12;
	uint _m20;
	uint _m21;
	uint _m22;
	__device__ __host__ uint_3 operator[] (int row) const {
			if(row == 0) return uint_3(_m00, _m01, _m02);
			if(row == 1) return uint_3(_m10, _m11, _m12);
			if(row == 2) return uint_3(_m20, _m21, _m22);
			return uint_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint3x3(uint _m00,uint _m01,uint _m02,uint _m10,uint _m11,uint _m12,uint _m20,uint _m21,uint _m22){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
	}
	__device__ __host__ uint3x3(uint v){ new (this) uint3x3(v,v,v,v,v,v,v,v,v); }
	__device__ __host__ uint3x3(const uint3 &r0, const uint3 &r1, const uint3 &r2) { new (this) uint3x3(r0.x, r0.y, r0.z, r1.x, r1.y, r1.z, r2.x, r2.y, r2.z); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint1x2() const { return uint1x2(this->_m00, this->_m01); }
	__device__ __host__ operator uint1x3() const { return uint1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator uint2x1() const { return uint2x1(this->_m00, this->_m10); }
	__device__ __host__ operator uint2x2() const { return uint2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator uint2x3() const { return uint2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator uint3x1() const { return uint3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator uint3x2() const { return uint3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator float3x3() const;
	__device__ __host__ operator int3x3() const;
};
	__device__ __host__ uint3x3 operator -(const uint3x3 &a) { return uint3x3(-a._m00,-a._m01,-a._m02,-a._m10,-a._m11,-a._m12,-a._m20,-a._m21,-a._m22); }
	__device__ __host__ uint3x3 operator +(const uint3x3 &a) { return uint3x3(+a._m00,+a._m01,+a._m02,+a._m10,+a._m11,+a._m12,+a._m20,+a._m21,+a._m22); }
	__device__ __host__ int3x3 operator !(const uint3x3 &a) { return int3x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0); }
	__device__ __host__ uint3x3 operator +(const uint3x3 &a, const uint3x3 &b) { return uint3x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22); }
	__device__ __host__ uint3x3 operator *(const uint3x3 &a, const uint3x3 &b) { return uint3x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22); }
	__device__ __host__ uint3x3 operator -(const uint3x3 &a, const uint3x3 &b) { return uint3x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22); }
	__device__ __host__ uint3x3 operator /(const uint3x3 &a, const uint3x3 &b) { return uint3x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22); }
	__device__ __host__ uint3x3 operator %(const uint3x3 &a, const uint3x3 &b) { return uint3x3(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12,a._m20 % b._m20,a._m21 % b._m21,a._m22 % b._m22); }
	__device__ __host__ int3x3 operator ==(const uint3x3 &a, const uint3x3 &b) { return int3x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0); }
	__device__ __host__ int3x3 operator !=(const uint3x3 &a, const uint3x3 &b) { return int3x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0); }
	__device__ __host__ int3x3 operator <(const uint3x3 &a, const uint3x3 &b) { return int3x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0); }
	__device__ __host__ int3x3 operator <=(const uint3x3 &a, const uint3x3 &b) { return int3x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0); }
	__device__ __host__ int3x3 operator >=(const uint3x3 &a, const uint3x3 &b) { return int3x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0); }
	__device__ __host__ int3x3 operator >(const uint3x3 &a, const uint3x3 &b) { return int3x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0); }

struct uint3x4{
	uint _m00;
	uint _m01;
	uint _m02;
	uint _m03;
	uint _m10;
	uint _m11;
	uint _m12;
	uint _m13;
	uint _m20;
	uint _m21;
	uint _m22;
	uint _m23;
	__device__ __host__ uint_4 operator[] (int row) const {
			if(row == 0) return uint_4(_m00, _m01, _m02, _m03);
			if(row == 1) return uint_4(_m10, _m11, _m12, _m13);
			if(row == 2) return uint_4(_m20, _m21, _m22, _m23);
			return uint_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint3x4(uint _m00,uint _m01,uint _m02,uint _m03,uint _m10,uint _m11,uint _m12,uint _m13,uint _m20,uint _m21,uint _m22,uint _m23){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m13=_m13;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
		this->_m23=_m23;
	}
	__device__ __host__ uint3x4(uint v){ new (this) uint3x4(v,v,v,v,v,v,v,v,v,v,v,v); }
	__device__ __host__ uint3x4(const uint4 &r0, const uint4 &r1, const uint4 &r2) { new (this) uint3x4(r0.x, r0.y, r0.z, r0.w, r1.x, r1.y, r1.z, r1.w, r2.x, r2.y, r2.z, r2.w); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint1x2() const { return uint1x2(this->_m00, this->_m01); }
	__device__ __host__ operator uint1x3() const { return uint1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator uint1x4() const { return uint1x4(this->_m00, this->_m01, this->_m02, this->_m03); }
	__device__ __host__ operator uint2x1() const { return uint2x1(this->_m00, this->_m10); }
	__device__ __host__ operator uint2x2() const { return uint2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator uint2x3() const { return uint2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator uint2x4() const { return uint2x4(this->_m00, this->_m01, this->_m02, this->_m03, this->_m10, this->_m11, this->_m12, this->_m13); }
	__device__ __host__ operator uint3x1() const { return uint3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator uint3x2() const { return uint3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator uint3x3() const { return uint3x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22); }
	__device__ __host__ operator float3x4() const;
	__device__ __host__ operator int3x4() const;
};
	__device__ __host__ uint3x4 operator -(const uint3x4 &a) { return uint3x4(-a._m00,-a._m01,-a._m02,-a._m03,-a._m10,-a._m11,-a._m12,-a._m13,-a._m20,-a._m21,-a._m22,-a._m23); }
	__device__ __host__ uint3x4 operator +(const uint3x4 &a) { return uint3x4(+a._m00,+a._m01,+a._m02,+a._m03,+a._m10,+a._m11,+a._m12,+a._m13,+a._m20,+a._m21,+a._m22,+a._m23); }
	__device__ __host__ int3x4 operator !(const uint3x4 &a) { return int3x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m13==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0,a._m23==0?1:0); }
	__device__ __host__ uint3x4 operator +(const uint3x4 &a, const uint3x4 &b) { return uint3x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m13 + b._m13,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22,a._m23 + b._m23); }
	__device__ __host__ uint3x4 operator *(const uint3x4 &a, const uint3x4 &b) { return uint3x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m13 * b._m13,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22,a._m23 * b._m23); }
	__device__ __host__ uint3x4 operator -(const uint3x4 &a, const uint3x4 &b) { return uint3x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m13 - b._m13,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22,a._m23 - b._m23); }
	__device__ __host__ uint3x4 operator /(const uint3x4 &a, const uint3x4 &b) { return uint3x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m13 / b._m13,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22,a._m23 / b._m23); }
	__device__ __host__ uint3x4 operator %(const uint3x4 &a, const uint3x4 &b) { return uint3x4(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m03 % b._m03,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12,a._m13 % b._m13,a._m20 % b._m20,a._m21 % b._m21,a._m22 % b._m22,a._m23 % b._m23); }
	__device__ __host__ int3x4 operator ==(const uint3x4 &a, const uint3x4 &b) { return int3x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m13 == b._m13)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0, (a._m23 == b._m23)?1:0); }
	__device__ __host__ int3x4 operator !=(const uint3x4 &a, const uint3x4 &b) { return int3x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m13 != b._m13)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0, (a._m23 != b._m23)?1:0); }
	__device__ __host__ int3x4 operator <(const uint3x4 &a, const uint3x4 &b) { return int3x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m13 < b._m13)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0, (a._m23 < b._m23)?1:0); }
	__device__ __host__ int3x4 operator <=(const uint3x4 &a, const uint3x4 &b) { return int3x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m13 <= b._m13)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0, (a._m23 <= b._m23)?1:0); }
	__device__ __host__ int3x4 operator >=(const uint3x4 &a, const uint3x4 &b) { return int3x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m13 >= b._m13)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0, (a._m23 >= b._m23)?1:0); }
	__device__ __host__ int3x4 operator >(const uint3x4 &a, const uint3x4 &b) { return int3x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m13 > b._m13)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0, (a._m23 > b._m23)?1:0); }

struct uint4x1{
	uint _m00;
	uint _m10;
	uint _m20;
	uint _m30;
	__device__ __host__ uint_1 operator[] (int row) const {
			if(row == 0) return uint_1(_m00);
			if(row == 1) return uint_1(_m10);
			if(row == 2) return uint_1(_m20);
			if(row == 3) return uint_1(_m30);
			return uint_1(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint4x1(uint _m00,uint _m10,uint _m20,uint _m30){
		this->_m00=_m00;
		this->_m10=_m10;
		this->_m20=_m20;
		this->_m30=_m30;
	}
	__device__ __host__ uint4x1(uint v){ new (this) uint4x1(v,v,v,v); }
	__device__ __host__ uint4x1(const uint1 &r0, const uint1 &r1, const uint1 &r2, const uint1 &r3) { new (this) uint4x1(r0.x, r1.x, r2.x, r3.x); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint2x1() const { return uint2x1(this->_m00, this->_m10); }
	__device__ __host__ operator uint3x1() const { return uint3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator float4x1() const;
	__device__ __host__ operator int4x1() const;
};
	__device__ __host__ uint4x1 operator -(const uint4x1 &a) { return uint4x1(-a._m00,-a._m10,-a._m20,-a._m30); }
	__device__ __host__ uint4x1 operator +(const uint4x1 &a) { return uint4x1(+a._m00,+a._m10,+a._m20,+a._m30); }
	__device__ __host__ int4x1 operator !(const uint4x1 &a) { return int4x1(a._m00==0?1:0,a._m10==0?1:0,a._m20==0?1:0,a._m30==0?1:0); }
	__device__ __host__ uint4x1 operator +(const uint4x1 &a, const uint4x1 &b) { return uint4x1(a._m00 + b._m00,a._m10 + b._m10,a._m20 + b._m20,a._m30 + b._m30); }
	__device__ __host__ uint4x1 operator *(const uint4x1 &a, const uint4x1 &b) { return uint4x1(a._m00 * b._m00,a._m10 * b._m10,a._m20 * b._m20,a._m30 * b._m30); }
	__device__ __host__ uint4x1 operator -(const uint4x1 &a, const uint4x1 &b) { return uint4x1(a._m00 - b._m00,a._m10 - b._m10,a._m20 - b._m20,a._m30 - b._m30); }
	__device__ __host__ uint4x1 operator /(const uint4x1 &a, const uint4x1 &b) { return uint4x1(a._m00 / b._m00,a._m10 / b._m10,a._m20 / b._m20,a._m30 / b._m30); }
	__device__ __host__ uint4x1 operator %(const uint4x1 &a, const uint4x1 &b) { return uint4x1(a._m00 % b._m00,a._m10 % b._m10,a._m20 % b._m20,a._m30 % b._m30); }
	__device__ __host__ int4x1 operator ==(const uint4x1 &a, const uint4x1 &b) { return int4x1((a._m00 == b._m00)?1:0, (a._m10 == b._m10)?1:0, (a._m20 == b._m20)?1:0, (a._m30 == b._m30)?1:0); }
	__device__ __host__ int4x1 operator !=(const uint4x1 &a, const uint4x1 &b) { return int4x1((a._m00 != b._m00)?1:0, (a._m10 != b._m10)?1:0, (a._m20 != b._m20)?1:0, (a._m30 != b._m30)?1:0); }
	__device__ __host__ int4x1 operator <(const uint4x1 &a, const uint4x1 &b) { return int4x1((a._m00 < b._m00)?1:0, (a._m10 < b._m10)?1:0, (a._m20 < b._m20)?1:0, (a._m30 < b._m30)?1:0); }
	__device__ __host__ int4x1 operator <=(const uint4x1 &a, const uint4x1 &b) { return int4x1((a._m00 <= b._m00)?1:0, (a._m10 <= b._m10)?1:0, (a._m20 <= b._m20)?1:0, (a._m30 <= b._m30)?1:0); }
	__device__ __host__ int4x1 operator >=(const uint4x1 &a, const uint4x1 &b) { return int4x1((a._m00 >= b._m00)?1:0, (a._m10 >= b._m10)?1:0, (a._m20 >= b._m20)?1:0, (a._m30 >= b._m30)?1:0); }
	__device__ __host__ int4x1 operator >(const uint4x1 &a, const uint4x1 &b) { return int4x1((a._m00 > b._m00)?1:0, (a._m10 > b._m10)?1:0, (a._m20 > b._m20)?1:0, (a._m30 > b._m30)?1:0); }

struct uint4x2{
	uint _m00;
	uint _m01;
	uint _m10;
	uint _m11;
	uint _m20;
	uint _m21;
	uint _m30;
	uint _m31;
	__device__ __host__ uint_2 operator[] (int row) const {
			if(row == 0) return uint_2(_m00, _m01);
			if(row == 1) return uint_2(_m10, _m11);
			if(row == 2) return uint_2(_m20, _m21);
			if(row == 3) return uint_2(_m30, _m31);
			return uint_2(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint4x2(uint _m00,uint _m01,uint _m10,uint _m11,uint _m20,uint _m21,uint _m30,uint _m31){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m30=_m30;
		this->_m31=_m31;
	}
	__device__ __host__ uint4x2(uint v){ new (this) uint4x2(v,v,v,v,v,v,v,v); }
	__device__ __host__ uint4x2(const uint2 &r0, const uint2 &r1, const uint2 &r2, const uint2 &r3) { new (this) uint4x2(r0.x, r0.y, r1.x, r1.y, r2.x, r2.y, r3.x, r3.y); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint1x2() const { return uint1x2(this->_m00, this->_m01); }
	__device__ __host__ operator uint2x1() const { return uint2x1(this->_m00, this->_m10); }
	__device__ __host__ operator uint2x2() const { return uint2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator uint3x1() const { return uint3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator uint3x2() const { return uint3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator uint4x1() const { return uint4x1(this->_m00, this->_m10, this->_m20, this->_m30); }
	__device__ __host__ operator float4x2() const;
	__device__ __host__ operator int4x2() const;
};
	__device__ __host__ uint4x2 operator -(const uint4x2 &a) { return uint4x2(-a._m00,-a._m01,-a._m10,-a._m11,-a._m20,-a._m21,-a._m30,-a._m31); }
	__device__ __host__ uint4x2 operator +(const uint4x2 &a) { return uint4x2(+a._m00,+a._m01,+a._m10,+a._m11,+a._m20,+a._m21,+a._m30,+a._m31); }
	__device__ __host__ int4x2 operator !(const uint4x2 &a) { return int4x2(a._m00==0?1:0,a._m01==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m30==0?1:0,a._m31==0?1:0); }
	__device__ __host__ uint4x2 operator +(const uint4x2 &a, const uint4x2 &b) { return uint4x2(a._m00 + b._m00,a._m01 + b._m01,a._m10 + b._m10,a._m11 + b._m11,a._m20 + b._m20,a._m21 + b._m21,a._m30 + b._m30,a._m31 + b._m31); }
	__device__ __host__ uint4x2 operator *(const uint4x2 &a, const uint4x2 &b) { return uint4x2(a._m00 * b._m00,a._m01 * b._m01,a._m10 * b._m10,a._m11 * b._m11,a._m20 * b._m20,a._m21 * b._m21,a._m30 * b._m30,a._m31 * b._m31); }
	__device__ __host__ uint4x2 operator -(const uint4x2 &a, const uint4x2 &b) { return uint4x2(a._m00 - b._m00,a._m01 - b._m01,a._m10 - b._m10,a._m11 - b._m11,a._m20 - b._m20,a._m21 - b._m21,a._m30 - b._m30,a._m31 - b._m31); }
	__device__ __host__ uint4x2 operator /(const uint4x2 &a, const uint4x2 &b) { return uint4x2(a._m00 / b._m00,a._m01 / b._m01,a._m10 / b._m10,a._m11 / b._m11,a._m20 / b._m20,a._m21 / b._m21,a._m30 / b._m30,a._m31 / b._m31); }
	__device__ __host__ uint4x2 operator %(const uint4x2 &a, const uint4x2 &b) { return uint4x2(a._m00 % b._m00,a._m01 % b._m01,a._m10 % b._m10,a._m11 % b._m11,a._m20 % b._m20,a._m21 % b._m21,a._m30 % b._m30,a._m31 % b._m31); }
	__device__ __host__ int4x2 operator ==(const uint4x2 &a, const uint4x2 &b) { return int4x2((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m30 == b._m30)?1:0, (a._m31 == b._m31)?1:0); }
	__device__ __host__ int4x2 operator !=(const uint4x2 &a, const uint4x2 &b) { return int4x2((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m30 != b._m30)?1:0, (a._m31 != b._m31)?1:0); }
	__device__ __host__ int4x2 operator <(const uint4x2 &a, const uint4x2 &b) { return int4x2((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m30 < b._m30)?1:0, (a._m31 < b._m31)?1:0); }
	__device__ __host__ int4x2 operator <=(const uint4x2 &a, const uint4x2 &b) { return int4x2((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m30 <= b._m30)?1:0, (a._m31 <= b._m31)?1:0); }
	__device__ __host__ int4x2 operator >=(const uint4x2 &a, const uint4x2 &b) { return int4x2((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m30 >= b._m30)?1:0, (a._m31 >= b._m31)?1:0); }
	__device__ __host__ int4x2 operator >(const uint4x2 &a, const uint4x2 &b) { return int4x2((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m30 > b._m30)?1:0, (a._m31 > b._m31)?1:0); }

struct uint4x3{
	uint _m00;
	uint _m01;
	uint _m02;
	uint _m10;
	uint _m11;
	uint _m12;
	uint _m20;
	uint _m21;
	uint _m22;
	uint _m30;
	uint _m31;
	uint _m32;
	__device__ __host__ uint_3 operator[] (int row) const {
			if(row == 0) return uint_3(_m00, _m01, _m02);
			if(row == 1) return uint_3(_m10, _m11, _m12);
			if(row == 2) return uint_3(_m20, _m21, _m22);
			if(row == 3) return uint_3(_m30, _m31, _m32);
			return uint_3(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint4x3(uint _m00,uint _m01,uint _m02,uint _m10,uint _m11,uint _m12,uint _m20,uint _m21,uint _m22,uint _m30,uint _m31,uint _m32){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
		this->_m30=_m30;
		this->_m31=_m31;
		this->_m32=_m32;
	}
	__device__ __host__ uint4x3(uint v){ new (this) uint4x3(v,v,v,v,v,v,v,v,v,v,v,v); }
	__device__ __host__ uint4x3(const uint3 &r0, const uint3 &r1, const uint3 &r2, const uint3 &r3) { new (this) uint4x3(r0.x, r0.y, r0.z, r1.x, r1.y, r1.z, r2.x, r2.y, r2.z, r3.x, r3.y, r3.z); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint1x2() const { return uint1x2(this->_m00, this->_m01); }
	__device__ __host__ operator uint1x3() const { return uint1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator uint2x1() const { return uint2x1(this->_m00, this->_m10); }
	__device__ __host__ operator uint2x2() const { return uint2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator uint2x3() const { return uint2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator uint3x1() const { return uint3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator uint3x2() const { return uint3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator uint3x3() const { return uint3x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22); }
	__device__ __host__ operator uint4x1() const { return uint4x1(this->_m00, this->_m10, this->_m20, this->_m30); }
	__device__ __host__ operator uint4x2() const { return uint4x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21, this->_m30, this->_m31); }
	__device__ __host__ operator float4x3() const;
	__device__ __host__ operator int4x3() const;
};
	__device__ __host__ uint4x3 operator -(const uint4x3 &a) { return uint4x3(-a._m00,-a._m01,-a._m02,-a._m10,-a._m11,-a._m12,-a._m20,-a._m21,-a._m22,-a._m30,-a._m31,-a._m32); }
	__device__ __host__ uint4x3 operator +(const uint4x3 &a) { return uint4x3(+a._m00,+a._m01,+a._m02,+a._m10,+a._m11,+a._m12,+a._m20,+a._m21,+a._m22,+a._m30,+a._m31,+a._m32); }
	__device__ __host__ int4x3 operator !(const uint4x3 &a) { return int4x3(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0,a._m30==0?1:0,a._m31==0?1:0,a._m32==0?1:0); }
	__device__ __host__ uint4x3 operator +(const uint4x3 &a, const uint4x3 &b) { return uint4x3(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22,a._m30 + b._m30,a._m31 + b._m31,a._m32 + b._m32); }
	__device__ __host__ uint4x3 operator *(const uint4x3 &a, const uint4x3 &b) { return uint4x3(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22,a._m30 * b._m30,a._m31 * b._m31,a._m32 * b._m32); }
	__device__ __host__ uint4x3 operator -(const uint4x3 &a, const uint4x3 &b) { return uint4x3(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22,a._m30 - b._m30,a._m31 - b._m31,a._m32 - b._m32); }
	__device__ __host__ uint4x3 operator /(const uint4x3 &a, const uint4x3 &b) { return uint4x3(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22,a._m30 / b._m30,a._m31 / b._m31,a._m32 / b._m32); }
	__device__ __host__ uint4x3 operator %(const uint4x3 &a, const uint4x3 &b) { return uint4x3(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12,a._m20 % b._m20,a._m21 % b._m21,a._m22 % b._m22,a._m30 % b._m30,a._m31 % b._m31,a._m32 % b._m32); }
	__device__ __host__ int4x3 operator ==(const uint4x3 &a, const uint4x3 &b) { return int4x3((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0, (a._m30 == b._m30)?1:0, (a._m31 == b._m31)?1:0, (a._m32 == b._m32)?1:0); }
	__device__ __host__ int4x3 operator !=(const uint4x3 &a, const uint4x3 &b) { return int4x3((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0, (a._m30 != b._m30)?1:0, (a._m31 != b._m31)?1:0, (a._m32 != b._m32)?1:0); }
	__device__ __host__ int4x3 operator <(const uint4x3 &a, const uint4x3 &b) { return int4x3((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0, (a._m30 < b._m30)?1:0, (a._m31 < b._m31)?1:0, (a._m32 < b._m32)?1:0); }
	__device__ __host__ int4x3 operator <=(const uint4x3 &a, const uint4x3 &b) { return int4x3((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0, (a._m30 <= b._m30)?1:0, (a._m31 <= b._m31)?1:0, (a._m32 <= b._m32)?1:0); }
	__device__ __host__ int4x3 operator >=(const uint4x3 &a, const uint4x3 &b) { return int4x3((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0, (a._m30 >= b._m30)?1:0, (a._m31 >= b._m31)?1:0, (a._m32 >= b._m32)?1:0); }
	__device__ __host__ int4x3 operator >(const uint4x3 &a, const uint4x3 &b) { return int4x3((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0, (a._m30 > b._m30)?1:0, (a._m31 > b._m31)?1:0, (a._m32 > b._m32)?1:0); }

struct uint4x4{
	uint _m00;
	uint _m01;
	uint _m02;
	uint _m03;
	uint _m10;
	uint _m11;
	uint _m12;
	uint _m13;
	uint _m20;
	uint _m21;
	uint _m22;
	uint _m23;
	uint _m30;
	uint _m31;
	uint _m32;
	uint _m33;
	__device__ __host__ uint_4 operator[] (int row) const {
			if(row == 0) return uint_4(_m00, _m01, _m02, _m03);
			if(row == 1) return uint_4(_m10, _m11, _m12, _m13);
			if(row == 2) return uint_4(_m20, _m21, _m22, _m23);
			if(row == 3) return uint_4(_m30, _m31, _m32, _m33);
			return uint_4(0); // Silent return ... valid for HLSL
	}
	__device__ __host__ uint4x4(uint _m00,uint _m01,uint _m02,uint _m03,uint _m10,uint _m11,uint _m12,uint _m13,uint _m20,uint _m21,uint _m22,uint _m23,uint _m30,uint _m31,uint _m32,uint _m33){
		this->_m00=_m00;
		this->_m01=_m01;
		this->_m02=_m02;
		this->_m03=_m03;
		this->_m10=_m10;
		this->_m11=_m11;
		this->_m12=_m12;
		this->_m13=_m13;
		this->_m20=_m20;
		this->_m21=_m21;
		this->_m22=_m22;
		this->_m23=_m23;
		this->_m30=_m30;
		this->_m31=_m31;
		this->_m32=_m32;
		this->_m33=_m33;
	}
	__device__ __host__ uint4x4(uint v){ new (this) uint4x4(v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v); }
	__device__ __host__ uint4x4(const uint4 &r0, const uint4 &r1, const uint4 &r2, const uint4 &r3) { new (this) uint4x4(r0.x, r0.y, r0.z, r0.w, r1.x, r1.y, r1.z, r1.w, r2.x, r2.y, r2.z, r2.w, r3.x, r3.y, r3.z, r3.w); }
	__device__ __host__ operator uint1x1() const { return uint1x1(this->_m00); }
	__device__ __host__ operator uint1x2() const { return uint1x2(this->_m00, this->_m01); }
	__device__ __host__ operator uint1x3() const { return uint1x3(this->_m00, this->_m01, this->_m02); }
	__device__ __host__ operator uint1x4() const { return uint1x4(this->_m00, this->_m01, this->_m02, this->_m03); }
	__device__ __host__ operator uint2x1() const { return uint2x1(this->_m00, this->_m10); }
	__device__ __host__ operator uint2x2() const { return uint2x2(this->_m00, this->_m01, this->_m10, this->_m11); }
	__device__ __host__ operator uint2x3() const { return uint2x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12); }
	__device__ __host__ operator uint2x4() const { return uint2x4(this->_m00, this->_m01, this->_m02, this->_m03, this->_m10, this->_m11, this->_m12, this->_m13); }
	__device__ __host__ operator uint3x1() const { return uint3x1(this->_m00, this->_m10, this->_m20); }
	__device__ __host__ operator uint3x2() const { return uint3x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21); }
	__device__ __host__ operator uint3x3() const { return uint3x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22); }
	__device__ __host__ operator uint3x4() const { return uint3x4(this->_m00, this->_m01, this->_m02, this->_m03, this->_m10, this->_m11, this->_m12, this->_m13, this->_m20, this->_m21, this->_m22, this->_m23); }
	__device__ __host__ operator uint4x1() const { return uint4x1(this->_m00, this->_m10, this->_m20, this->_m30); }
	__device__ __host__ operator uint4x2() const { return uint4x2(this->_m00, this->_m01, this->_m10, this->_m11, this->_m20, this->_m21, this->_m30, this->_m31); }
	__device__ __host__ operator uint4x3() const { return uint4x3(this->_m00, this->_m01, this->_m02, this->_m10, this->_m11, this->_m12, this->_m20, this->_m21, this->_m22, this->_m30, this->_m31, this->_m32); }
	__device__ __host__ operator float4x4() const;
	__device__ __host__ operator int4x4() const;
};
	__device__ __host__ uint4x4 operator -(const uint4x4 &a) { return uint4x4(-a._m00,-a._m01,-a._m02,-a._m03,-a._m10,-a._m11,-a._m12,-a._m13,-a._m20,-a._m21,-a._m22,-a._m23,-a._m30,-a._m31,-a._m32,-a._m33); }
	__device__ __host__ uint4x4 operator +(const uint4x4 &a) { return uint4x4(+a._m00,+a._m01,+a._m02,+a._m03,+a._m10,+a._m11,+a._m12,+a._m13,+a._m20,+a._m21,+a._m22,+a._m23,+a._m30,+a._m31,+a._m32,+a._m33); }
	__device__ __host__ int4x4 operator !(const uint4x4 &a) { return int4x4(a._m00==0?1:0,a._m01==0?1:0,a._m02==0?1:0,a._m03==0?1:0,a._m10==0?1:0,a._m11==0?1:0,a._m12==0?1:0,a._m13==0?1:0,a._m20==0?1:0,a._m21==0?1:0,a._m22==0?1:0,a._m23==0?1:0,a._m30==0?1:0,a._m31==0?1:0,a._m32==0?1:0,a._m33==0?1:0); }
	__device__ __host__ uint4x4 operator +(const uint4x4 &a, const uint4x4 &b) { return uint4x4(a._m00 + b._m00,a._m01 + b._m01,a._m02 + b._m02,a._m03 + b._m03,a._m10 + b._m10,a._m11 + b._m11,a._m12 + b._m12,a._m13 + b._m13,a._m20 + b._m20,a._m21 + b._m21,a._m22 + b._m22,a._m23 + b._m23,a._m30 + b._m30,a._m31 + b._m31,a._m32 + b._m32,a._m33 + b._m33); }
	__device__ __host__ uint4x4 operator *(const uint4x4 &a, const uint4x4 &b) { return uint4x4(a._m00 * b._m00,a._m01 * b._m01,a._m02 * b._m02,a._m03 * b._m03,a._m10 * b._m10,a._m11 * b._m11,a._m12 * b._m12,a._m13 * b._m13,a._m20 * b._m20,a._m21 * b._m21,a._m22 * b._m22,a._m23 * b._m23,a._m30 * b._m30,a._m31 * b._m31,a._m32 * b._m32,a._m33 * b._m33); }
	__device__ __host__ uint4x4 operator -(const uint4x4 &a, const uint4x4 &b) { return uint4x4(a._m00 - b._m00,a._m01 - b._m01,a._m02 - b._m02,a._m03 - b._m03,a._m10 - b._m10,a._m11 - b._m11,a._m12 - b._m12,a._m13 - b._m13,a._m20 - b._m20,a._m21 - b._m21,a._m22 - b._m22,a._m23 - b._m23,a._m30 - b._m30,a._m31 - b._m31,a._m32 - b._m32,a._m33 - b._m33); }
	__device__ __host__ uint4x4 operator /(const uint4x4 &a, const uint4x4 &b) { return uint4x4(a._m00 / b._m00,a._m01 / b._m01,a._m02 / b._m02,a._m03 / b._m03,a._m10 / b._m10,a._m11 / b._m11,a._m12 / b._m12,a._m13 / b._m13,a._m20 / b._m20,a._m21 / b._m21,a._m22 / b._m22,a._m23 / b._m23,a._m30 / b._m30,a._m31 / b._m31,a._m32 / b._m32,a._m33 / b._m33); }
	__device__ __host__ uint4x4 operator %(const uint4x4 &a, const uint4x4 &b) { return uint4x4(a._m00 % b._m00,a._m01 % b._m01,a._m02 % b._m02,a._m03 % b._m03,a._m10 % b._m10,a._m11 % b._m11,a._m12 % b._m12,a._m13 % b._m13,a._m20 % b._m20,a._m21 % b._m21,a._m22 % b._m22,a._m23 % b._m23,a._m30 % b._m30,a._m31 % b._m31,a._m32 % b._m32,a._m33 % b._m33); }
	__device__ __host__ int4x4 operator ==(const uint4x4 &a, const uint4x4 &b) { return int4x4((a._m00 == b._m00)?1:0, (a._m01 == b._m01)?1:0, (a._m02 == b._m02)?1:0, (a._m03 == b._m03)?1:0, (a._m10 == b._m10)?1:0, (a._m11 == b._m11)?1:0, (a._m12 == b._m12)?1:0, (a._m13 == b._m13)?1:0, (a._m20 == b._m20)?1:0, (a._m21 == b._m21)?1:0, (a._m22 == b._m22)?1:0, (a._m23 == b._m23)?1:0, (a._m30 == b._m30)?1:0, (a._m31 == b._m31)?1:0, (a._m32 == b._m32)?1:0, (a._m33 == b._m33)?1:0); }
	__device__ __host__ int4x4 operator !=(const uint4x4 &a, const uint4x4 &b) { return int4x4((a._m00 != b._m00)?1:0, (a._m01 != b._m01)?1:0, (a._m02 != b._m02)?1:0, (a._m03 != b._m03)?1:0, (a._m10 != b._m10)?1:0, (a._m11 != b._m11)?1:0, (a._m12 != b._m12)?1:0, (a._m13 != b._m13)?1:0, (a._m20 != b._m20)?1:0, (a._m21 != b._m21)?1:0, (a._m22 != b._m22)?1:0, (a._m23 != b._m23)?1:0, (a._m30 != b._m30)?1:0, (a._m31 != b._m31)?1:0, (a._m32 != b._m32)?1:0, (a._m33 != b._m33)?1:0); }
	__device__ __host__ int4x4 operator <(const uint4x4 &a, const uint4x4 &b) { return int4x4((a._m00 < b._m00)?1:0, (a._m01 < b._m01)?1:0, (a._m02 < b._m02)?1:0, (a._m03 < b._m03)?1:0, (a._m10 < b._m10)?1:0, (a._m11 < b._m11)?1:0, (a._m12 < b._m12)?1:0, (a._m13 < b._m13)?1:0, (a._m20 < b._m20)?1:0, (a._m21 < b._m21)?1:0, (a._m22 < b._m22)?1:0, (a._m23 < b._m23)?1:0, (a._m30 < b._m30)?1:0, (a._m31 < b._m31)?1:0, (a._m32 < b._m32)?1:0, (a._m33 < b._m33)?1:0); }
	__device__ __host__ int4x4 operator <=(const uint4x4 &a, const uint4x4 &b) { return int4x4((a._m00 <= b._m00)?1:0, (a._m01 <= b._m01)?1:0, (a._m02 <= b._m02)?1:0, (a._m03 <= b._m03)?1:0, (a._m10 <= b._m10)?1:0, (a._m11 <= b._m11)?1:0, (a._m12 <= b._m12)?1:0, (a._m13 <= b._m13)?1:0, (a._m20 <= b._m20)?1:0, (a._m21 <= b._m21)?1:0, (a._m22 <= b._m22)?1:0, (a._m23 <= b._m23)?1:0, (a._m30 <= b._m30)?1:0, (a._m31 <= b._m31)?1:0, (a._m32 <= b._m32)?1:0, (a._m33 <= b._m33)?1:0); }
	__device__ __host__ int4x4 operator >=(const uint4x4 &a, const uint4x4 &b) { return int4x4((a._m00 >= b._m00)?1:0, (a._m01 >= b._m01)?1:0, (a._m02 >= b._m02)?1:0, (a._m03 >= b._m03)?1:0, (a._m10 >= b._m10)?1:0, (a._m11 >= b._m11)?1:0, (a._m12 >= b._m12)?1:0, (a._m13 >= b._m13)?1:0, (a._m20 >= b._m20)?1:0, (a._m21 >= b._m21)?1:0, (a._m22 >= b._m22)?1:0, (a._m23 >= b._m23)?1:0, (a._m30 >= b._m30)?1:0, (a._m31 >= b._m31)?1:0, (a._m32 >= b._m32)?1:0, (a._m33 >= b._m33)?1:0); }
	__device__ __host__ int4x4 operator >(const uint4x4 &a, const uint4x4 &b) { return int4x4((a._m00 > b._m00)?1:0, (a._m01 > b._m01)?1:0, (a._m02 > b._m02)?1:0, (a._m03 > b._m03)?1:0, (a._m10 > b._m10)?1:0, (a._m11 > b._m11)?1:0, (a._m12 > b._m12)?1:0, (a._m13 > b._m13)?1:0, (a._m20 > b._m20)?1:0, (a._m21 > b._m21)?1:0, (a._m22 > b._m22)?1:0, (a._m23 > b._m23)?1:0, (a._m30 > b._m30)?1:0, (a._m31 > b._m31)?1:0, (a._m32 > b._m32)?1:0, (a._m33 > b._m33)?1:0); }

#define PI 3.141592653589793
	__device__ __host__ float abs(const float &v) { return fabsf(v); }

	__device__ __host__ float_1 abs(const float_1 &v) { return float_1(fabsf(v.x)); }
	__device__ __host__ float_2 abs(const float_2 &v) { return float_2(fabsf(v.x), fabsf(v.y)); }
	__device__ __host__ float_3 abs(const float_3 &v) { return float_3(fabsf(v.x), fabsf(v.y), fabsf(v.z)); }
	__device__ __host__ float_4 abs(const float_4 &v) { return float_4(fabsf(v.x), fabsf(v.y), fabsf(v.z), fabsf(v.w)); }

	__device__ __host__ float1x1 abs(const float1x1 &v) { return float1x1(fabsf(v._m00)); }
	__device__ __host__ float1x2 abs(const float1x2 &v) { return float1x2(fabsf(v._m00), fabsf(v._m01)); }
	__device__ __host__ float1x3 abs(const float1x3 &v) { return float1x3(fabsf(v._m00), fabsf(v._m01), fabsf(v._m02)); }
	__device__ __host__ float1x4 abs(const float1x4 &v) { return float1x4(fabsf(v._m00), fabsf(v._m01), fabsf(v._m02), fabsf(v._m03)); }
	__device__ __host__ float2x1 abs(const float2x1 &v) { return float2x1(fabsf(v._m00), fabsf(v._m10)); }
	__device__ __host__ float2x2 abs(const float2x2 &v) { return float2x2(fabsf(v._m00), fabsf(v._m01), fabsf(v._m10), fabsf(v._m11)); }
	__device__ __host__ float2x3 abs(const float2x3 &v) { return float2x3(fabsf(v._m00), fabsf(v._m01), fabsf(v._m02), fabsf(v._m10), fabsf(v._m11), fabsf(v._m12)); }
	__device__ __host__ float2x4 abs(const float2x4 &v) { return float2x4(fabsf(v._m00), fabsf(v._m01), fabsf(v._m02), fabsf(v._m03), fabsf(v._m10), fabsf(v._m11), fabsf(v._m12), fabsf(v._m13)); }
	__device__ __host__ float3x1 abs(const float3x1 &v) { return float3x1(fabsf(v._m00), fabsf(v._m10), fabsf(v._m20)); }
	__device__ __host__ float3x2 abs(const float3x2 &v) { return float3x2(fabsf(v._m00), fabsf(v._m01), fabsf(v._m10), fabsf(v._m11), fabsf(v._m20), fabsf(v._m21)); }
	__device__ __host__ float3x3 abs(const float3x3 &v) { return float3x3(fabsf(v._m00), fabsf(v._m01), fabsf(v._m02), fabsf(v._m10), fabsf(v._m11), fabsf(v._m12), fabsf(v._m20), fabsf(v._m21), fabsf(v._m22)); }
	__device__ __host__ float3x4 abs(const float3x4 &v) { return float3x4(fabsf(v._m00), fabsf(v._m01), fabsf(v._m02), fabsf(v._m03), fabsf(v._m10), fabsf(v._m11), fabsf(v._m12), fabsf(v._m13), fabsf(v._m20), fabsf(v._m21), fabsf(v._m22), fabsf(v._m23)); }
	__device__ __host__ float4x1 abs(const float4x1 &v) { return float4x1(fabsf(v._m00), fabsf(v._m10), fabsf(v._m20), fabsf(v._m30)); }
	__device__ __host__ float4x2 abs(const float4x2 &v) { return float4x2(fabsf(v._m00), fabsf(v._m01), fabsf(v._m10), fabsf(v._m11), fabsf(v._m20), fabsf(v._m21), fabsf(v._m30), fabsf(v._m31)); }
	__device__ __host__ float4x3 abs(const float4x3 &v) { return float4x3(fabsf(v._m00), fabsf(v._m01), fabsf(v._m02), fabsf(v._m10), fabsf(v._m11), fabsf(v._m12), fabsf(v._m20), fabsf(v._m21), fabsf(v._m22), fabsf(v._m30), fabsf(v._m31), fabsf(v._m32)); }
	__device__ __host__ float4x4 abs(const float4x4 &v) { return float4x4(fabsf(v._m00), fabsf(v._m01), fabsf(v._m02), fabsf(v._m03), fabsf(v._m10), fabsf(v._m11), fabsf(v._m12), fabsf(v._m13), fabsf(v._m20), fabsf(v._m21), fabsf(v._m22), fabsf(v._m23), fabsf(v._m30), fabsf(v._m31), fabsf(v._m32), fabsf(v._m33)); }



	__device__ __host__ float acos(const float &v) { return acosf(v); }

	__device__ __host__ float_1 acos(const float_1 &v) { return float_1(acosf(v.x)); }
	__device__ __host__ float_2 acos(const float_2 &v) { return float_2(acosf(v.x), acosf(v.y)); }
	__device__ __host__ float_3 acos(const float_3 &v) { return float_3(acosf(v.x), acosf(v.y), acosf(v.z)); }
	__device__ __host__ float_4 acos(const float_4 &v) { return float_4(acosf(v.x), acosf(v.y), acosf(v.z), acosf(v.w)); }

	__device__ __host__ float1x1 acos(const float1x1 &v) { return float1x1(acosf(v._m00)); }
	__device__ __host__ float1x2 acos(const float1x2 &v) { return float1x2(acosf(v._m00), acosf(v._m01)); }
	__device__ __host__ float1x3 acos(const float1x3 &v) { return float1x3(acosf(v._m00), acosf(v._m01), acosf(v._m02)); }
	__device__ __host__ float1x4 acos(const float1x4 &v) { return float1x4(acosf(v._m00), acosf(v._m01), acosf(v._m02), acosf(v._m03)); }
	__device__ __host__ float2x1 acos(const float2x1 &v) { return float2x1(acosf(v._m00), acosf(v._m10)); }
	__device__ __host__ float2x2 acos(const float2x2 &v) { return float2x2(acosf(v._m00), acosf(v._m01), acosf(v._m10), acosf(v._m11)); }
	__device__ __host__ float2x3 acos(const float2x3 &v) { return float2x3(acosf(v._m00), acosf(v._m01), acosf(v._m02), acosf(v._m10), acosf(v._m11), acosf(v._m12)); }
	__device__ __host__ float2x4 acos(const float2x4 &v) { return float2x4(acosf(v._m00), acosf(v._m01), acosf(v._m02), acosf(v._m03), acosf(v._m10), acosf(v._m11), acosf(v._m12), acosf(v._m13)); }
	__device__ __host__ float3x1 acos(const float3x1 &v) { return float3x1(acosf(v._m00), acosf(v._m10), acosf(v._m20)); }
	__device__ __host__ float3x2 acos(const float3x2 &v) { return float3x2(acosf(v._m00), acosf(v._m01), acosf(v._m10), acosf(v._m11), acosf(v._m20), acosf(v._m21)); }
	__device__ __host__ float3x3 acos(const float3x3 &v) { return float3x3(acosf(v._m00), acosf(v._m01), acosf(v._m02), acosf(v._m10), acosf(v._m11), acosf(v._m12), acosf(v._m20), acosf(v._m21), acosf(v._m22)); }
	__device__ __host__ float3x4 acos(const float3x4 &v) { return float3x4(acosf(v._m00), acosf(v._m01), acosf(v._m02), acosf(v._m03), acosf(v._m10), acosf(v._m11), acosf(v._m12), acosf(v._m13), acosf(v._m20), acosf(v._m21), acosf(v._m22), acosf(v._m23)); }
	__device__ __host__ float4x1 acos(const float4x1 &v) { return float4x1(acosf(v._m00), acosf(v._m10), acosf(v._m20), acosf(v._m30)); }
	__device__ __host__ float4x2 acos(const float4x2 &v) { return float4x2(acosf(v._m00), acosf(v._m01), acosf(v._m10), acosf(v._m11), acosf(v._m20), acosf(v._m21), acosf(v._m30), acosf(v._m31)); }
	__device__ __host__ float4x3 acos(const float4x3 &v) { return float4x3(acosf(v._m00), acosf(v._m01), acosf(v._m02), acosf(v._m10), acosf(v._m11), acosf(v._m12), acosf(v._m20), acosf(v._m21), acosf(v._m22), acosf(v._m30), acosf(v._m31), acosf(v._m32)); }
	__device__ __host__ float4x4 acos(const float4x4 &v) { return float4x4(acosf(v._m00), acosf(v._m01), acosf(v._m02), acosf(v._m03), acosf(v._m10), acosf(v._m11), acosf(v._m12), acosf(v._m13), acosf(v._m20), acosf(v._m21), acosf(v._m22), acosf(v._m23), acosf(v._m30), acosf(v._m31), acosf(v._m32), acosf(v._m33)); }



	__device__ __host__ bool all(const float_1 &v) { return (v.x != 0); }
	__device__ __host__ bool all(const float_2 &v) { return (v.x != 0) && (v.y != 0); }
	__device__ __host__ bool all(const float_3 &v) { return (v.x != 0) && (v.y != 0) && (v.z != 0); }
	__device__ __host__ bool all(const float_4 &v) { return (v.x != 0) && (v.y != 0) && (v.z != 0) && (v.w != 0); }
	__device__ __host__ bool all(const float1x1 &m) { return (m._m00 != 0); }
	__device__ __host__ bool all(const float1x2 &m) { return (m._m00 != 0) && (m._m01 != 0); }
	__device__ __host__ bool all(const float1x3 &m) { return (m._m00 != 0) && (m._m01 != 0) && (m._m02 != 0); }
	__device__ __host__ bool all(const float1x4 &m) { return (m._m00 != 0) && (m._m01 != 0) && (m._m02 != 0) && (m._m03 != 0); }
	__device__ __host__ bool all(const float2x1 &m) { return (m._m00 != 0) && (m._m10 != 0); }
	__device__ __host__ bool all(const float2x2 &m) { return (m._m00 != 0) && (m._m01 != 0) && (m._m10 != 0) && (m._m11 != 0); }
	__device__ __host__ bool all(const float2x3 &m) { return (m._m00 != 0) && (m._m01 != 0) && (m._m02 != 0) && (m._m10 != 0) && (m._m11 != 0) && (m._m12 != 0); }
	__device__ __host__ bool all(const float2x4 &m) { return (m._m00 != 0) && (m._m01 != 0) && (m._m02 != 0) && (m._m03 != 0) && (m._m10 != 0) && (m._m11 != 0) && (m._m12 != 0) && (m._m13 != 0); }
	__device__ __host__ bool all(const float3x1 &m) { return (m._m00 != 0) && (m._m10 != 0) && (m._m20 != 0); }
	__device__ __host__ bool all(const float3x2 &m) { return (m._m00 != 0) && (m._m01 != 0) && (m._m10 != 0) && (m._m11 != 0) && (m._m20 != 0) && (m._m21 != 0); }
	__device__ __host__ bool all(const float3x3 &m) { return (m._m00 != 0) && (m._m01 != 0) && (m._m02 != 0) && (m._m10 != 0) && (m._m11 != 0) && (m._m12 != 0) && (m._m20 != 0) && (m._m21 != 0) && (m._m22 != 0); }
	__device__ __host__ bool all(const float3x4 &m) { return (m._m00 != 0) && (m._m01 != 0) && (m._m02 != 0) && (m._m03 != 0) && (m._m10 != 0) && (m._m11 != 0) && (m._m12 != 0) && (m._m13 != 0) && (m._m20 != 0) && (m._m21 != 0) && (m._m22 != 0) && (m._m23 != 0); }
	__device__ __host__ bool all(const float4x1 &m) { return (m._m00 != 0) && (m._m10 != 0) && (m._m20 != 0) && (m._m30 != 0); }
	__device__ __host__ bool all(const float4x2 &m) { return (m._m00 != 0) && (m._m01 != 0) && (m._m10 != 0) && (m._m11 != 0) && (m._m20 != 0) && (m._m21 != 0) && (m._m30 != 0) && (m._m31 != 0); }
	__device__ __host__ bool all(const float4x3 &m) { return (m._m00 != 0) && (m._m01 != 0) && (m._m02 != 0) && (m._m10 != 0) && (m._m11 != 0) && (m._m12 != 0) && (m._m20 != 0) && (m._m21 != 0) && (m._m22 != 0) && (m._m30 != 0) && (m._m31 != 0) && (m._m32 != 0); }
	__device__ __host__ bool all(const float4x4 &m) { return (m._m00 != 0) && (m._m01 != 0) && (m._m02 != 0) && (m._m03 != 0) && (m._m10 != 0) && (m._m11 != 0) && (m._m12 != 0) && (m._m13 != 0) && (m._m20 != 0) && (m._m21 != 0) && (m._m22 != 0) && (m._m23 != 0) && (m._m30 != 0) && (m._m31 != 0) && (m._m32 != 0) && (m._m33 != 0); }


	__device__ __host__ bool any(const float_1 &v) { return (v.x != 0); }
	__device__ __host__ bool any(const float_2 &v) { return (v.x != 0) || (v.y != 0); }
	__device__ __host__ bool any(const float_3 &v) { return (v.x != 0) || (v.y != 0) || (v.z != 0); }
	__device__ __host__ bool any(const float_4 &v) { return (v.x != 0) || (v.y != 0) || (v.z != 0) || (v.w != 0); }
	__device__ __host__ bool any(const float1x1 &m) { return (m._m00 != 0); }
	__device__ __host__ bool any(const float1x2 &m) { return (m._m00 != 0) || (m._m01 != 0); }
	__device__ __host__ bool any(const float1x3 &m) { return (m._m00 != 0) || (m._m01 != 0) || (m._m02 != 0); }
	__device__ __host__ bool any(const float1x4 &m) { return (m._m00 != 0) || (m._m01 != 0) || (m._m02 != 0) || (m._m03 != 0); }
	__device__ __host__ bool any(const float2x1 &m) { return (m._m00 != 0) || (m._m10 != 0); }
	__device__ __host__ bool any(const float2x2 &m) { return (m._m00 != 0) || (m._m01 != 0) || (m._m10 != 0) || (m._m11 != 0); }
	__device__ __host__ bool any(const float2x3 &m) { return (m._m00 != 0) || (m._m01 != 0) || (m._m02 != 0) || (m._m10 != 0) || (m._m11 != 0) || (m._m12 != 0); }
	__device__ __host__ bool any(const float2x4 &m) { return (m._m00 != 0) || (m._m01 != 0) || (m._m02 != 0) || (m._m03 != 0) || (m._m10 != 0) || (m._m11 != 0) || (m._m12 != 0) || (m._m13 != 0); }
	__device__ __host__ bool any(const float3x1 &m) { return (m._m00 != 0) || (m._m10 != 0) || (m._m20 != 0); }
	__device__ __host__ bool any(const float3x2 &m) { return (m._m00 != 0) || (m._m01 != 0) || (m._m10 != 0) || (m._m11 != 0) || (m._m20 != 0) || (m._m21 != 0); }
	__device__ __host__ bool any(const float3x3 &m) { return (m._m00 != 0) || (m._m01 != 0) || (m._m02 != 0) || (m._m10 != 0) || (m._m11 != 0) || (m._m12 != 0) || (m._m20 != 0) || (m._m21 != 0) || (m._m22 != 0); }
	__device__ __host__ bool any(const float3x4 &m) { return (m._m00 != 0) || (m._m01 != 0) || (m._m02 != 0) || (m._m03 != 0) || (m._m10 != 0) || (m._m11 != 0) || (m._m12 != 0) || (m._m13 != 0) || (m._m20 != 0) || (m._m21 != 0) || (m._m22 != 0) || (m._m23 != 0); }
	__device__ __host__ bool any(const float4x1 &m) { return (m._m00 != 0) || (m._m10 != 0) || (m._m20 != 0) || (m._m30 != 0); }
	__device__ __host__ bool any(const float4x2 &m) { return (m._m00 != 0) || (m._m01 != 0) || (m._m10 != 0) || (m._m11 != 0) || (m._m20 != 0) || (m._m21 != 0) || (m._m30 != 0) || (m._m31 != 0); }
	__device__ __host__ bool any(const float4x3 &m) { return (m._m00 != 0) || (m._m01 != 0) || (m._m02 != 0) || (m._m10 != 0) || (m._m11 != 0) || (m._m12 != 0) || (m._m20 != 0) || (m._m21 != 0) || (m._m22 != 0) || (m._m30 != 0) || (m._m31 != 0) || (m._m32 != 0); }
	__device__ __host__ bool any(const float4x4 &m) { return (m._m00 != 0) || (m._m01 != 0) || (m._m02 != 0) || (m._m03 != 0) || (m._m10 != 0) || (m._m11 != 0) || (m._m12 != 0) || (m._m13 != 0) || (m._m20 != 0) || (m._m21 != 0) || (m._m22 != 0) || (m._m23 != 0) || (m._m30 != 0) || (m._m31 != 0) || (m._m32 != 0) || (m._m33 != 0); }


	__device__ __host__ float asin(const float &v) { return asinf(v); }

	__device__ __host__ float_1 asin(const float_1 &v) { return float_1(asinf(v.x)); }
	__device__ __host__ float_2 asin(const float_2 &v) { return float_2(asinf(v.x), asinf(v.y)); }
	__device__ __host__ float_3 asin(const float_3 &v) { return float_3(asinf(v.x), asinf(v.y), asinf(v.z)); }
	__device__ __host__ float_4 asin(const float_4 &v) { return float_4(asinf(v.x), asinf(v.y), asinf(v.z), asinf(v.w)); }

	__device__ __host__ float1x1 asin(const float1x1 &v) { return float1x1(asinf(v._m00)); }
	__device__ __host__ float1x2 asin(const float1x2 &v) { return float1x2(asinf(v._m00), asinf(v._m01)); }
	__device__ __host__ float1x3 asin(const float1x3 &v) { return float1x3(asinf(v._m00), asinf(v._m01), asinf(v._m02)); }
	__device__ __host__ float1x4 asin(const float1x4 &v) { return float1x4(asinf(v._m00), asinf(v._m01), asinf(v._m02), asinf(v._m03)); }
	__device__ __host__ float2x1 asin(const float2x1 &v) { return float2x1(asinf(v._m00), asinf(v._m10)); }
	__device__ __host__ float2x2 asin(const float2x2 &v) { return float2x2(asinf(v._m00), asinf(v._m01), asinf(v._m10), asinf(v._m11)); }
	__device__ __host__ float2x3 asin(const float2x3 &v) { return float2x3(asinf(v._m00), asinf(v._m01), asinf(v._m02), asinf(v._m10), asinf(v._m11), asinf(v._m12)); }
	__device__ __host__ float2x4 asin(const float2x4 &v) { return float2x4(asinf(v._m00), asinf(v._m01), asinf(v._m02), asinf(v._m03), asinf(v._m10), asinf(v._m11), asinf(v._m12), asinf(v._m13)); }
	__device__ __host__ float3x1 asin(const float3x1 &v) { return float3x1(asinf(v._m00), asinf(v._m10), asinf(v._m20)); }
	__device__ __host__ float3x2 asin(const float3x2 &v) { return float3x2(asinf(v._m00), asinf(v._m01), asinf(v._m10), asinf(v._m11), asinf(v._m20), asinf(v._m21)); }
	__device__ __host__ float3x3 asin(const float3x3 &v) { return float3x3(asinf(v._m00), asinf(v._m01), asinf(v._m02), asinf(v._m10), asinf(v._m11), asinf(v._m12), asinf(v._m20), asinf(v._m21), asinf(v._m22)); }
	__device__ __host__ float3x4 asin(const float3x4 &v) { return float3x4(asinf(v._m00), asinf(v._m01), asinf(v._m02), asinf(v._m03), asinf(v._m10), asinf(v._m11), asinf(v._m12), asinf(v._m13), asinf(v._m20), asinf(v._m21), asinf(v._m22), asinf(v._m23)); }
	__device__ __host__ float4x1 asin(const float4x1 &v) { return float4x1(asinf(v._m00), asinf(v._m10), asinf(v._m20), asinf(v._m30)); }
	__device__ __host__ float4x2 asin(const float4x2 &v) { return float4x2(asinf(v._m00), asinf(v._m01), asinf(v._m10), asinf(v._m11), asinf(v._m20), asinf(v._m21), asinf(v._m30), asinf(v._m31)); }
	__device__ __host__ float4x3 asin(const float4x3 &v) { return float4x3(asinf(v._m00), asinf(v._m01), asinf(v._m02), asinf(v._m10), asinf(v._m11), asinf(v._m12), asinf(v._m20), asinf(v._m21), asinf(v._m22), asinf(v._m30), asinf(v._m31), asinf(v._m32)); }
	__device__ __host__ float4x4 asin(const float4x4 &v) { return float4x4(asinf(v._m00), asinf(v._m01), asinf(v._m02), asinf(v._m03), asinf(v._m10), asinf(v._m11), asinf(v._m12), asinf(v._m13), asinf(v._m20), asinf(v._m21), asinf(v._m22), asinf(v._m23), asinf(v._m30), asinf(v._m31), asinf(v._m32), asinf(v._m33)); }



	__device__ __host__ float atan(const float &v) { return atanf(v); }

	__device__ __host__ float_1 atan(const float_1 &v) { return float_1(atanf(v.x)); }
	__device__ __host__ float_2 atan(const float_2 &v) { return float_2(atanf(v.x), atanf(v.y)); }
	__device__ __host__ float_3 atan(const float_3 &v) { return float_3(atanf(v.x), atanf(v.y), atanf(v.z)); }
	__device__ __host__ float_4 atan(const float_4 &v) { return float_4(atanf(v.x), atanf(v.y), atanf(v.z), atanf(v.w)); }

	__device__ __host__ float1x1 atan(const float1x1 &v) { return float1x1(atanf(v._m00)); }
	__device__ __host__ float1x2 atan(const float1x2 &v) { return float1x2(atanf(v._m00), atanf(v._m01)); }
	__device__ __host__ float1x3 atan(const float1x3 &v) { return float1x3(atanf(v._m00), atanf(v._m01), atanf(v._m02)); }
	__device__ __host__ float1x4 atan(const float1x4 &v) { return float1x4(atanf(v._m00), atanf(v._m01), atanf(v._m02), atanf(v._m03)); }
	__device__ __host__ float2x1 atan(const float2x1 &v) { return float2x1(atanf(v._m00), atanf(v._m10)); }
	__device__ __host__ float2x2 atan(const float2x2 &v) { return float2x2(atanf(v._m00), atanf(v._m01), atanf(v._m10), atanf(v._m11)); }
	__device__ __host__ float2x3 atan(const float2x3 &v) { return float2x3(atanf(v._m00), atanf(v._m01), atanf(v._m02), atanf(v._m10), atanf(v._m11), atanf(v._m12)); }
	__device__ __host__ float2x4 atan(const float2x4 &v) { return float2x4(atanf(v._m00), atanf(v._m01), atanf(v._m02), atanf(v._m03), atanf(v._m10), atanf(v._m11), atanf(v._m12), atanf(v._m13)); }
	__device__ __host__ float3x1 atan(const float3x1 &v) { return float3x1(atanf(v._m00), atanf(v._m10), atanf(v._m20)); }
	__device__ __host__ float3x2 atan(const float3x2 &v) { return float3x2(atanf(v._m00), atanf(v._m01), atanf(v._m10), atanf(v._m11), atanf(v._m20), atanf(v._m21)); }
	__device__ __host__ float3x3 atan(const float3x3 &v) { return float3x3(atanf(v._m00), atanf(v._m01), atanf(v._m02), atanf(v._m10), atanf(v._m11), atanf(v._m12), atanf(v._m20), atanf(v._m21), atanf(v._m22)); }
	__device__ __host__ float3x4 atan(const float3x4 &v) { return float3x4(atanf(v._m00), atanf(v._m01), atanf(v._m02), atanf(v._m03), atanf(v._m10), atanf(v._m11), atanf(v._m12), atanf(v._m13), atanf(v._m20), atanf(v._m21), atanf(v._m22), atanf(v._m23)); }
	__device__ __host__ float4x1 atan(const float4x1 &v) { return float4x1(atanf(v._m00), atanf(v._m10), atanf(v._m20), atanf(v._m30)); }
	__device__ __host__ float4x2 atan(const float4x2 &v) { return float4x2(atanf(v._m00), atanf(v._m01), atanf(v._m10), atanf(v._m11), atanf(v._m20), atanf(v._m21), atanf(v._m30), atanf(v._m31)); }
	__device__ __host__ float4x3 atan(const float4x3 &v) { return float4x3(atanf(v._m00), atanf(v._m01), atanf(v._m02), atanf(v._m10), atanf(v._m11), atanf(v._m12), atanf(v._m20), atanf(v._m21), atanf(v._m22), atanf(v._m30), atanf(v._m31), atanf(v._m32)); }
	__device__ __host__ float4x4 atan(const float4x4 &v) { return float4x4(atanf(v._m00), atanf(v._m01), atanf(v._m02), atanf(v._m03), atanf(v._m10), atanf(v._m11), atanf(v._m12), atanf(v._m13), atanf(v._m20), atanf(v._m21), atanf(v._m22), atanf(v._m23), atanf(v._m30), atanf(v._m31), atanf(v._m32), atanf(v._m33)); }



	__device__ __host__ float atan2(const float &a, const float &b) { return atan2f(a, b); }

	__device__ __host__ float_1 atan2(const float_1 &a, const float_1 &b) { return float_1(atan2f(a.x, b.x)); }
	__device__ __host__ float_2 atan2(const float_2 &a, const float_2 &b) { return float_2(atan2f(a.x, b.x), atan2f(a.y, b.y)); }
	__device__ __host__ float_3 atan2(const float_3 &a, const float_3 &b) { return float_3(atan2f(a.x, b.x), atan2f(a.y, b.y), atan2f(a.z, b.z)); }
	__device__ __host__ float_4 atan2(const float_4 &a, const float_4 &b) { return float_4(atan2f(a.x, b.x), atan2f(a.y, b.y), atan2f(a.z, b.z), atan2f(a.w, b.w)); }

	__device__ __host__ float1x1 atan2(const float1x1 &a, const float1x1 &b) { return float1x1(atan2f(a._m00, b._m00)); }
	__device__ __host__ float1x2 atan2(const float1x2 &a, const float1x2 &b) { return float1x2(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01)); }
	__device__ __host__ float1x3 atan2(const float1x3 &a, const float1x3 &b) { return float1x3(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01), atan2f(a._m02, b._m02)); }
	__device__ __host__ float1x4 atan2(const float1x4 &a, const float1x4 &b) { return float1x4(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01), atan2f(a._m02, b._m02), atan2f(a._m03, b._m03)); }
	__device__ __host__ float2x1 atan2(const float2x1 &a, const float2x1 &b) { return float2x1(atan2f(a._m00, b._m00), atan2f(a._m10, b._m10)); }
	__device__ __host__ float2x2 atan2(const float2x2 &a, const float2x2 &b) { return float2x2(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01), atan2f(a._m10, b._m10), atan2f(a._m11, b._m11)); }
	__device__ __host__ float2x3 atan2(const float2x3 &a, const float2x3 &b) { return float2x3(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01), atan2f(a._m02, b._m02), atan2f(a._m10, b._m10), atan2f(a._m11, b._m11), atan2f(a._m12, b._m12)); }
	__device__ __host__ float2x4 atan2(const float2x4 &a, const float2x4 &b) { return float2x4(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01), atan2f(a._m02, b._m02), atan2f(a._m03, b._m03), atan2f(a._m10, b._m10), atan2f(a._m11, b._m11), atan2f(a._m12, b._m12), atan2f(a._m13, b._m13)); }
	__device__ __host__ float3x1 atan2(const float3x1 &a, const float3x1 &b) { return float3x1(atan2f(a._m00, b._m00), atan2f(a._m10, b._m10), atan2f(a._m20, b._m20)); }
	__device__ __host__ float3x2 atan2(const float3x2 &a, const float3x2 &b) { return float3x2(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01), atan2f(a._m10, b._m10), atan2f(a._m11, b._m11), atan2f(a._m20, b._m20), atan2f(a._m21, b._m21)); }
	__device__ __host__ float3x3 atan2(const float3x3 &a, const float3x3 &b) { return float3x3(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01), atan2f(a._m02, b._m02), atan2f(a._m10, b._m10), atan2f(a._m11, b._m11), atan2f(a._m12, b._m12), atan2f(a._m20, b._m20), atan2f(a._m21, b._m21), atan2f(a._m22, b._m22)); }
	__device__ __host__ float3x4 atan2(const float3x4 &a, const float3x4 &b) { return float3x4(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01), atan2f(a._m02, b._m02), atan2f(a._m03, b._m03), atan2f(a._m10, b._m10), atan2f(a._m11, b._m11), atan2f(a._m12, b._m12), atan2f(a._m13, b._m13), atan2f(a._m20, b._m20), atan2f(a._m21, b._m21), atan2f(a._m22, b._m22), atan2f(a._m23, b._m23)); }
	__device__ __host__ float4x1 atan2(const float4x1 &a, const float4x1 &b) { return float4x1(atan2f(a._m00, b._m00), atan2f(a._m10, b._m10), atan2f(a._m20, b._m20), atan2f(a._m30, b._m30)); }
	__device__ __host__ float4x2 atan2(const float4x2 &a, const float4x2 &b) { return float4x2(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01), atan2f(a._m10, b._m10), atan2f(a._m11, b._m11), atan2f(a._m20, b._m20), atan2f(a._m21, b._m21), atan2f(a._m30, b._m30), atan2f(a._m31, b._m31)); }
	__device__ __host__ float4x3 atan2(const float4x3 &a, const float4x3 &b) { return float4x3(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01), atan2f(a._m02, b._m02), atan2f(a._m10, b._m10), atan2f(a._m11, b._m11), atan2f(a._m12, b._m12), atan2f(a._m20, b._m20), atan2f(a._m21, b._m21), atan2f(a._m22, b._m22), atan2f(a._m30, b._m30), atan2f(a._m31, b._m31), atan2f(a._m32, b._m32)); }
	__device__ __host__ float4x4 atan2(const float4x4 &a, const float4x4 &b) { return float4x4(atan2f(a._m00, b._m00), atan2f(a._m01, b._m01), atan2f(a._m02, b._m02), atan2f(a._m03, b._m03), atan2f(a._m10, b._m10), atan2f(a._m11, b._m11), atan2f(a._m12, b._m12), atan2f(a._m13, b._m13), atan2f(a._m20, b._m20), atan2f(a._m21, b._m21), atan2f(a._m22, b._m22), atan2f(a._m23, b._m23), atan2f(a._m30, b._m30), atan2f(a._m31, b._m31), atan2f(a._m32, b._m32), atan2f(a._m33, b._m33)); }



	__device__ __host__ float ceil(const float &v) { return ceilf(v); }

	__device__ __host__ float_1 ceil(const float_1 &v) { return float_1(ceilf(v.x)); }
	__device__ __host__ float_2 ceil(const float_2 &v) { return float_2(ceilf(v.x), ceilf(v.y)); }
	__device__ __host__ float_3 ceil(const float_3 &v) { return float_3(ceilf(v.x), ceilf(v.y), ceilf(v.z)); }
	__device__ __host__ float_4 ceil(const float_4 &v) { return float_4(ceilf(v.x), ceilf(v.y), ceilf(v.z), ceilf(v.w)); }

	__device__ __host__ float1x1 ceil(const float1x1 &v) { return float1x1(ceilf(v._m00)); }
	__device__ __host__ float1x2 ceil(const float1x2 &v) { return float1x2(ceilf(v._m00), ceilf(v._m01)); }
	__device__ __host__ float1x3 ceil(const float1x3 &v) { return float1x3(ceilf(v._m00), ceilf(v._m01), ceilf(v._m02)); }
	__device__ __host__ float1x4 ceil(const float1x4 &v) { return float1x4(ceilf(v._m00), ceilf(v._m01), ceilf(v._m02), ceilf(v._m03)); }
	__device__ __host__ float2x1 ceil(const float2x1 &v) { return float2x1(ceilf(v._m00), ceilf(v._m10)); }
	__device__ __host__ float2x2 ceil(const float2x2 &v) { return float2x2(ceilf(v._m00), ceilf(v._m01), ceilf(v._m10), ceilf(v._m11)); }
	__device__ __host__ float2x3 ceil(const float2x3 &v) { return float2x3(ceilf(v._m00), ceilf(v._m01), ceilf(v._m02), ceilf(v._m10), ceilf(v._m11), ceilf(v._m12)); }
	__device__ __host__ float2x4 ceil(const float2x4 &v) { return float2x4(ceilf(v._m00), ceilf(v._m01), ceilf(v._m02), ceilf(v._m03), ceilf(v._m10), ceilf(v._m11), ceilf(v._m12), ceilf(v._m13)); }
	__device__ __host__ float3x1 ceil(const float3x1 &v) { return float3x1(ceilf(v._m00), ceilf(v._m10), ceilf(v._m20)); }
	__device__ __host__ float3x2 ceil(const float3x2 &v) { return float3x2(ceilf(v._m00), ceilf(v._m01), ceilf(v._m10), ceilf(v._m11), ceilf(v._m20), ceilf(v._m21)); }
	__device__ __host__ float3x3 ceil(const float3x3 &v) { return float3x3(ceilf(v._m00), ceilf(v._m01), ceilf(v._m02), ceilf(v._m10), ceilf(v._m11), ceilf(v._m12), ceilf(v._m20), ceilf(v._m21), ceilf(v._m22)); }
	__device__ __host__ float3x4 ceil(const float3x4 &v) { return float3x4(ceilf(v._m00), ceilf(v._m01), ceilf(v._m02), ceilf(v._m03), ceilf(v._m10), ceilf(v._m11), ceilf(v._m12), ceilf(v._m13), ceilf(v._m20), ceilf(v._m21), ceilf(v._m22), ceilf(v._m23)); }
	__device__ __host__ float4x1 ceil(const float4x1 &v) { return float4x1(ceilf(v._m00), ceilf(v._m10), ceilf(v._m20), ceilf(v._m30)); }
	__device__ __host__ float4x2 ceil(const float4x2 &v) { return float4x2(ceilf(v._m00), ceilf(v._m01), ceilf(v._m10), ceilf(v._m11), ceilf(v._m20), ceilf(v._m21), ceilf(v._m30), ceilf(v._m31)); }
	__device__ __host__ float4x3 ceil(const float4x3 &v) { return float4x3(ceilf(v._m00), ceilf(v._m01), ceilf(v._m02), ceilf(v._m10), ceilf(v._m11), ceilf(v._m12), ceilf(v._m20), ceilf(v._m21), ceilf(v._m22), ceilf(v._m30), ceilf(v._m31), ceilf(v._m32)); }
	__device__ __host__ float4x4 ceil(const float4x4 &v) { return float4x4(ceilf(v._m00), ceilf(v._m01), ceilf(v._m02), ceilf(v._m03), ceilf(v._m10), ceilf(v._m11), ceilf(v._m12), ceilf(v._m13), ceilf(v._m20), ceilf(v._m21), ceilf(v._m22), ceilf(v._m23), ceilf(v._m30), ceilf(v._m31), ceilf(v._m32), ceilf(v._m33)); }



	__device__ __host__ float clamp(const float &a, const float &b, const float &c) { return max(b, min(c, a)); }

	__device__ __host__ float_1 clamp(const float_1 &a, const float_1 &b, const float_1 &c) { return float_1(max(b.x, min(c.x, a.x))); }
	__device__ __host__ float_2 clamp(const float_2 &a, const float_2 &b, const float_2 &c) { return float_2(max(b.x, min(c.x, a.x)), max(b.y, min(c.y, a.y))); }
	__device__ __host__ float_3 clamp(const float_3 &a, const float_3 &b, const float_3 &c) { return float_3(max(b.x, min(c.x, a.x)), max(b.y, min(c.y, a.y)), max(b.z, min(c.z, a.z))); }
	__device__ __host__ float_4 clamp(const float_4 &a, const float_4 &b, const float_4 &c) { return float_4(max(b.x, min(c.x, a.x)), max(b.y, min(c.y, a.y)), max(b.z, min(c.z, a.z)), max(b.w, min(c.w, a.w))); }

	__device__ __host__ float1x1 clamp(const float1x1 &a, const float1x1 &b, const float1x1 &c) { return float1x1(max(b._m00, min(c._m00, a._m00))); }
	__device__ __host__ float1x2 clamp(const float1x2 &a, const float1x2 &b, const float1x2 &c) { return float1x2(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01))); }
	__device__ __host__ float1x3 clamp(const float1x3 &a, const float1x3 &b, const float1x3 &c) { return float1x3(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01)), max(b._m02, min(c._m02, a._m02))); }
	__device__ __host__ float1x4 clamp(const float1x4 &a, const float1x4 &b, const float1x4 &c) { return float1x4(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01)), max(b._m02, min(c._m02, a._m02)), max(b._m03, min(c._m03, a._m03))); }
	__device__ __host__ float2x1 clamp(const float2x1 &a, const float2x1 &b, const float2x1 &c) { return float2x1(max(b._m00, min(c._m00, a._m00)), max(b._m10, min(c._m10, a._m10))); }
	__device__ __host__ float2x2 clamp(const float2x2 &a, const float2x2 &b, const float2x2 &c) { return float2x2(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01)), max(b._m10, min(c._m10, a._m10)), max(b._m11, min(c._m11, a._m11))); }
	__device__ __host__ float2x3 clamp(const float2x3 &a, const float2x3 &b, const float2x3 &c) { return float2x3(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01)), max(b._m02, min(c._m02, a._m02)), max(b._m10, min(c._m10, a._m10)), max(b._m11, min(c._m11, a._m11)), max(b._m12, min(c._m12, a._m12))); }
	__device__ __host__ float2x4 clamp(const float2x4 &a, const float2x4 &b, const float2x4 &c) { return float2x4(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01)), max(b._m02, min(c._m02, a._m02)), max(b._m03, min(c._m03, a._m03)), max(b._m10, min(c._m10, a._m10)), max(b._m11, min(c._m11, a._m11)), max(b._m12, min(c._m12, a._m12)), max(b._m13, min(c._m13, a._m13))); }
	__device__ __host__ float3x1 clamp(const float3x1 &a, const float3x1 &b, const float3x1 &c) { return float3x1(max(b._m00, min(c._m00, a._m00)), max(b._m10, min(c._m10, a._m10)), max(b._m20, min(c._m20, a._m20))); }
	__device__ __host__ float3x2 clamp(const float3x2 &a, const float3x2 &b, const float3x2 &c) { return float3x2(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01)), max(b._m10, min(c._m10, a._m10)), max(b._m11, min(c._m11, a._m11)), max(b._m20, min(c._m20, a._m20)), max(b._m21, min(c._m21, a._m21))); }
	__device__ __host__ float3x3 clamp(const float3x3 &a, const float3x3 &b, const float3x3 &c) { return float3x3(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01)), max(b._m02, min(c._m02, a._m02)), max(b._m10, min(c._m10, a._m10)), max(b._m11, min(c._m11, a._m11)), max(b._m12, min(c._m12, a._m12)), max(b._m20, min(c._m20, a._m20)), max(b._m21, min(c._m21, a._m21)), max(b._m22, min(c._m22, a._m22))); }
	__device__ __host__ float3x4 clamp(const float3x4 &a, const float3x4 &b, const float3x4 &c) { return float3x4(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01)), max(b._m02, min(c._m02, a._m02)), max(b._m03, min(c._m03, a._m03)), max(b._m10, min(c._m10, a._m10)), max(b._m11, min(c._m11, a._m11)), max(b._m12, min(c._m12, a._m12)), max(b._m13, min(c._m13, a._m13)), max(b._m20, min(c._m20, a._m20)), max(b._m21, min(c._m21, a._m21)), max(b._m22, min(c._m22, a._m22)), max(b._m23, min(c._m23, a._m23))); }
	__device__ __host__ float4x1 clamp(const float4x1 &a, const float4x1 &b, const float4x1 &c) { return float4x1(max(b._m00, min(c._m00, a._m00)), max(b._m10, min(c._m10, a._m10)), max(b._m20, min(c._m20, a._m20)), max(b._m30, min(c._m30, a._m30))); }
	__device__ __host__ float4x2 clamp(const float4x2 &a, const float4x2 &b, const float4x2 &c) { return float4x2(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01)), max(b._m10, min(c._m10, a._m10)), max(b._m11, min(c._m11, a._m11)), max(b._m20, min(c._m20, a._m20)), max(b._m21, min(c._m21, a._m21)), max(b._m30, min(c._m30, a._m30)), max(b._m31, min(c._m31, a._m31))); }
	__device__ __host__ float4x3 clamp(const float4x3 &a, const float4x3 &b, const float4x3 &c) { return float4x3(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01)), max(b._m02, min(c._m02, a._m02)), max(b._m10, min(c._m10, a._m10)), max(b._m11, min(c._m11, a._m11)), max(b._m12, min(c._m12, a._m12)), max(b._m20, min(c._m20, a._m20)), max(b._m21, min(c._m21, a._m21)), max(b._m22, min(c._m22, a._m22)), max(b._m30, min(c._m30, a._m30)), max(b._m31, min(c._m31, a._m31)), max(b._m32, min(c._m32, a._m32))); }
	__device__ __host__ float4x4 clamp(const float4x4 &a, const float4x4 &b, const float4x4 &c) { return float4x4(max(b._m00, min(c._m00, a._m00)), max(b._m01, min(c._m01, a._m01)), max(b._m02, min(c._m02, a._m02)), max(b._m03, min(c._m03, a._m03)), max(b._m10, min(c._m10, a._m10)), max(b._m11, min(c._m11, a._m11)), max(b._m12, min(c._m12, a._m12)), max(b._m13, min(c._m13, a._m13)), max(b._m20, min(c._m20, a._m20)), max(b._m21, min(c._m21, a._m21)), max(b._m22, min(c._m22, a._m22)), max(b._m23, min(c._m23, a._m23)), max(b._m30, min(c._m30, a._m30)), max(b._m31, min(c._m31, a._m31)), max(b._m32, min(c._m32, a._m32)), max(b._m33, min(c._m33, a._m33))); }



	__device__ __host__ float_1 cos(const float_1 &v) { return float_1(cosf(v.x)); }
	__device__ __host__ float_2 cos(const float_2 &v) { return float_2(cosf(v.x), cosf(v.y)); }
	__device__ __host__ float_3 cos(const float_3 &v) { return float_3(cosf(v.x), cosf(v.y), cosf(v.z)); }
	__device__ __host__ float_4 cos(const float_4 &v) { return float_4(cosf(v.x), cosf(v.y), cosf(v.z), cosf(v.w)); }

	__device__ __host__ float1x1 cos(const float1x1 &v) { return float1x1(cosf(v._m00)); }
	__device__ __host__ float1x2 cos(const float1x2 &v) { return float1x2(cosf(v._m00), cosf(v._m01)); }
	__device__ __host__ float1x3 cos(const float1x3 &v) { return float1x3(cosf(v._m00), cosf(v._m01), cosf(v._m02)); }
	__device__ __host__ float1x4 cos(const float1x4 &v) { return float1x4(cosf(v._m00), cosf(v._m01), cosf(v._m02), cosf(v._m03)); }
	__device__ __host__ float2x1 cos(const float2x1 &v) { return float2x1(cosf(v._m00), cosf(v._m10)); }
	__device__ __host__ float2x2 cos(const float2x2 &v) { return float2x2(cosf(v._m00), cosf(v._m01), cosf(v._m10), cosf(v._m11)); }
	__device__ __host__ float2x3 cos(const float2x3 &v) { return float2x3(cosf(v._m00), cosf(v._m01), cosf(v._m02), cosf(v._m10), cosf(v._m11), cosf(v._m12)); }
	__device__ __host__ float2x4 cos(const float2x4 &v) { return float2x4(cosf(v._m00), cosf(v._m01), cosf(v._m02), cosf(v._m03), cosf(v._m10), cosf(v._m11), cosf(v._m12), cosf(v._m13)); }
	__device__ __host__ float3x1 cos(const float3x1 &v) { return float3x1(cosf(v._m00), cosf(v._m10), cosf(v._m20)); }
	__device__ __host__ float3x2 cos(const float3x2 &v) { return float3x2(cosf(v._m00), cosf(v._m01), cosf(v._m10), cosf(v._m11), cosf(v._m20), cosf(v._m21)); }
	__device__ __host__ float3x3 cos(const float3x3 &v) { return float3x3(cosf(v._m00), cosf(v._m01), cosf(v._m02), cosf(v._m10), cosf(v._m11), cosf(v._m12), cosf(v._m20), cosf(v._m21), cosf(v._m22)); }
	__device__ __host__ float3x4 cos(const float3x4 &v) { return float3x4(cosf(v._m00), cosf(v._m01), cosf(v._m02), cosf(v._m03), cosf(v._m10), cosf(v._m11), cosf(v._m12), cosf(v._m13), cosf(v._m20), cosf(v._m21), cosf(v._m22), cosf(v._m23)); }
	__device__ __host__ float4x1 cos(const float4x1 &v) { return float4x1(cosf(v._m00), cosf(v._m10), cosf(v._m20), cosf(v._m30)); }
	__device__ __host__ float4x2 cos(const float4x2 &v) { return float4x2(cosf(v._m00), cosf(v._m01), cosf(v._m10), cosf(v._m11), cosf(v._m20), cosf(v._m21), cosf(v._m30), cosf(v._m31)); }
	__device__ __host__ float4x3 cos(const float4x3 &v) { return float4x3(cosf(v._m00), cosf(v._m01), cosf(v._m02), cosf(v._m10), cosf(v._m11), cosf(v._m12), cosf(v._m20), cosf(v._m21), cosf(v._m22), cosf(v._m30), cosf(v._m31), cosf(v._m32)); }
	__device__ __host__ float4x4 cos(const float4x4 &v) { return float4x4(cosf(v._m00), cosf(v._m01), cosf(v._m02), cosf(v._m03), cosf(v._m10), cosf(v._m11), cosf(v._m12), cosf(v._m13), cosf(v._m20), cosf(v._m21), cosf(v._m22), cosf(v._m23), cosf(v._m30), cosf(v._m31), cosf(v._m32), cosf(v._m33)); }



	__device__ __host__ float cosh(const float &v) { return coshf(v); }

	__device__ __host__ float_1 cosh(const float_1 &v) { return float_1(coshf(v.x)); }
	__device__ __host__ float_2 cosh(const float_2 &v) { return float_2(coshf(v.x), coshf(v.y)); }
	__device__ __host__ float_3 cosh(const float_3 &v) { return float_3(coshf(v.x), coshf(v.y), coshf(v.z)); }
	__device__ __host__ float_4 cosh(const float_4 &v) { return float_4(coshf(v.x), coshf(v.y), coshf(v.z), coshf(v.w)); }

	__device__ __host__ float1x1 cosh(const float1x1 &v) { return float1x1(coshf(v._m00)); }
	__device__ __host__ float1x2 cosh(const float1x2 &v) { return float1x2(coshf(v._m00), coshf(v._m01)); }
	__device__ __host__ float1x3 cosh(const float1x3 &v) { return float1x3(coshf(v._m00), coshf(v._m01), coshf(v._m02)); }
	__device__ __host__ float1x4 cosh(const float1x4 &v) { return float1x4(coshf(v._m00), coshf(v._m01), coshf(v._m02), coshf(v._m03)); }
	__device__ __host__ float2x1 cosh(const float2x1 &v) { return float2x1(coshf(v._m00), coshf(v._m10)); }
	__device__ __host__ float2x2 cosh(const float2x2 &v) { return float2x2(coshf(v._m00), coshf(v._m01), coshf(v._m10), coshf(v._m11)); }
	__device__ __host__ float2x3 cosh(const float2x3 &v) { return float2x3(coshf(v._m00), coshf(v._m01), coshf(v._m02), coshf(v._m10), coshf(v._m11), coshf(v._m12)); }
	__device__ __host__ float2x4 cosh(const float2x4 &v) { return float2x4(coshf(v._m00), coshf(v._m01), coshf(v._m02), coshf(v._m03), coshf(v._m10), coshf(v._m11), coshf(v._m12), coshf(v._m13)); }
	__device__ __host__ float3x1 cosh(const float3x1 &v) { return float3x1(coshf(v._m00), coshf(v._m10), coshf(v._m20)); }
	__device__ __host__ float3x2 cosh(const float3x2 &v) { return float3x2(coshf(v._m00), coshf(v._m01), coshf(v._m10), coshf(v._m11), coshf(v._m20), coshf(v._m21)); }
	__device__ __host__ float3x3 cosh(const float3x3 &v) { return float3x3(coshf(v._m00), coshf(v._m01), coshf(v._m02), coshf(v._m10), coshf(v._m11), coshf(v._m12), coshf(v._m20), coshf(v._m21), coshf(v._m22)); }
	__device__ __host__ float3x4 cosh(const float3x4 &v) { return float3x4(coshf(v._m00), coshf(v._m01), coshf(v._m02), coshf(v._m03), coshf(v._m10), coshf(v._m11), coshf(v._m12), coshf(v._m13), coshf(v._m20), coshf(v._m21), coshf(v._m22), coshf(v._m23)); }
	__device__ __host__ float4x1 cosh(const float4x1 &v) { return float4x1(coshf(v._m00), coshf(v._m10), coshf(v._m20), coshf(v._m30)); }
	__device__ __host__ float4x2 cosh(const float4x2 &v) { return float4x2(coshf(v._m00), coshf(v._m01), coshf(v._m10), coshf(v._m11), coshf(v._m20), coshf(v._m21), coshf(v._m30), coshf(v._m31)); }
	__device__ __host__ float4x3 cosh(const float4x3 &v) { return float4x3(coshf(v._m00), coshf(v._m01), coshf(v._m02), coshf(v._m10), coshf(v._m11), coshf(v._m12), coshf(v._m20), coshf(v._m21), coshf(v._m22), coshf(v._m30), coshf(v._m31), coshf(v._m32)); }
	__device__ __host__ float4x4 cosh(const float4x4 &v) { return float4x4(coshf(v._m00), coshf(v._m01), coshf(v._m02), coshf(v._m03), coshf(v._m10), coshf(v._m11), coshf(v._m12), coshf(v._m13), coshf(v._m20), coshf(v._m21), coshf(v._m22), coshf(v._m23), coshf(v._m30), coshf(v._m31), coshf(v._m32), coshf(v._m33)); }



	__device__ __host__ float dot(const float_1 &a, const float_1 &b) { return a.x * b.x; }
	__device__ __host__ float dot(const float_2 &a, const float_2 &b) { return a.x * b.x + a.y * b.y; }
	__device__ __host__ float dot(const float_3 &a, const float_3 &b) { return a.x * b.x + a.y * b.y + a.z * b.z; }
	__device__ __host__ float dot(const float_4 &a, const float_4 &b) { return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w; }


	__device__ __host__ float_1 min(const float_1 &a, const float_1 &b) { return float_1(a.x<b.x?a.x:b.x); }
	__device__ __host__ float_2 min(const float_2 &a, const float_2 &b) { return float_2(a.x<b.x?a.x:b.x, a.y<b.y?a.y:b.y); }
	__device__ __host__ float_3 min(const float_3 &a, const float_3 &b) { return float_3(a.x<b.x?a.x:b.x, a.y<b.y?a.y:b.y, a.z<b.z?a.z:b.z); }
	__device__ __host__ float_4 min(const float_4 &a, const float_4 &b) { return float_4(a.x<b.x?a.x:b.x, a.y<b.y?a.y:b.y, a.z<b.z?a.z:b.z, a.w<b.w?a.w:b.w); }

	__device__ __host__ float1x1 min(const float1x1 &a, const float1x1 &b) { return float1x1(a._m00<b._m00?a._m00:b._m00); }
	__device__ __host__ float1x2 min(const float1x2 &a, const float1x2 &b) { return float1x2(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01); }
	__device__ __host__ float1x3 min(const float1x3 &a, const float1x3 &b) { return float1x3(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01, a._m02<b._m02?a._m02:b._m02); }
	__device__ __host__ float1x4 min(const float1x4 &a, const float1x4 &b) { return float1x4(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01, a._m02<b._m02?a._m02:b._m02, a._m03<b._m03?a._m03:b._m03); }
	__device__ __host__ float2x1 min(const float2x1 &a, const float2x1 &b) { return float2x1(a._m00<b._m00?a._m00:b._m00, a._m10<b._m10?a._m10:b._m10); }
	__device__ __host__ float2x2 min(const float2x2 &a, const float2x2 &b) { return float2x2(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01, a._m10<b._m10?a._m10:b._m10, a._m11<b._m11?a._m11:b._m11); }
	__device__ __host__ float2x3 min(const float2x3 &a, const float2x3 &b) { return float2x3(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01, a._m02<b._m02?a._m02:b._m02, a._m10<b._m10?a._m10:b._m10, a._m11<b._m11?a._m11:b._m11, a._m12<b._m12?a._m12:b._m12); }
	__device__ __host__ float2x4 min(const float2x4 &a, const float2x4 &b) { return float2x4(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01, a._m02<b._m02?a._m02:b._m02, a._m03<b._m03?a._m03:b._m03, a._m10<b._m10?a._m10:b._m10, a._m11<b._m11?a._m11:b._m11, a._m12<b._m12?a._m12:b._m12, a._m13<b._m13?a._m13:b._m13); }
	__device__ __host__ float3x1 min(const float3x1 &a, const float3x1 &b) { return float3x1(a._m00<b._m00?a._m00:b._m00, a._m10<b._m10?a._m10:b._m10, a._m20<b._m20?a._m20:b._m20); }
	__device__ __host__ float3x2 min(const float3x2 &a, const float3x2 &b) { return float3x2(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01, a._m10<b._m10?a._m10:b._m10, a._m11<b._m11?a._m11:b._m11, a._m20<b._m20?a._m20:b._m20, a._m21<b._m21?a._m21:b._m21); }
	__device__ __host__ float3x3 min(const float3x3 &a, const float3x3 &b) { return float3x3(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01, a._m02<b._m02?a._m02:b._m02, a._m10<b._m10?a._m10:b._m10, a._m11<b._m11?a._m11:b._m11, a._m12<b._m12?a._m12:b._m12, a._m20<b._m20?a._m20:b._m20, a._m21<b._m21?a._m21:b._m21, a._m22<b._m22?a._m22:b._m22); }
	__device__ __host__ float3x4 min(const float3x4 &a, const float3x4 &b) { return float3x4(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01, a._m02<b._m02?a._m02:b._m02, a._m03<b._m03?a._m03:b._m03, a._m10<b._m10?a._m10:b._m10, a._m11<b._m11?a._m11:b._m11, a._m12<b._m12?a._m12:b._m12, a._m13<b._m13?a._m13:b._m13, a._m20<b._m20?a._m20:b._m20, a._m21<b._m21?a._m21:b._m21, a._m22<b._m22?a._m22:b._m22, a._m23<b._m23?a._m23:b._m23); }
	__device__ __host__ float4x1 min(const float4x1 &a, const float4x1 &b) { return float4x1(a._m00<b._m00?a._m00:b._m00, a._m10<b._m10?a._m10:b._m10, a._m20<b._m20?a._m20:b._m20, a._m30<b._m30?a._m30:b._m30); }
	__device__ __host__ float4x2 min(const float4x2 &a, const float4x2 &b) { return float4x2(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01, a._m10<b._m10?a._m10:b._m10, a._m11<b._m11?a._m11:b._m11, a._m20<b._m20?a._m20:b._m20, a._m21<b._m21?a._m21:b._m21, a._m30<b._m30?a._m30:b._m30, a._m31<b._m31?a._m31:b._m31); }
	__device__ __host__ float4x3 min(const float4x3 &a, const float4x3 &b) { return float4x3(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01, a._m02<b._m02?a._m02:b._m02, a._m10<b._m10?a._m10:b._m10, a._m11<b._m11?a._m11:b._m11, a._m12<b._m12?a._m12:b._m12, a._m20<b._m20?a._m20:b._m20, a._m21<b._m21?a._m21:b._m21, a._m22<b._m22?a._m22:b._m22, a._m30<b._m30?a._m30:b._m30, a._m31<b._m31?a._m31:b._m31, a._m32<b._m32?a._m32:b._m32); }
	__device__ __host__ float4x4 min(const float4x4 &a, const float4x4 &b) { return float4x4(a._m00<b._m00?a._m00:b._m00, a._m01<b._m01?a._m01:b._m01, a._m02<b._m02?a._m02:b._m02, a._m03<b._m03?a._m03:b._m03, a._m10<b._m10?a._m10:b._m10, a._m11<b._m11?a._m11:b._m11, a._m12<b._m12?a._m12:b._m12, a._m13<b._m13?a._m13:b._m13, a._m20<b._m20?a._m20:b._m20, a._m21<b._m21?a._m21:b._m21, a._m22<b._m22?a._m22:b._m22, a._m23<b._m23?a._m23:b._m23, a._m30<b._m30?a._m30:b._m30, a._m31<b._m31?a._m31:b._m31, a._m32<b._m32?a._m32:b._m32, a._m33<b._m33?a._m33:b._m33); }



	__device__ __host__ float_1 max(const float_1 &a, const float_1 &b) { return float_1(a.x>b.x?a.x:b.x); }
	__device__ __host__ float_2 max(const float_2 &a, const float_2 &b) { return float_2(a.x>b.x?a.x:b.x, a.y>b.y?a.y:b.y); }
	__device__ __host__ float_3 max(const float_3 &a, const float_3 &b) { return float_3(a.x>b.x?a.x:b.x, a.y>b.y?a.y:b.y, a.z>b.z?a.z:b.z); }
	__device__ __host__ float_4 max(const float_4 &a, const float_4 &b) { return float_4(a.x>b.x?a.x:b.x, a.y>b.y?a.y:b.y, a.z>b.z?a.z:b.z, a.w>b.w?a.w:b.w); }

	__device__ __host__ float1x1 max(const float1x1 &a, const float1x1 &b) { return float1x1(a._m00>b._m00?a._m00:b._m00); }
	__device__ __host__ float1x2 max(const float1x2 &a, const float1x2 &b) { return float1x2(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01); }
	__device__ __host__ float1x3 max(const float1x3 &a, const float1x3 &b) { return float1x3(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01, a._m02>b._m02?a._m02:b._m02); }
	__device__ __host__ float1x4 max(const float1x4 &a, const float1x4 &b) { return float1x4(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01, a._m02>b._m02?a._m02:b._m02, a._m03>b._m03?a._m03:b._m03); }
	__device__ __host__ float2x1 max(const float2x1 &a, const float2x1 &b) { return float2x1(a._m00>b._m00?a._m00:b._m00, a._m10>b._m10?a._m10:b._m10); }
	__device__ __host__ float2x2 max(const float2x2 &a, const float2x2 &b) { return float2x2(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01, a._m10>b._m10?a._m10:b._m10, a._m11>b._m11?a._m11:b._m11); }
	__device__ __host__ float2x3 max(const float2x3 &a, const float2x3 &b) { return float2x3(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01, a._m02>b._m02?a._m02:b._m02, a._m10>b._m10?a._m10:b._m10, a._m11>b._m11?a._m11:b._m11, a._m12>b._m12?a._m12:b._m12); }
	__device__ __host__ float2x4 max(const float2x4 &a, const float2x4 &b) { return float2x4(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01, a._m02>b._m02?a._m02:b._m02, a._m03>b._m03?a._m03:b._m03, a._m10>b._m10?a._m10:b._m10, a._m11>b._m11?a._m11:b._m11, a._m12>b._m12?a._m12:b._m12, a._m13>b._m13?a._m13:b._m13); }
	__device__ __host__ float3x1 max(const float3x1 &a, const float3x1 &b) { return float3x1(a._m00>b._m00?a._m00:b._m00, a._m10>b._m10?a._m10:b._m10, a._m20>b._m20?a._m20:b._m20); }
	__device__ __host__ float3x2 max(const float3x2 &a, const float3x2 &b) { return float3x2(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01, a._m10>b._m10?a._m10:b._m10, a._m11>b._m11?a._m11:b._m11, a._m20>b._m20?a._m20:b._m20, a._m21>b._m21?a._m21:b._m21); }
	__device__ __host__ float3x3 max(const float3x3 &a, const float3x3 &b) { return float3x3(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01, a._m02>b._m02?a._m02:b._m02, a._m10>b._m10?a._m10:b._m10, a._m11>b._m11?a._m11:b._m11, a._m12>b._m12?a._m12:b._m12, a._m20>b._m20?a._m20:b._m20, a._m21>b._m21?a._m21:b._m21, a._m22>b._m22?a._m22:b._m22); }
	__device__ __host__ float3x4 max(const float3x4 &a, const float3x4 &b) { return float3x4(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01, a._m02>b._m02?a._m02:b._m02, a._m03>b._m03?a._m03:b._m03, a._m10>b._m10?a._m10:b._m10, a._m11>b._m11?a._m11:b._m11, a._m12>b._m12?a._m12:b._m12, a._m13>b._m13?a._m13:b._m13, a._m20>b._m20?a._m20:b._m20, a._m21>b._m21?a._m21:b._m21, a._m22>b._m22?a._m22:b._m22, a._m23>b._m23?a._m23:b._m23); }
	__device__ __host__ float4x1 max(const float4x1 &a, const float4x1 &b) { return float4x1(a._m00>b._m00?a._m00:b._m00, a._m10>b._m10?a._m10:b._m10, a._m20>b._m20?a._m20:b._m20, a._m30>b._m30?a._m30:b._m30); }
	__device__ __host__ float4x2 max(const float4x2 &a, const float4x2 &b) { return float4x2(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01, a._m10>b._m10?a._m10:b._m10, a._m11>b._m11?a._m11:b._m11, a._m20>b._m20?a._m20:b._m20, a._m21>b._m21?a._m21:b._m21, a._m30>b._m30?a._m30:b._m30, a._m31>b._m31?a._m31:b._m31); }
	__device__ __host__ float4x3 max(const float4x3 &a, const float4x3 &b) { return float4x3(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01, a._m02>b._m02?a._m02:b._m02, a._m10>b._m10?a._m10:b._m10, a._m11>b._m11?a._m11:b._m11, a._m12>b._m12?a._m12:b._m12, a._m20>b._m20?a._m20:b._m20, a._m21>b._m21?a._m21:b._m21, a._m22>b._m22?a._m22:b._m22, a._m30>b._m30?a._m30:b._m30, a._m31>b._m31?a._m31:b._m31, a._m32>b._m32?a._m32:b._m32); }
	__device__ __host__ float4x4 max(const float4x4 &a, const float4x4 &b) { return float4x4(a._m00>b._m00?a._m00:b._m00, a._m01>b._m01?a._m01:b._m01, a._m02>b._m02?a._m02:b._m02, a._m03>b._m03?a._m03:b._m03, a._m10>b._m10?a._m10:b._m10, a._m11>b._m11?a._m11:b._m11, a._m12>b._m12?a._m12:b._m12, a._m13>b._m13?a._m13:b._m13, a._m20>b._m20?a._m20:b._m20, a._m21>b._m21?a._m21:b._m21, a._m22>b._m22?a._m22:b._m22, a._m23>b._m23?a._m23:b._m23, a._m30>b._m30?a._m30:b._m30, a._m31>b._m31?a._m31:b._m31, a._m32>b._m32?a._m32:b._m32, a._m33>b._m33?a._m33:b._m33); }



	__device__ __host__ float degrees(const float &v) { return (v*180.0/PI); }

	__device__ __host__ float_1 degrees(const float_1 &v) { return float_1((v.x*180.0/PI)); }
	__device__ __host__ float_2 degrees(const float_2 &v) { return float_2((v.x*180.0/PI), (v.y*180.0/PI)); }
	__device__ __host__ float_3 degrees(const float_3 &v) { return float_3((v.x*180.0/PI), (v.y*180.0/PI), (v.z*180.0/PI)); }
	__device__ __host__ float_4 degrees(const float_4 &v) { return float_4((v.x*180.0/PI), (v.y*180.0/PI), (v.z*180.0/PI), (v.w*180.0/PI)); }

	__device__ __host__ float1x1 degrees(const float1x1 &v) { return float1x1((v._m00*180.0/PI)); }
	__device__ __host__ float1x2 degrees(const float1x2 &v) { return float1x2((v._m00*180.0/PI), (v._m01*180.0/PI)); }
	__device__ __host__ float1x3 degrees(const float1x3 &v) { return float1x3((v._m00*180.0/PI), (v._m01*180.0/PI), (v._m02*180.0/PI)); }
	__device__ __host__ float1x4 degrees(const float1x4 &v) { return float1x4((v._m00*180.0/PI), (v._m01*180.0/PI), (v._m02*180.0/PI), (v._m03*180.0/PI)); }
	__device__ __host__ float2x1 degrees(const float2x1 &v) { return float2x1((v._m00*180.0/PI), (v._m10*180.0/PI)); }
	__device__ __host__ float2x2 degrees(const float2x2 &v) { return float2x2((v._m00*180.0/PI), (v._m01*180.0/PI), (v._m10*180.0/PI), (v._m11*180.0/PI)); }
	__device__ __host__ float2x3 degrees(const float2x3 &v) { return float2x3((v._m00*180.0/PI), (v._m01*180.0/PI), (v._m02*180.0/PI), (v._m10*180.0/PI), (v._m11*180.0/PI), (v._m12*180.0/PI)); }
	__device__ __host__ float2x4 degrees(const float2x4 &v) { return float2x4((v._m00*180.0/PI), (v._m01*180.0/PI), (v._m02*180.0/PI), (v._m03*180.0/PI), (v._m10*180.0/PI), (v._m11*180.0/PI), (v._m12*180.0/PI), (v._m13*180.0/PI)); }
	__device__ __host__ float3x1 degrees(const float3x1 &v) { return float3x1((v._m00*180.0/PI), (v._m10*180.0/PI), (v._m20*180.0/PI)); }
	__device__ __host__ float3x2 degrees(const float3x2 &v) { return float3x2((v._m00*180.0/PI), (v._m01*180.0/PI), (v._m10*180.0/PI), (v._m11*180.0/PI), (v._m20*180.0/PI), (v._m21*180.0/PI)); }
	__device__ __host__ float3x3 degrees(const float3x3 &v) { return float3x3((v._m00*180.0/PI), (v._m01*180.0/PI), (v._m02*180.0/PI), (v._m10*180.0/PI), (v._m11*180.0/PI), (v._m12*180.0/PI), (v._m20*180.0/PI), (v._m21*180.0/PI), (v._m22*180.0/PI)); }
	__device__ __host__ float3x4 degrees(const float3x4 &v) { return float3x4((v._m00*180.0/PI), (v._m01*180.0/PI), (v._m02*180.0/PI), (v._m03*180.0/PI), (v._m10*180.0/PI), (v._m11*180.0/PI), (v._m12*180.0/PI), (v._m13*180.0/PI), (v._m20*180.0/PI), (v._m21*180.0/PI), (v._m22*180.0/PI), (v._m23*180.0/PI)); }
	__device__ __host__ float4x1 degrees(const float4x1 &v) { return float4x1((v._m00*180.0/PI), (v._m10*180.0/PI), (v._m20*180.0/PI), (v._m30*180.0/PI)); }
	__device__ __host__ float4x2 degrees(const float4x2 &v) { return float4x2((v._m00*180.0/PI), (v._m01*180.0/PI), (v._m10*180.0/PI), (v._m11*180.0/PI), (v._m20*180.0/PI), (v._m21*180.0/PI), (v._m30*180.0/PI), (v._m31*180.0/PI)); }
	__device__ __host__ float4x3 degrees(const float4x3 &v) { return float4x3((v._m00*180.0/PI), (v._m01*180.0/PI), (v._m02*180.0/PI), (v._m10*180.0/PI), (v._m11*180.0/PI), (v._m12*180.0/PI), (v._m20*180.0/PI), (v._m21*180.0/PI), (v._m22*180.0/PI), (v._m30*180.0/PI), (v._m31*180.0/PI), (v._m32*180.0/PI)); }
	__device__ __host__ float4x4 degrees(const float4x4 &v) { return float4x4((v._m00*180.0/PI), (v._m01*180.0/PI), (v._m02*180.0/PI), (v._m03*180.0/PI), (v._m10*180.0/PI), (v._m11*180.0/PI), (v._m12*180.0/PI), (v._m13*180.0/PI), (v._m20*180.0/PI), (v._m21*180.0/PI), (v._m22*180.0/PI), (v._m23*180.0/PI), (v._m30*180.0/PI), (v._m31*180.0/PI), (v._m32*180.0/PI), (v._m33*180.0/PI)); }



	__device__ __host__ float length(const float_1 &v) { return sqrtf(dot(v, v)); }
	__device__ __host__ float length(const float_2 &v) { return sqrtf(dot(v, v)); }
	__device__ __host__ float length(const float_3 &v) { return sqrtf(dot(v, v)); }
	__device__ __host__ float length(const float_4 &v) { return sqrtf(dot(v, v)); }


	__device__ __host__ float sqrlength(const float_1 &v) { return dot(v, v); }
	__device__ __host__ float sqrlength(const float_2 &v) { return dot(v, v); }
	__device__ __host__ float sqrlength(const float_3 &v) { return dot(v, v); }
	__device__ __host__ float sqrlength(const float_4 &v) { return dot(v, v); }


	__device__ __host__ float distance(const float_1 &a, const float_1 &b) { return length(a - b); }
	__device__ __host__ float distance(const float_2 &a, const float_2 &b) { return length(a - b); }
	__device__ __host__ float distance(const float_3 &a, const float_3 &b) { return length(a - b); }
	__device__ __host__ float distance(const float_4 &a, const float_4 &b) { return length(a - b); }


	__device__ __host__ float sqrdistance(const float_1 &a, const float_1 &b) { return sqrlength(a - b); }
	__device__ __host__ float sqrdistance(const float_2 &a, const float_2 &b) { return sqrlength(a - b); }
	__device__ __host__ float sqrdistance(const float_3 &a, const float_3 &b) { return sqrlength(a - b); }
	__device__ __host__ float sqrdistance(const float_4 &a, const float_4 &b) { return sqrlength(a - b); }


	__device__ __host__ float_1 exp(const float_1 &v) { return float_1(expf(v.x)); }
	__device__ __host__ float_2 exp(const float_2 &v) { return float_2(expf(v.x), expf(v.y)); }
	__device__ __host__ float_3 exp(const float_3 &v) { return float_3(expf(v.x), expf(v.y), expf(v.z)); }
	__device__ __host__ float_4 exp(const float_4 &v) { return float_4(expf(v.x), expf(v.y), expf(v.z), expf(v.w)); }

	__device__ __host__ float1x1 exp(const float1x1 &v) { return float1x1(expf(v._m00)); }
	__device__ __host__ float1x2 exp(const float1x2 &v) { return float1x2(expf(v._m00), expf(v._m01)); }
	__device__ __host__ float1x3 exp(const float1x3 &v) { return float1x3(expf(v._m00), expf(v._m01), expf(v._m02)); }
	__device__ __host__ float1x4 exp(const float1x4 &v) { return float1x4(expf(v._m00), expf(v._m01), expf(v._m02), expf(v._m03)); }
	__device__ __host__ float2x1 exp(const float2x1 &v) { return float2x1(expf(v._m00), expf(v._m10)); }
	__device__ __host__ float2x2 exp(const float2x2 &v) { return float2x2(expf(v._m00), expf(v._m01), expf(v._m10), expf(v._m11)); }
	__device__ __host__ float2x3 exp(const float2x3 &v) { return float2x3(expf(v._m00), expf(v._m01), expf(v._m02), expf(v._m10), expf(v._m11), expf(v._m12)); }
	__device__ __host__ float2x4 exp(const float2x4 &v) { return float2x4(expf(v._m00), expf(v._m01), expf(v._m02), expf(v._m03), expf(v._m10), expf(v._m11), expf(v._m12), expf(v._m13)); }
	__device__ __host__ float3x1 exp(const float3x1 &v) { return float3x1(expf(v._m00), expf(v._m10), expf(v._m20)); }
	__device__ __host__ float3x2 exp(const float3x2 &v) { return float3x2(expf(v._m00), expf(v._m01), expf(v._m10), expf(v._m11), expf(v._m20), expf(v._m21)); }
	__device__ __host__ float3x3 exp(const float3x3 &v) { return float3x3(expf(v._m00), expf(v._m01), expf(v._m02), expf(v._m10), expf(v._m11), expf(v._m12), expf(v._m20), expf(v._m21), expf(v._m22)); }
	__device__ __host__ float3x4 exp(const float3x4 &v) { return float3x4(expf(v._m00), expf(v._m01), expf(v._m02), expf(v._m03), expf(v._m10), expf(v._m11), expf(v._m12), expf(v._m13), expf(v._m20), expf(v._m21), expf(v._m22), expf(v._m23)); }
	__device__ __host__ float4x1 exp(const float4x1 &v) { return float4x1(expf(v._m00), expf(v._m10), expf(v._m20), expf(v._m30)); }
	__device__ __host__ float4x2 exp(const float4x2 &v) { return float4x2(expf(v._m00), expf(v._m01), expf(v._m10), expf(v._m11), expf(v._m20), expf(v._m21), expf(v._m30), expf(v._m31)); }
	__device__ __host__ float4x3 exp(const float4x3 &v) { return float4x3(expf(v._m00), expf(v._m01), expf(v._m02), expf(v._m10), expf(v._m11), expf(v._m12), expf(v._m20), expf(v._m21), expf(v._m22), expf(v._m30), expf(v._m31), expf(v._m32)); }
	__device__ __host__ float4x4 exp(const float4x4 &v) { return float4x4(expf(v._m00), expf(v._m01), expf(v._m02), expf(v._m03), expf(v._m10), expf(v._m11), expf(v._m12), expf(v._m13), expf(v._m20), expf(v._m21), expf(v._m22), expf(v._m23), expf(v._m30), expf(v._m31), expf(v._m32), expf(v._m33)); }



	__device__ __host__ float_1 exp2(const float_1 &v) { return float_1(exp2f(v.x)); }
	__device__ __host__ float_2 exp2(const float_2 &v) { return float_2(exp2f(v.x), exp2f(v.y)); }
	__device__ __host__ float_3 exp2(const float_3 &v) { return float_3(exp2f(v.x), exp2f(v.y), exp2f(v.z)); }
	__device__ __host__ float_4 exp2(const float_4 &v) { return float_4(exp2f(v.x), exp2f(v.y), exp2f(v.z), exp2f(v.w)); }

	__device__ __host__ float1x1 exp2(const float1x1 &v) { return float1x1(exp2f(v._m00)); }
	__device__ __host__ float1x2 exp2(const float1x2 &v) { return float1x2(exp2f(v._m00), exp2f(v._m01)); }
	__device__ __host__ float1x3 exp2(const float1x3 &v) { return float1x3(exp2f(v._m00), exp2f(v._m01), exp2f(v._m02)); }
	__device__ __host__ float1x4 exp2(const float1x4 &v) { return float1x4(exp2f(v._m00), exp2f(v._m01), exp2f(v._m02), exp2f(v._m03)); }
	__device__ __host__ float2x1 exp2(const float2x1 &v) { return float2x1(exp2f(v._m00), exp2f(v._m10)); }
	__device__ __host__ float2x2 exp2(const float2x2 &v) { return float2x2(exp2f(v._m00), exp2f(v._m01), exp2f(v._m10), exp2f(v._m11)); }
	__device__ __host__ float2x3 exp2(const float2x3 &v) { return float2x3(exp2f(v._m00), exp2f(v._m01), exp2f(v._m02), exp2f(v._m10), exp2f(v._m11), exp2f(v._m12)); }
	__device__ __host__ float2x4 exp2(const float2x4 &v) { return float2x4(exp2f(v._m00), exp2f(v._m01), exp2f(v._m02), exp2f(v._m03), exp2f(v._m10), exp2f(v._m11), exp2f(v._m12), exp2f(v._m13)); }
	__device__ __host__ float3x1 exp2(const float3x1 &v) { return float3x1(exp2f(v._m00), exp2f(v._m10), exp2f(v._m20)); }
	__device__ __host__ float3x2 exp2(const float3x2 &v) { return float3x2(exp2f(v._m00), exp2f(v._m01), exp2f(v._m10), exp2f(v._m11), exp2f(v._m20), exp2f(v._m21)); }
	__device__ __host__ float3x3 exp2(const float3x3 &v) { return float3x3(exp2f(v._m00), exp2f(v._m01), exp2f(v._m02), exp2f(v._m10), exp2f(v._m11), exp2f(v._m12), exp2f(v._m20), exp2f(v._m21), exp2f(v._m22)); }
	__device__ __host__ float3x4 exp2(const float3x4 &v) { return float3x4(exp2f(v._m00), exp2f(v._m01), exp2f(v._m02), exp2f(v._m03), exp2f(v._m10), exp2f(v._m11), exp2f(v._m12), exp2f(v._m13), exp2f(v._m20), exp2f(v._m21), exp2f(v._m22), exp2f(v._m23)); }
	__device__ __host__ float4x1 exp2(const float4x1 &v) { return float4x1(exp2f(v._m00), exp2f(v._m10), exp2f(v._m20), exp2f(v._m30)); }
	__device__ __host__ float4x2 exp2(const float4x2 &v) { return float4x2(exp2f(v._m00), exp2f(v._m01), exp2f(v._m10), exp2f(v._m11), exp2f(v._m20), exp2f(v._m21), exp2f(v._m30), exp2f(v._m31)); }
	__device__ __host__ float4x3 exp2(const float4x3 &v) { return float4x3(exp2f(v._m00), exp2f(v._m01), exp2f(v._m02), exp2f(v._m10), exp2f(v._m11), exp2f(v._m12), exp2f(v._m20), exp2f(v._m21), exp2f(v._m22), exp2f(v._m30), exp2f(v._m31), exp2f(v._m32)); }
	__device__ __host__ float4x4 exp2(const float4x4 &v) { return float4x4(exp2f(v._m00), exp2f(v._m01), exp2f(v._m02), exp2f(v._m03), exp2f(v._m10), exp2f(v._m11), exp2f(v._m12), exp2f(v._m13), exp2f(v._m20), exp2f(v._m21), exp2f(v._m22), exp2f(v._m23), exp2f(v._m30), exp2f(v._m31), exp2f(v._m32), exp2f(v._m33)); }



	__device__ __host__ float floor(const float &v) { return floorf(v); }

	__device__ __host__ float_1 floor(const float_1 &v) { return float_1(floorf(v.x)); }
	__device__ __host__ float_2 floor(const float_2 &v) { return float_2(floorf(v.x), floorf(v.y)); }
	__device__ __host__ float_3 floor(const float_3 &v) { return float_3(floorf(v.x), floorf(v.y), floorf(v.z)); }
	__device__ __host__ float_4 floor(const float_4 &v) { return float_4(floorf(v.x), floorf(v.y), floorf(v.z), floorf(v.w)); }

	__device__ __host__ float1x1 floor(const float1x1 &v) { return float1x1(floorf(v._m00)); }
	__device__ __host__ float1x2 floor(const float1x2 &v) { return float1x2(floorf(v._m00), floorf(v._m01)); }
	__device__ __host__ float1x3 floor(const float1x3 &v) { return float1x3(floorf(v._m00), floorf(v._m01), floorf(v._m02)); }
	__device__ __host__ float1x4 floor(const float1x4 &v) { return float1x4(floorf(v._m00), floorf(v._m01), floorf(v._m02), floorf(v._m03)); }
	__device__ __host__ float2x1 floor(const float2x1 &v) { return float2x1(floorf(v._m00), floorf(v._m10)); }
	__device__ __host__ float2x2 floor(const float2x2 &v) { return float2x2(floorf(v._m00), floorf(v._m01), floorf(v._m10), floorf(v._m11)); }
	__device__ __host__ float2x3 floor(const float2x3 &v) { return float2x3(floorf(v._m00), floorf(v._m01), floorf(v._m02), floorf(v._m10), floorf(v._m11), floorf(v._m12)); }
	__device__ __host__ float2x4 floor(const float2x4 &v) { return float2x4(floorf(v._m00), floorf(v._m01), floorf(v._m02), floorf(v._m03), floorf(v._m10), floorf(v._m11), floorf(v._m12), floorf(v._m13)); }
	__device__ __host__ float3x1 floor(const float3x1 &v) { return float3x1(floorf(v._m00), floorf(v._m10), floorf(v._m20)); }
	__device__ __host__ float3x2 floor(const float3x2 &v) { return float3x2(floorf(v._m00), floorf(v._m01), floorf(v._m10), floorf(v._m11), floorf(v._m20), floorf(v._m21)); }
	__device__ __host__ float3x3 floor(const float3x3 &v) { return float3x3(floorf(v._m00), floorf(v._m01), floorf(v._m02), floorf(v._m10), floorf(v._m11), floorf(v._m12), floorf(v._m20), floorf(v._m21), floorf(v._m22)); }
	__device__ __host__ float3x4 floor(const float3x4 &v) { return float3x4(floorf(v._m00), floorf(v._m01), floorf(v._m02), floorf(v._m03), floorf(v._m10), floorf(v._m11), floorf(v._m12), floorf(v._m13), floorf(v._m20), floorf(v._m21), floorf(v._m22), floorf(v._m23)); }
	__device__ __host__ float4x1 floor(const float4x1 &v) { return float4x1(floorf(v._m00), floorf(v._m10), floorf(v._m20), floorf(v._m30)); }
	__device__ __host__ float4x2 floor(const float4x2 &v) { return float4x2(floorf(v._m00), floorf(v._m01), floorf(v._m10), floorf(v._m11), floorf(v._m20), floorf(v._m21), floorf(v._m30), floorf(v._m31)); }
	__device__ __host__ float4x3 floor(const float4x3 &v) { return float4x3(floorf(v._m00), floorf(v._m01), floorf(v._m02), floorf(v._m10), floorf(v._m11), floorf(v._m12), floorf(v._m20), floorf(v._m21), floorf(v._m22), floorf(v._m30), floorf(v._m31), floorf(v._m32)); }
	__device__ __host__ float4x4 floor(const float4x4 &v) { return float4x4(floorf(v._m00), floorf(v._m01), floorf(v._m02), floorf(v._m03), floorf(v._m10), floorf(v._m11), floorf(v._m12), floorf(v._m13), floorf(v._m20), floorf(v._m21), floorf(v._m22), floorf(v._m23), floorf(v._m30), floorf(v._m31), floorf(v._m32), floorf(v._m33)); }



	__device__ __host__ float frac(const float &v) { return fmodf(v, 1.0); }

	__device__ __host__ float_1 frac(const float_1 &v) { return float_1(fmodf(v.x, 1.0)); }
	__device__ __host__ float_2 frac(const float_2 &v) { return float_2(fmodf(v.x, 1.0), fmodf(v.y, 1.0)); }
	__device__ __host__ float_3 frac(const float_3 &v) { return float_3(fmodf(v.x, 1.0), fmodf(v.y, 1.0), fmodf(v.z, 1.0)); }
	__device__ __host__ float_4 frac(const float_4 &v) { return float_4(fmodf(v.x, 1.0), fmodf(v.y, 1.0), fmodf(v.z, 1.0), fmodf(v.w, 1.0)); }

	__device__ __host__ float1x1 frac(const float1x1 &v) { return float1x1(fmodf(v._m00, 1.0)); }
	__device__ __host__ float1x2 frac(const float1x2 &v) { return float1x2(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0)); }
	__device__ __host__ float1x3 frac(const float1x3 &v) { return float1x3(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0), fmodf(v._m02, 1.0)); }
	__device__ __host__ float1x4 frac(const float1x4 &v) { return float1x4(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0), fmodf(v._m02, 1.0), fmodf(v._m03, 1.0)); }
	__device__ __host__ float2x1 frac(const float2x1 &v) { return float2x1(fmodf(v._m00, 1.0), fmodf(v._m10, 1.0)); }
	__device__ __host__ float2x2 frac(const float2x2 &v) { return float2x2(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0), fmodf(v._m10, 1.0), fmodf(v._m11, 1.0)); }
	__device__ __host__ float2x3 frac(const float2x3 &v) { return float2x3(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0), fmodf(v._m02, 1.0), fmodf(v._m10, 1.0), fmodf(v._m11, 1.0), fmodf(v._m12, 1.0)); }
	__device__ __host__ float2x4 frac(const float2x4 &v) { return float2x4(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0), fmodf(v._m02, 1.0), fmodf(v._m03, 1.0), fmodf(v._m10, 1.0), fmodf(v._m11, 1.0), fmodf(v._m12, 1.0), fmodf(v._m13, 1.0)); }
	__device__ __host__ float3x1 frac(const float3x1 &v) { return float3x1(fmodf(v._m00, 1.0), fmodf(v._m10, 1.0), fmodf(v._m20, 1.0)); }
	__device__ __host__ float3x2 frac(const float3x2 &v) { return float3x2(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0), fmodf(v._m10, 1.0), fmodf(v._m11, 1.0), fmodf(v._m20, 1.0), fmodf(v._m21, 1.0)); }
	__device__ __host__ float3x3 frac(const float3x3 &v) { return float3x3(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0), fmodf(v._m02, 1.0), fmodf(v._m10, 1.0), fmodf(v._m11, 1.0), fmodf(v._m12, 1.0), fmodf(v._m20, 1.0), fmodf(v._m21, 1.0), fmodf(v._m22, 1.0)); }
	__device__ __host__ float3x4 frac(const float3x4 &v) { return float3x4(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0), fmodf(v._m02, 1.0), fmodf(v._m03, 1.0), fmodf(v._m10, 1.0), fmodf(v._m11, 1.0), fmodf(v._m12, 1.0), fmodf(v._m13, 1.0), fmodf(v._m20, 1.0), fmodf(v._m21, 1.0), fmodf(v._m22, 1.0), fmodf(v._m23, 1.0)); }
	__device__ __host__ float4x1 frac(const float4x1 &v) { return float4x1(fmodf(v._m00, 1.0), fmodf(v._m10, 1.0), fmodf(v._m20, 1.0), fmodf(v._m30, 1.0)); }
	__device__ __host__ float4x2 frac(const float4x2 &v) { return float4x2(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0), fmodf(v._m10, 1.0), fmodf(v._m11, 1.0), fmodf(v._m20, 1.0), fmodf(v._m21, 1.0), fmodf(v._m30, 1.0), fmodf(v._m31, 1.0)); }
	__device__ __host__ float4x3 frac(const float4x3 &v) { return float4x3(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0), fmodf(v._m02, 1.0), fmodf(v._m10, 1.0), fmodf(v._m11, 1.0), fmodf(v._m12, 1.0), fmodf(v._m20, 1.0), fmodf(v._m21, 1.0), fmodf(v._m22, 1.0), fmodf(v._m30, 1.0), fmodf(v._m31, 1.0), fmodf(v._m32, 1.0)); }
	__device__ __host__ float4x4 frac(const float4x4 &v) { return float4x4(fmodf(v._m00, 1.0), fmodf(v._m01, 1.0), fmodf(v._m02, 1.0), fmodf(v._m03, 1.0), fmodf(v._m10, 1.0), fmodf(v._m11, 1.0), fmodf(v._m12, 1.0), fmodf(v._m13, 1.0), fmodf(v._m20, 1.0), fmodf(v._m21, 1.0), fmodf(v._m22, 1.0), fmodf(v._m23, 1.0), fmodf(v._m30, 1.0), fmodf(v._m31, 1.0), fmodf(v._m32, 1.0), fmodf(v._m33, 1.0)); }



	__device__ __host__ float ldexp(const float &a, const float &b) { return a * exp2(b); }
	__device__ __host__ float_1 ldexp(const float_1 &a, const float_1 &b) { return a * exp2(b); }
	__device__ __host__ float_2 ldexp(const float_2 &a, const float_2 &b) { return a * exp2(b); }
	__device__ __host__ float_3 ldexp(const float_3 &a, const float_3 &b) { return a * exp2(b); }
	__device__ __host__ float_4 ldexp(const float_4 &a, const float_4 &b) { return a * exp2(b); }
	__device__ __host__ float1x1 ldexp(const float1x1 &a, const float1x1 &b) { return a * exp2(b); }
	__device__ __host__ float1x2 ldexp(const float1x2 &a, const float1x2 &b) { return a * exp2(b); }
	__device__ __host__ float1x3 ldexp(const float1x3 &a, const float1x3 &b) { return a * exp2(b); }
	__device__ __host__ float1x4 ldexp(const float1x4 &a, const float1x4 &b) { return a * exp2(b); }
	__device__ __host__ float2x1 ldexp(const float2x1 &a, const float2x1 &b) { return a * exp2(b); }
	__device__ __host__ float2x2 ldexp(const float2x2 &a, const float2x2 &b) { return a * exp2(b); }
	__device__ __host__ float2x3 ldexp(const float2x3 &a, const float2x3 &b) { return a * exp2(b); }
	__device__ __host__ float2x4 ldexp(const float2x4 &a, const float2x4 &b) { return a * exp2(b); }
	__device__ __host__ float3x1 ldexp(const float3x1 &a, const float3x1 &b) { return a * exp2(b); }
	__device__ __host__ float3x2 ldexp(const float3x2 &a, const float3x2 &b) { return a * exp2(b); }
	__device__ __host__ float3x3 ldexp(const float3x3 &a, const float3x3 &b) { return a * exp2(b); }
	__device__ __host__ float3x4 ldexp(const float3x4 &a, const float3x4 &b) { return a * exp2(b); }
	__device__ __host__ float4x1 ldexp(const float4x1 &a, const float4x1 &b) { return a * exp2(b); }
	__device__ __host__ float4x2 ldexp(const float4x2 &a, const float4x2 &b) { return a * exp2(b); }
	__device__ __host__ float4x3 ldexp(const float4x3 &a, const float4x3 &b) { return a * exp2(b); }
	__device__ __host__ float4x4 ldexp(const float4x4 &a, const float4x4 &b) { return a * exp2(b); }


	__device__ __host__ float lerp(const float &a, const float &b, const float &c) { return a + c*(b - a); }
	__device__ __host__ float_1 lerp(const float_1 &a, const float_1 &b, const float_1 &c) { return a + c*(b - a); }
	__device__ __host__ float_2 lerp(const float_2 &a, const float_2 &b, const float_2 &c) { return a + c*(b - a); }
	__device__ __host__ float_3 lerp(const float_3 &a, const float_3 &b, const float_3 &c) { return a + c*(b - a); }
	__device__ __host__ float_4 lerp(const float_4 &a, const float_4 &b, const float_4 &c) { return a + c*(b - a); }
	__device__ __host__ float1x1 lerp(const float1x1 &a, const float1x1 &b, const float1x1 &c) { return a + c*(b - a); }
	__device__ __host__ float1x2 lerp(const float1x2 &a, const float1x2 &b, const float1x2 &c) { return a + c*(b - a); }
	__device__ __host__ float1x3 lerp(const float1x3 &a, const float1x3 &b, const float1x3 &c) { return a + c*(b - a); }
	__device__ __host__ float1x4 lerp(const float1x4 &a, const float1x4 &b, const float1x4 &c) { return a + c*(b - a); }
	__device__ __host__ float2x1 lerp(const float2x1 &a, const float2x1 &b, const float2x1 &c) { return a + c*(b - a); }
	__device__ __host__ float2x2 lerp(const float2x2 &a, const float2x2 &b, const float2x2 &c) { return a + c*(b - a); }
	__device__ __host__ float2x3 lerp(const float2x3 &a, const float2x3 &b, const float2x3 &c) { return a + c*(b - a); }
	__device__ __host__ float2x4 lerp(const float2x4 &a, const float2x4 &b, const float2x4 &c) { return a + c*(b - a); }
	__device__ __host__ float3x1 lerp(const float3x1 &a, const float3x1 &b, const float3x1 &c) { return a + c*(b - a); }
	__device__ __host__ float3x2 lerp(const float3x2 &a, const float3x2 &b, const float3x2 &c) { return a + c*(b - a); }
	__device__ __host__ float3x3 lerp(const float3x3 &a, const float3x3 &b, const float3x3 &c) { return a + c*(b - a); }
	__device__ __host__ float3x4 lerp(const float3x4 &a, const float3x4 &b, const float3x4 &c) { return a + c*(b - a); }
	__device__ __host__ float4x1 lerp(const float4x1 &a, const float4x1 &b, const float4x1 &c) { return a + c*(b - a); }
	__device__ __host__ float4x2 lerp(const float4x2 &a, const float4x2 &b, const float4x2 &c) { return a + c*(b - a); }
	__device__ __host__ float4x3 lerp(const float4x3 &a, const float4x3 &b, const float4x3 &c) { return a + c*(b - a); }
	__device__ __host__ float4x4 lerp(const float4x4 &a, const float4x4 &b, const float4x4 &c) { return a + c*(b - a); }


	__device__ __host__ float log(const float &v) { return logf(v); }

	__device__ __host__ float_1 log(const float_1 &v) { return float_1(logf(v.x)); }
	__device__ __host__ float_2 log(const float_2 &v) { return float_2(logf(v.x), logf(v.y)); }
	__device__ __host__ float_3 log(const float_3 &v) { return float_3(logf(v.x), logf(v.y), logf(v.z)); }
	__device__ __host__ float_4 log(const float_4 &v) { return float_4(logf(v.x), logf(v.y), logf(v.z), logf(v.w)); }

	__device__ __host__ float1x1 log(const float1x1 &v) { return float1x1(logf(v._m00)); }
	__device__ __host__ float1x2 log(const float1x2 &v) { return float1x2(logf(v._m00), logf(v._m01)); }
	__device__ __host__ float1x3 log(const float1x3 &v) { return float1x3(logf(v._m00), logf(v._m01), logf(v._m02)); }
	__device__ __host__ float1x4 log(const float1x4 &v) { return float1x4(logf(v._m00), logf(v._m01), logf(v._m02), logf(v._m03)); }
	__device__ __host__ float2x1 log(const float2x1 &v) { return float2x1(logf(v._m00), logf(v._m10)); }
	__device__ __host__ float2x2 log(const float2x2 &v) { return float2x2(logf(v._m00), logf(v._m01), logf(v._m10), logf(v._m11)); }
	__device__ __host__ float2x3 log(const float2x3 &v) { return float2x3(logf(v._m00), logf(v._m01), logf(v._m02), logf(v._m10), logf(v._m11), logf(v._m12)); }
	__device__ __host__ float2x4 log(const float2x4 &v) { return float2x4(logf(v._m00), logf(v._m01), logf(v._m02), logf(v._m03), logf(v._m10), logf(v._m11), logf(v._m12), logf(v._m13)); }
	__device__ __host__ float3x1 log(const float3x1 &v) { return float3x1(logf(v._m00), logf(v._m10), logf(v._m20)); }
	__device__ __host__ float3x2 log(const float3x2 &v) { return float3x2(logf(v._m00), logf(v._m01), logf(v._m10), logf(v._m11), logf(v._m20), logf(v._m21)); }
	__device__ __host__ float3x3 log(const float3x3 &v) { return float3x3(logf(v._m00), logf(v._m01), logf(v._m02), logf(v._m10), logf(v._m11), logf(v._m12), logf(v._m20), logf(v._m21), logf(v._m22)); }
	__device__ __host__ float3x4 log(const float3x4 &v) { return float3x4(logf(v._m00), logf(v._m01), logf(v._m02), logf(v._m03), logf(v._m10), logf(v._m11), logf(v._m12), logf(v._m13), logf(v._m20), logf(v._m21), logf(v._m22), logf(v._m23)); }
	__device__ __host__ float4x1 log(const float4x1 &v) { return float4x1(logf(v._m00), logf(v._m10), logf(v._m20), logf(v._m30)); }
	__device__ __host__ float4x2 log(const float4x2 &v) { return float4x2(logf(v._m00), logf(v._m01), logf(v._m10), logf(v._m11), logf(v._m20), logf(v._m21), logf(v._m30), logf(v._m31)); }
	__device__ __host__ float4x3 log(const float4x3 &v) { return float4x3(logf(v._m00), logf(v._m01), logf(v._m02), logf(v._m10), logf(v._m11), logf(v._m12), logf(v._m20), logf(v._m21), logf(v._m22), logf(v._m30), logf(v._m31), logf(v._m32)); }
	__device__ __host__ float4x4 log(const float4x4 &v) { return float4x4(logf(v._m00), logf(v._m01), logf(v._m02), logf(v._m03), logf(v._m10), logf(v._m11), logf(v._m12), logf(v._m13), logf(v._m20), logf(v._m21), logf(v._m22), logf(v._m23), logf(v._m30), logf(v._m31), logf(v._m32), logf(v._m33)); }



	__device__ __host__ float log10(const float &v) { return log10f(v); }

	__device__ __host__ float_1 log10(const float_1 &v) { return float_1(log10f(v.x)); }
	__device__ __host__ float_2 log10(const float_2 &v) { return float_2(log10f(v.x), log10f(v.y)); }
	__device__ __host__ float_3 log10(const float_3 &v) { return float_3(log10f(v.x), log10f(v.y), log10f(v.z)); }
	__device__ __host__ float_4 log10(const float_4 &v) { return float_4(log10f(v.x), log10f(v.y), log10f(v.z), log10f(v.w)); }

	__device__ __host__ float1x1 log10(const float1x1 &v) { return float1x1(log10f(v._m00)); }
	__device__ __host__ float1x2 log10(const float1x2 &v) { return float1x2(log10f(v._m00), log10f(v._m01)); }
	__device__ __host__ float1x3 log10(const float1x3 &v) { return float1x3(log10f(v._m00), log10f(v._m01), log10f(v._m02)); }
	__device__ __host__ float1x4 log10(const float1x4 &v) { return float1x4(log10f(v._m00), log10f(v._m01), log10f(v._m02), log10f(v._m03)); }
	__device__ __host__ float2x1 log10(const float2x1 &v) { return float2x1(log10f(v._m00), log10f(v._m10)); }
	__device__ __host__ float2x2 log10(const float2x2 &v) { return float2x2(log10f(v._m00), log10f(v._m01), log10f(v._m10), log10f(v._m11)); }
	__device__ __host__ float2x3 log10(const float2x3 &v) { return float2x3(log10f(v._m00), log10f(v._m01), log10f(v._m02), log10f(v._m10), log10f(v._m11), log10f(v._m12)); }
	__device__ __host__ float2x4 log10(const float2x4 &v) { return float2x4(log10f(v._m00), log10f(v._m01), log10f(v._m02), log10f(v._m03), log10f(v._m10), log10f(v._m11), log10f(v._m12), log10f(v._m13)); }
	__device__ __host__ float3x1 log10(const float3x1 &v) { return float3x1(log10f(v._m00), log10f(v._m10), log10f(v._m20)); }
	__device__ __host__ float3x2 log10(const float3x2 &v) { return float3x2(log10f(v._m00), log10f(v._m01), log10f(v._m10), log10f(v._m11), log10f(v._m20), log10f(v._m21)); }
	__device__ __host__ float3x3 log10(const float3x3 &v) { return float3x3(log10f(v._m00), log10f(v._m01), log10f(v._m02), log10f(v._m10), log10f(v._m11), log10f(v._m12), log10f(v._m20), log10f(v._m21), log10f(v._m22)); }
	__device__ __host__ float3x4 log10(const float3x4 &v) { return float3x4(log10f(v._m00), log10f(v._m01), log10f(v._m02), log10f(v._m03), log10f(v._m10), log10f(v._m11), log10f(v._m12), log10f(v._m13), log10f(v._m20), log10f(v._m21), log10f(v._m22), log10f(v._m23)); }
	__device__ __host__ float4x1 log10(const float4x1 &v) { return float4x1(log10f(v._m00), log10f(v._m10), log10f(v._m20), log10f(v._m30)); }
	__device__ __host__ float4x2 log10(const float4x2 &v) { return float4x2(log10f(v._m00), log10f(v._m01), log10f(v._m10), log10f(v._m11), log10f(v._m20), log10f(v._m21), log10f(v._m30), log10f(v._m31)); }
	__device__ __host__ float4x3 log10(const float4x3 &v) { return float4x3(log10f(v._m00), log10f(v._m01), log10f(v._m02), log10f(v._m10), log10f(v._m11), log10f(v._m12), log10f(v._m20), log10f(v._m21), log10f(v._m22), log10f(v._m30), log10f(v._m31), log10f(v._m32)); }
	__device__ __host__ float4x4 log10(const float4x4 &v) { return float4x4(log10f(v._m00), log10f(v._m01), log10f(v._m02), log10f(v._m03), log10f(v._m10), log10f(v._m11), log10f(v._m12), log10f(v._m13), log10f(v._m20), log10f(v._m21), log10f(v._m22), log10f(v._m23), log10f(v._m30), log10f(v._m31), log10f(v._m32), log10f(v._m33)); }



	__device__ __host__ float log2(const float &v) { return log2f(v); }

	__device__ __host__ float_1 log2(const float_1 &v) { return float_1(log2f(v.x)); }
	__device__ __host__ float_2 log2(const float_2 &v) { return float_2(log2f(v.x), log2f(v.y)); }
	__device__ __host__ float_3 log2(const float_3 &v) { return float_3(log2f(v.x), log2f(v.y), log2f(v.z)); }
	__device__ __host__ float_4 log2(const float_4 &v) { return float_4(log2f(v.x), log2f(v.y), log2f(v.z), log2f(v.w)); }

	__device__ __host__ float1x1 log2(const float1x1 &v) { return float1x1(log2f(v._m00)); }
	__device__ __host__ float1x2 log2(const float1x2 &v) { return float1x2(log2f(v._m00), log2f(v._m01)); }
	__device__ __host__ float1x3 log2(const float1x3 &v) { return float1x3(log2f(v._m00), log2f(v._m01), log2f(v._m02)); }
	__device__ __host__ float1x4 log2(const float1x4 &v) { return float1x4(log2f(v._m00), log2f(v._m01), log2f(v._m02), log2f(v._m03)); }
	__device__ __host__ float2x1 log2(const float2x1 &v) { return float2x1(log2f(v._m00), log2f(v._m10)); }
	__device__ __host__ float2x2 log2(const float2x2 &v) { return float2x2(log2f(v._m00), log2f(v._m01), log2f(v._m10), log2f(v._m11)); }
	__device__ __host__ float2x3 log2(const float2x3 &v) { return float2x3(log2f(v._m00), log2f(v._m01), log2f(v._m02), log2f(v._m10), log2f(v._m11), log2f(v._m12)); }
	__device__ __host__ float2x4 log2(const float2x4 &v) { return float2x4(log2f(v._m00), log2f(v._m01), log2f(v._m02), log2f(v._m03), log2f(v._m10), log2f(v._m11), log2f(v._m12), log2f(v._m13)); }
	__device__ __host__ float3x1 log2(const float3x1 &v) { return float3x1(log2f(v._m00), log2f(v._m10), log2f(v._m20)); }
	__device__ __host__ float3x2 log2(const float3x2 &v) { return float3x2(log2f(v._m00), log2f(v._m01), log2f(v._m10), log2f(v._m11), log2f(v._m20), log2f(v._m21)); }
	__device__ __host__ float3x3 log2(const float3x3 &v) { return float3x3(log2f(v._m00), log2f(v._m01), log2f(v._m02), log2f(v._m10), log2f(v._m11), log2f(v._m12), log2f(v._m20), log2f(v._m21), log2f(v._m22)); }
	__device__ __host__ float3x4 log2(const float3x4 &v) { return float3x4(log2f(v._m00), log2f(v._m01), log2f(v._m02), log2f(v._m03), log2f(v._m10), log2f(v._m11), log2f(v._m12), log2f(v._m13), log2f(v._m20), log2f(v._m21), log2f(v._m22), log2f(v._m23)); }
	__device__ __host__ float4x1 log2(const float4x1 &v) { return float4x1(log2f(v._m00), log2f(v._m10), log2f(v._m20), log2f(v._m30)); }
	__device__ __host__ float4x2 log2(const float4x2 &v) { return float4x2(log2f(v._m00), log2f(v._m01), log2f(v._m10), log2f(v._m11), log2f(v._m20), log2f(v._m21), log2f(v._m30), log2f(v._m31)); }
	__device__ __host__ float4x3 log2(const float4x3 &v) { return float4x3(log2f(v._m00), log2f(v._m01), log2f(v._m02), log2f(v._m10), log2f(v._m11), log2f(v._m12), log2f(v._m20), log2f(v._m21), log2f(v._m22), log2f(v._m30), log2f(v._m31), log2f(v._m32)); }
	__device__ __host__ float4x4 log2(const float4x4 &v) { return float4x4(log2f(v._m00), log2f(v._m01), log2f(v._m02), log2f(v._m03), log2f(v._m10), log2f(v._m11), log2f(v._m12), log2f(v._m13), log2f(v._m20), log2f(v._m21), log2f(v._m22), log2f(v._m23), log2f(v._m30), log2f(v._m31), log2f(v._m32), log2f(v._m33)); }



	__device__ __host__ float1x1 mul(const float1x1 &a, const float1x1 &b) { return float1x1(a._m00*b._m00); }
	__device__ __host__ float1 mul(const float_1 &v, const float1x1 &m) { return float_1(v.x*m._m00); }
	__device__ __host__ float1x2 mul(const float1x1 &a, const float1x2 &b) { return float1x2(a._m00*b._m00, a._m00*b._m01); }
	__device__ __host__ float2 mul(const float_1 &v, const float1x2 &m) { return float_2(v.x*m._m00, v.x*m._m01); }
	__device__ __host__ float1x3 mul(const float1x1 &a, const float1x3 &b) { return float1x3(a._m00*b._m00, a._m00*b._m01, a._m00*b._m02); }
	__device__ __host__ float3 mul(const float_1 &v, const float1x3 &m) { return float_3(v.x*m._m00, v.x*m._m01, v.x*m._m02); }
	__device__ __host__ float1x4 mul(const float1x1 &a, const float1x4 &b) { return float1x4(a._m00*b._m00, a._m00*b._m01, a._m00*b._m02, a._m00*b._m03); }
	__device__ __host__ float4 mul(const float_1 &v, const float1x4 &m) { return float_4(v.x*m._m00, v.x*m._m01, v.x*m._m02, v.x*m._m03); }
	__device__ __host__ float1x1 mul(const float1x2 &a, const float2x1 &b) { return float1x1(a._m00*b._m00+a._m01*b._m10); }
	__device__ __host__ float1 mul(const float_2 &v, const float2x1 &m) { return float_1(v.x*m._m00+v.y*m._m10); }
	__device__ __host__ float1x2 mul(const float1x2 &a, const float2x2 &b) { return float1x2(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11); }
	__device__ __host__ float2 mul(const float_2 &v, const float2x2 &m) { return float_2(v.x*m._m00+v.y*m._m10, v.x*m._m01+v.y*m._m11); }
	__device__ __host__ float1x3 mul(const float1x2 &a, const float2x3 &b) { return float1x3(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11, a._m00*b._m02+a._m01*b._m12); }
	__device__ __host__ float3 mul(const float_2 &v, const float2x3 &m) { return float_3(v.x*m._m00+v.y*m._m10, v.x*m._m01+v.y*m._m11, v.x*m._m02+v.y*m._m12); }
	__device__ __host__ float1x4 mul(const float1x2 &a, const float2x4 &b) { return float1x4(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11, a._m00*b._m02+a._m01*b._m12, a._m00*b._m03+a._m01*b._m13); }
	__device__ __host__ float4 mul(const float_2 &v, const float2x4 &m) { return float_4(v.x*m._m00+v.y*m._m10, v.x*m._m01+v.y*m._m11, v.x*m._m02+v.y*m._m12, v.x*m._m03+v.y*m._m13); }
	__device__ __host__ float1x1 mul(const float1x3 &a, const float3x1 &b) { return float1x1(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20); }
	__device__ __host__ float1 mul(const float_3 &v, const float3x1 &m) { return float_1(v.x*m._m00+v.y*m._m10+v.z*m._m20); }
	__device__ __host__ float1x2 mul(const float1x3 &a, const float3x2 &b) { return float1x2(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21); }
	__device__ __host__ float2 mul(const float_3 &v, const float3x2 &m) { return float_2(v.x*m._m00+v.y*m._m10+v.z*m._m20, v.x*m._m01+v.y*m._m11+v.z*m._m21); }
	__device__ __host__ float1x3 mul(const float1x3 &a, const float3x3 &b) { return float1x3(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22); }
	__device__ __host__ float3 mul(const float_3 &v, const float3x3 &m) { return float_3(v.x*m._m00+v.y*m._m10+v.z*m._m20, v.x*m._m01+v.y*m._m11+v.z*m._m21, v.x*m._m02+v.y*m._m12+v.z*m._m22); }
	__device__ __host__ float1x4 mul(const float1x3 &a, const float3x4 &b) { return float1x4(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22, a._m00*b._m03+a._m01*b._m13+a._m02*b._m23); }
	__device__ __host__ float4 mul(const float_3 &v, const float3x4 &m) { return float_4(v.x*m._m00+v.y*m._m10+v.z*m._m20, v.x*m._m01+v.y*m._m11+v.z*m._m21, v.x*m._m02+v.y*m._m12+v.z*m._m22, v.x*m._m03+v.y*m._m13+v.z*m._m23); }
	__device__ __host__ float1x1 mul(const float1x4 &a, const float4x1 &b) { return float1x1(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30); }
	__device__ __host__ float1 mul(const float_4 &v, const float4x1 &m) { return float_1(v.x*m._m00+v.y*m._m10+v.z*m._m20+v.w*m._m30); }
	__device__ __host__ float1x2 mul(const float1x4 &a, const float4x2 &b) { return float1x2(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31); }
	__device__ __host__ float2 mul(const float_4 &v, const float4x2 &m) { return float_2(v.x*m._m00+v.y*m._m10+v.z*m._m20+v.w*m._m30, v.x*m._m01+v.y*m._m11+v.z*m._m21+v.w*m._m31); }
	__device__ __host__ float1x3 mul(const float1x4 &a, const float4x3 &b) { return float1x3(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22+a._m03*b._m32); }
	__device__ __host__ float3 mul(const float_4 &v, const float4x3 &m) { return float_3(v.x*m._m00+v.y*m._m10+v.z*m._m20+v.w*m._m30, v.x*m._m01+v.y*m._m11+v.z*m._m21+v.w*m._m31, v.x*m._m02+v.y*m._m12+v.z*m._m22+v.w*m._m32); }
	__device__ __host__ float1x4 mul(const float1x4 &a, const float4x4 &b) { return float1x4(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22+a._m03*b._m32, a._m00*b._m03+a._m01*b._m13+a._m02*b._m23+a._m03*b._m33); }
	__device__ __host__ float4 mul(const float_4 &v, const float4x4 &m) { return float_4(v.x*m._m00+v.y*m._m10+v.z*m._m20+v.w*m._m30, v.x*m._m01+v.y*m._m11+v.z*m._m21+v.w*m._m31, v.x*m._m02+v.y*m._m12+v.z*m._m22+v.w*m._m32, v.x*m._m03+v.y*m._m13+v.z*m._m23+v.w*m._m33); }
	__device__ __host__ float2x1 mul(const float2x1 &a, const float1x1 &b) { return float2x1(a._m00*b._m00, a._m10*b._m00); }
	__device__ __host__ float2x2 mul(const float2x1 &a, const float1x2 &b) { return float2x2(a._m00*b._m00, a._m00*b._m01, a._m10*b._m00, a._m10*b._m01); }
	__device__ __host__ float2x3 mul(const float2x1 &a, const float1x3 &b) { return float2x3(a._m00*b._m00, a._m00*b._m01, a._m00*b._m02, a._m10*b._m00, a._m10*b._m01, a._m10*b._m02); }
	__device__ __host__ float2x4 mul(const float2x1 &a, const float1x4 &b) { return float2x4(a._m00*b._m00, a._m00*b._m01, a._m00*b._m02, a._m00*b._m03, a._m10*b._m00, a._m10*b._m01, a._m10*b._m02, a._m10*b._m03); }
	__device__ __host__ float2x1 mul(const float2x2 &a, const float2x1 &b) { return float2x1(a._m00*b._m00+a._m01*b._m10, a._m10*b._m00+a._m11*b._m10); }
	__device__ __host__ float2x2 mul(const float2x2 &a, const float2x2 &b) { return float2x2(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11, a._m10*b._m00+a._m11*b._m10, a._m10*b._m01+a._m11*b._m11); }
	__device__ __host__ float2x3 mul(const float2x2 &a, const float2x3 &b) { return float2x3(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11, a._m00*b._m02+a._m01*b._m12, a._m10*b._m00+a._m11*b._m10, a._m10*b._m01+a._m11*b._m11, a._m10*b._m02+a._m11*b._m12); }
	__device__ __host__ float2x4 mul(const float2x2 &a, const float2x4 &b) { return float2x4(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11, a._m00*b._m02+a._m01*b._m12, a._m00*b._m03+a._m01*b._m13, a._m10*b._m00+a._m11*b._m10, a._m10*b._m01+a._m11*b._m11, a._m10*b._m02+a._m11*b._m12, a._m10*b._m03+a._m11*b._m13); }
	__device__ __host__ float2x1 mul(const float2x3 &a, const float3x1 &b) { return float2x1(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20); }
	__device__ __host__ float2x2 mul(const float2x3 &a, const float3x2 &b) { return float2x2(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21); }
	__device__ __host__ float2x3 mul(const float2x3 &a, const float3x3 &b) { return float2x3(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22); }
	__device__ __host__ float2x4 mul(const float2x3 &a, const float3x4 &b) { return float2x4(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22, a._m00*b._m03+a._m01*b._m13+a._m02*b._m23, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22, a._m10*b._m03+a._m11*b._m13+a._m12*b._m23); }
	__device__ __host__ float2x1 mul(const float2x4 &a, const float4x1 &b) { return float2x1(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30); }
	__device__ __host__ float2x2 mul(const float2x4 &a, const float4x2 &b) { return float2x2(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21+a._m13*b._m31); }
	__device__ __host__ float2x3 mul(const float2x4 &a, const float4x3 &b) { return float2x3(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22+a._m03*b._m32, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21+a._m13*b._m31, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22+a._m13*b._m32); }
	__device__ __host__ float2x4 mul(const float2x4 &a, const float4x4 &b) { return float2x4(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22+a._m03*b._m32, a._m00*b._m03+a._m01*b._m13+a._m02*b._m23+a._m03*b._m33, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21+a._m13*b._m31, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22+a._m13*b._m32, a._m10*b._m03+a._m11*b._m13+a._m12*b._m23+a._m13*b._m33); }
	__device__ __host__ float3x1 mul(const float3x1 &a, const float1x1 &b) { return float3x1(a._m00*b._m00, a._m10*b._m00, a._m20*b._m00); }
	__device__ __host__ float3x2 mul(const float3x1 &a, const float1x2 &b) { return float3x2(a._m00*b._m00, a._m00*b._m01, a._m10*b._m00, a._m10*b._m01, a._m20*b._m00, a._m20*b._m01); }
	__device__ __host__ float3x3 mul(const float3x1 &a, const float1x3 &b) { return float3x3(a._m00*b._m00, a._m00*b._m01, a._m00*b._m02, a._m10*b._m00, a._m10*b._m01, a._m10*b._m02, a._m20*b._m00, a._m20*b._m01, a._m20*b._m02); }
	__device__ __host__ float3x4 mul(const float3x1 &a, const float1x4 &b) { return float3x4(a._m00*b._m00, a._m00*b._m01, a._m00*b._m02, a._m00*b._m03, a._m10*b._m00, a._m10*b._m01, a._m10*b._m02, a._m10*b._m03, a._m20*b._m00, a._m20*b._m01, a._m20*b._m02, a._m20*b._m03); }
	__device__ __host__ float3x1 mul(const float3x2 &a, const float2x1 &b) { return float3x1(a._m00*b._m00+a._m01*b._m10, a._m10*b._m00+a._m11*b._m10, a._m20*b._m00+a._m21*b._m10); }
	__device__ __host__ float3x2 mul(const float3x2 &a, const float2x2 &b) { return float3x2(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11, a._m10*b._m00+a._m11*b._m10, a._m10*b._m01+a._m11*b._m11, a._m20*b._m00+a._m21*b._m10, a._m20*b._m01+a._m21*b._m11); }
	__device__ __host__ float3x3 mul(const float3x2 &a, const float2x3 &b) { return float3x3(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11, a._m00*b._m02+a._m01*b._m12, a._m10*b._m00+a._m11*b._m10, a._m10*b._m01+a._m11*b._m11, a._m10*b._m02+a._m11*b._m12, a._m20*b._m00+a._m21*b._m10, a._m20*b._m01+a._m21*b._m11, a._m20*b._m02+a._m21*b._m12); }
	__device__ __host__ float3x4 mul(const float3x2 &a, const float2x4 &b) { return float3x4(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11, a._m00*b._m02+a._m01*b._m12, a._m00*b._m03+a._m01*b._m13, a._m10*b._m00+a._m11*b._m10, a._m10*b._m01+a._m11*b._m11, a._m10*b._m02+a._m11*b._m12, a._m10*b._m03+a._m11*b._m13, a._m20*b._m00+a._m21*b._m10, a._m20*b._m01+a._m21*b._m11, a._m20*b._m02+a._m21*b._m12, a._m20*b._m03+a._m21*b._m13); }
	__device__ __host__ float3x1 mul(const float3x3 &a, const float3x1 &b) { return float3x1(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20); }
	__device__ __host__ float3x2 mul(const float3x3 &a, const float3x2 &b) { return float3x2(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21); }
	__device__ __host__ float3x3 mul(const float3x3 &a, const float3x3 &b) { return float3x3(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21, a._m20*b._m02+a._m21*b._m12+a._m22*b._m22); }
	__device__ __host__ float3x4 mul(const float3x3 &a, const float3x4 &b) { return float3x4(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22, a._m00*b._m03+a._m01*b._m13+a._m02*b._m23, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22, a._m10*b._m03+a._m11*b._m13+a._m12*b._m23, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21, a._m20*b._m02+a._m21*b._m12+a._m22*b._m22, a._m20*b._m03+a._m21*b._m13+a._m22*b._m23); }
	__device__ __host__ float3x1 mul(const float3x4 &a, const float4x1 &b) { return float3x1(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20+a._m23*b._m30); }
	__device__ __host__ float3x2 mul(const float3x4 &a, const float4x2 &b) { return float3x2(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21+a._m13*b._m31, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20+a._m23*b._m30, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21+a._m23*b._m31); }
	__device__ __host__ float3x3 mul(const float3x4 &a, const float4x3 &b) { return float3x3(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22+a._m03*b._m32, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21+a._m13*b._m31, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22+a._m13*b._m32, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20+a._m23*b._m30, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21+a._m23*b._m31, a._m20*b._m02+a._m21*b._m12+a._m22*b._m22+a._m23*b._m32); }
	__device__ __host__ float3x4 mul(const float3x4 &a, const float4x4 &b) { return float3x4(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22+a._m03*b._m32, a._m00*b._m03+a._m01*b._m13+a._m02*b._m23+a._m03*b._m33, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21+a._m13*b._m31, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22+a._m13*b._m32, a._m10*b._m03+a._m11*b._m13+a._m12*b._m23+a._m13*b._m33, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20+a._m23*b._m30, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21+a._m23*b._m31, a._m20*b._m02+a._m21*b._m12+a._m22*b._m22+a._m23*b._m32, a._m20*b._m03+a._m21*b._m13+a._m22*b._m23+a._m23*b._m33); }
	__device__ __host__ float4x1 mul(const float4x1 &a, const float1x1 &b) { return float4x1(a._m00*b._m00, a._m10*b._m00, a._m20*b._m00, a._m30*b._m00); }
	__device__ __host__ float4x2 mul(const float4x1 &a, const float1x2 &b) { return float4x2(a._m00*b._m00, a._m00*b._m01, a._m10*b._m00, a._m10*b._m01, a._m20*b._m00, a._m20*b._m01, a._m30*b._m00, a._m30*b._m01); }
	__device__ __host__ float4x3 mul(const float4x1 &a, const float1x3 &b) { return float4x3(a._m00*b._m00, a._m00*b._m01, a._m00*b._m02, a._m10*b._m00, a._m10*b._m01, a._m10*b._m02, a._m20*b._m00, a._m20*b._m01, a._m20*b._m02, a._m30*b._m00, a._m30*b._m01, a._m30*b._m02); }
	__device__ __host__ float4x4 mul(const float4x1 &a, const float1x4 &b) { return float4x4(a._m00*b._m00, a._m00*b._m01, a._m00*b._m02, a._m00*b._m03, a._m10*b._m00, a._m10*b._m01, a._m10*b._m02, a._m10*b._m03, a._m20*b._m00, a._m20*b._m01, a._m20*b._m02, a._m20*b._m03, a._m30*b._m00, a._m30*b._m01, a._m30*b._m02, a._m30*b._m03); }
	__device__ __host__ float4x1 mul(const float4x2 &a, const float2x1 &b) { return float4x1(a._m00*b._m00+a._m01*b._m10, a._m10*b._m00+a._m11*b._m10, a._m20*b._m00+a._m21*b._m10, a._m30*b._m00+a._m31*b._m10); }
	__device__ __host__ float4x2 mul(const float4x2 &a, const float2x2 &b) { return float4x2(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11, a._m10*b._m00+a._m11*b._m10, a._m10*b._m01+a._m11*b._m11, a._m20*b._m00+a._m21*b._m10, a._m20*b._m01+a._m21*b._m11, a._m30*b._m00+a._m31*b._m10, a._m30*b._m01+a._m31*b._m11); }
	__device__ __host__ float4x3 mul(const float4x2 &a, const float2x3 &b) { return float4x3(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11, a._m00*b._m02+a._m01*b._m12, a._m10*b._m00+a._m11*b._m10, a._m10*b._m01+a._m11*b._m11, a._m10*b._m02+a._m11*b._m12, a._m20*b._m00+a._m21*b._m10, a._m20*b._m01+a._m21*b._m11, a._m20*b._m02+a._m21*b._m12, a._m30*b._m00+a._m31*b._m10, a._m30*b._m01+a._m31*b._m11, a._m30*b._m02+a._m31*b._m12); }
	__device__ __host__ float4x4 mul(const float4x2 &a, const float2x4 &b) { return float4x4(a._m00*b._m00+a._m01*b._m10, a._m00*b._m01+a._m01*b._m11, a._m00*b._m02+a._m01*b._m12, a._m00*b._m03+a._m01*b._m13, a._m10*b._m00+a._m11*b._m10, a._m10*b._m01+a._m11*b._m11, a._m10*b._m02+a._m11*b._m12, a._m10*b._m03+a._m11*b._m13, a._m20*b._m00+a._m21*b._m10, a._m20*b._m01+a._m21*b._m11, a._m20*b._m02+a._m21*b._m12, a._m20*b._m03+a._m21*b._m13, a._m30*b._m00+a._m31*b._m10, a._m30*b._m01+a._m31*b._m11, a._m30*b._m02+a._m31*b._m12, a._m30*b._m03+a._m31*b._m13); }
	__device__ __host__ float4x1 mul(const float4x3 &a, const float3x1 &b) { return float4x1(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20, a._m30*b._m00+a._m31*b._m10+a._m32*b._m20); }
	__device__ __host__ float4x2 mul(const float4x3 &a, const float3x2 &b) { return float4x2(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21, a._m30*b._m00+a._m31*b._m10+a._m32*b._m20, a._m30*b._m01+a._m31*b._m11+a._m32*b._m21); }
	__device__ __host__ float4x3 mul(const float4x3 &a, const float3x3 &b) { return float4x3(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21, a._m20*b._m02+a._m21*b._m12+a._m22*b._m22, a._m30*b._m00+a._m31*b._m10+a._m32*b._m20, a._m30*b._m01+a._m31*b._m11+a._m32*b._m21, a._m30*b._m02+a._m31*b._m12+a._m32*b._m22); }
	__device__ __host__ float4x4 mul(const float4x3 &a, const float3x4 &b) { return float4x4(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22, a._m00*b._m03+a._m01*b._m13+a._m02*b._m23, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22, a._m10*b._m03+a._m11*b._m13+a._m12*b._m23, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21, a._m20*b._m02+a._m21*b._m12+a._m22*b._m22, a._m20*b._m03+a._m21*b._m13+a._m22*b._m23, a._m30*b._m00+a._m31*b._m10+a._m32*b._m20, a._m30*b._m01+a._m31*b._m11+a._m32*b._m21, a._m30*b._m02+a._m31*b._m12+a._m32*b._m22, a._m30*b._m03+a._m31*b._m13+a._m32*b._m23); }
	__device__ __host__ float4x1 mul(const float4x4 &a, const float4x1 &b) { return float4x1(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20+a._m23*b._m30, a._m30*b._m00+a._m31*b._m10+a._m32*b._m20+a._m33*b._m30); }
	__device__ __host__ float4x2 mul(const float4x4 &a, const float4x2 &b) { return float4x2(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21+a._m13*b._m31, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20+a._m23*b._m30, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21+a._m23*b._m31, a._m30*b._m00+a._m31*b._m10+a._m32*b._m20+a._m33*b._m30, a._m30*b._m01+a._m31*b._m11+a._m32*b._m21+a._m33*b._m31); }
	__device__ __host__ float4x3 mul(const float4x4 &a, const float4x3 &b) { return float4x3(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22+a._m03*b._m32, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21+a._m13*b._m31, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22+a._m13*b._m32, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20+a._m23*b._m30, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21+a._m23*b._m31, a._m20*b._m02+a._m21*b._m12+a._m22*b._m22+a._m23*b._m32, a._m30*b._m00+a._m31*b._m10+a._m32*b._m20+a._m33*b._m30, a._m30*b._m01+a._m31*b._m11+a._m32*b._m21+a._m33*b._m31, a._m30*b._m02+a._m31*b._m12+a._m32*b._m22+a._m33*b._m32); }
	__device__ __host__ float4x4 mul(const float4x4 &a, const float4x4 &b) { return float4x4(a._m00*b._m00+a._m01*b._m10+a._m02*b._m20+a._m03*b._m30, a._m00*b._m01+a._m01*b._m11+a._m02*b._m21+a._m03*b._m31, a._m00*b._m02+a._m01*b._m12+a._m02*b._m22+a._m03*b._m32, a._m00*b._m03+a._m01*b._m13+a._m02*b._m23+a._m03*b._m33, a._m10*b._m00+a._m11*b._m10+a._m12*b._m20+a._m13*b._m30, a._m10*b._m01+a._m11*b._m11+a._m12*b._m21+a._m13*b._m31, a._m10*b._m02+a._m11*b._m12+a._m12*b._m22+a._m13*b._m32, a._m10*b._m03+a._m11*b._m13+a._m12*b._m23+a._m13*b._m33, a._m20*b._m00+a._m21*b._m10+a._m22*b._m20+a._m23*b._m30, a._m20*b._m01+a._m21*b._m11+a._m22*b._m21+a._m23*b._m31, a._m20*b._m02+a._m21*b._m12+a._m22*b._m22+a._m23*b._m32, a._m20*b._m03+a._m21*b._m13+a._m22*b._m23+a._m23*b._m33, a._m30*b._m00+a._m31*b._m10+a._m32*b._m20+a._m33*b._m30, a._m30*b._m01+a._m31*b._m11+a._m32*b._m21+a._m33*b._m31, a._m30*b._m02+a._m31*b._m12+a._m32*b._m22+a._m33*b._m32, a._m30*b._m03+a._m31*b._m13+a._m32*b._m23+a._m33*b._m33); }


	__device__ __host__ float_1 normalize(const float_1 &v) { return v/length(v); }
	__device__ __host__ float_2 normalize(const float_2 &v) { return v/length(v); }
	__device__ __host__ float_3 normalize(const float_3 &v) { return v/length(v); }
	__device__ __host__ float_4 normalize(const float_4 &v) { return v/length(v); }


	__device__ __host__ float pow(const float &a, const float &b) { return powf(a,b); }

	__device__ __host__ float_1 pow(const float_1 &a, const float_1 &b) { return float_1(powf(a.x,b.x)); }
	__device__ __host__ float_2 pow(const float_2 &a, const float_2 &b) { return float_2(powf(a.x,b.x), powf(a.y,b.y)); }
	__device__ __host__ float_3 pow(const float_3 &a, const float_3 &b) { return float_3(powf(a.x,b.x), powf(a.y,b.y), powf(a.z,b.z)); }
	__device__ __host__ float_4 pow(const float_4 &a, const float_4 &b) { return float_4(powf(a.x,b.x), powf(a.y,b.y), powf(a.z,b.z), powf(a.w,b.w)); }

	__device__ __host__ float1x1 pow(const float1x1 &a, const float1x1 &b) { return float1x1(powf(a._m00,b._m00)); }
	__device__ __host__ float1x2 pow(const float1x2 &a, const float1x2 &b) { return float1x2(powf(a._m00,b._m00), powf(a._m01,b._m01)); }
	__device__ __host__ float1x3 pow(const float1x3 &a, const float1x3 &b) { return float1x3(powf(a._m00,b._m00), powf(a._m01,b._m01), powf(a._m02,b._m02)); }
	__device__ __host__ float1x4 pow(const float1x4 &a, const float1x4 &b) { return float1x4(powf(a._m00,b._m00), powf(a._m01,b._m01), powf(a._m02,b._m02), powf(a._m03,b._m03)); }
	__device__ __host__ float2x1 pow(const float2x1 &a, const float2x1 &b) { return float2x1(powf(a._m00,b._m00), powf(a._m10,b._m10)); }
	__device__ __host__ float2x2 pow(const float2x2 &a, const float2x2 &b) { return float2x2(powf(a._m00,b._m00), powf(a._m01,b._m01), powf(a._m10,b._m10), powf(a._m11,b._m11)); }
	__device__ __host__ float2x3 pow(const float2x3 &a, const float2x3 &b) { return float2x3(powf(a._m00,b._m00), powf(a._m01,b._m01), powf(a._m02,b._m02), powf(a._m10,b._m10), powf(a._m11,b._m11), powf(a._m12,b._m12)); }
	__device__ __host__ float2x4 pow(const float2x4 &a, const float2x4 &b) { return float2x4(powf(a._m00,b._m00), powf(a._m01,b._m01), powf(a._m02,b._m02), powf(a._m03,b._m03), powf(a._m10,b._m10), powf(a._m11,b._m11), powf(a._m12,b._m12), powf(a._m13,b._m13)); }
	__device__ __host__ float3x1 pow(const float3x1 &a, const float3x1 &b) { return float3x1(powf(a._m00,b._m00), powf(a._m10,b._m10), powf(a._m20,b._m20)); }
	__device__ __host__ float3x2 pow(const float3x2 &a, const float3x2 &b) { return float3x2(powf(a._m00,b._m00), powf(a._m01,b._m01), powf(a._m10,b._m10), powf(a._m11,b._m11), powf(a._m20,b._m20), powf(a._m21,b._m21)); }
	__device__ __host__ float3x3 pow(const float3x3 &a, const float3x3 &b) { return float3x3(powf(a._m00,b._m00), powf(a._m01,b._m01), powf(a._m02,b._m02), powf(a._m10,b._m10), powf(a._m11,b._m11), powf(a._m12,b._m12), powf(a._m20,b._m20), powf(a._m21,b._m21), powf(a._m22,b._m22)); }
	__device__ __host__ float3x4 pow(const float3x4 &a, const float3x4 &b) { return float3x4(powf(a._m00,b._m00), powf(a._m01,b._m01), powf(a._m02,b._m02), powf(a._m03,b._m03), powf(a._m10,b._m10), powf(a._m11,b._m11), powf(a._m12,b._m12), powf(a._m13,b._m13), powf(a._m20,b._m20), powf(a._m21,b._m21), powf(a._m22,b._m22), powf(a._m23,b._m23)); }
	__device__ __host__ float4x1 pow(const float4x1 &a, const float4x1 &b) { return float4x1(powf(a._m00,b._m00), powf(a._m10,b._m10), powf(a._m20,b._m20), powf(a._m30,b._m30)); }
	__device__ __host__ float4x2 pow(const float4x2 &a, const float4x2 &b) { return float4x2(powf(a._m00,b._m00), powf(a._m01,b._m01), powf(a._m10,b._m10), powf(a._m11,b._m11), powf(a._m20,b._m20), powf(a._m21,b._m21), powf(a._m30,b._m30), powf(a._m31,b._m31)); }
	__device__ __host__ float4x3 pow(const float4x3 &a, const float4x3 &b) { return float4x3(powf(a._m00,b._m00), powf(a._m01,b._m01), powf(a._m02,b._m02), powf(a._m10,b._m10), powf(a._m11,b._m11), powf(a._m12,b._m12), powf(a._m20,b._m20), powf(a._m21,b._m21), powf(a._m22,b._m22), powf(a._m30,b._m30), powf(a._m31,b._m31), powf(a._m32,b._m32)); }
	__device__ __host__ float4x4 pow(const float4x4 &a, const float4x4 &b) { return float4x4(powf(a._m00,b._m00), powf(a._m01,b._m01), powf(a._m02,b._m02), powf(a._m03,b._m03), powf(a._m10,b._m10), powf(a._m11,b._m11), powf(a._m12,b._m12), powf(a._m13,b._m13), powf(a._m20,b._m20), powf(a._m21,b._m21), powf(a._m22,b._m22), powf(a._m23,b._m23), powf(a._m30,b._m30), powf(a._m31,b._m31), powf(a._m32,b._m32), powf(a._m33,b._m33)); }



	__device__ __host__ float radians(const float &v) { return (v*PI/180); }

	__device__ __host__ float_1 radians(const float_1 &v) { return float_1((v.x*PI/180)); }
	__device__ __host__ float_2 radians(const float_2 &v) { return float_2((v.x*PI/180), (v.y*PI/180)); }
	__device__ __host__ float_3 radians(const float_3 &v) { return float_3((v.x*PI/180), (v.y*PI/180), (v.z*PI/180)); }
	__device__ __host__ float_4 radians(const float_4 &v) { return float_4((v.x*PI/180), (v.y*PI/180), (v.z*PI/180), (v.w*PI/180)); }

	__device__ __host__ float1x1 radians(const float1x1 &v) { return float1x1((v._m00*PI/180)); }
	__device__ __host__ float1x2 radians(const float1x2 &v) { return float1x2((v._m00*PI/180), (v._m01*PI/180)); }
	__device__ __host__ float1x3 radians(const float1x3 &v) { return float1x3((v._m00*PI/180), (v._m01*PI/180), (v._m02*PI/180)); }
	__device__ __host__ float1x4 radians(const float1x4 &v) { return float1x4((v._m00*PI/180), (v._m01*PI/180), (v._m02*PI/180), (v._m03*PI/180)); }
	__device__ __host__ float2x1 radians(const float2x1 &v) { return float2x1((v._m00*PI/180), (v._m10*PI/180)); }
	__device__ __host__ float2x2 radians(const float2x2 &v) { return float2x2((v._m00*PI/180), (v._m01*PI/180), (v._m10*PI/180), (v._m11*PI/180)); }
	__device__ __host__ float2x3 radians(const float2x3 &v) { return float2x3((v._m00*PI/180), (v._m01*PI/180), (v._m02*PI/180), (v._m10*PI/180), (v._m11*PI/180), (v._m12*PI/180)); }
	__device__ __host__ float2x4 radians(const float2x4 &v) { return float2x4((v._m00*PI/180), (v._m01*PI/180), (v._m02*PI/180), (v._m03*PI/180), (v._m10*PI/180), (v._m11*PI/180), (v._m12*PI/180), (v._m13*PI/180)); }
	__device__ __host__ float3x1 radians(const float3x1 &v) { return float3x1((v._m00*PI/180), (v._m10*PI/180), (v._m20*PI/180)); }
	__device__ __host__ float3x2 radians(const float3x2 &v) { return float3x2((v._m00*PI/180), (v._m01*PI/180), (v._m10*PI/180), (v._m11*PI/180), (v._m20*PI/180), (v._m21*PI/180)); }
	__device__ __host__ float3x3 radians(const float3x3 &v) { return float3x3((v._m00*PI/180), (v._m01*PI/180), (v._m02*PI/180), (v._m10*PI/180), (v._m11*PI/180), (v._m12*PI/180), (v._m20*PI/180), (v._m21*PI/180), (v._m22*PI/180)); }
	__device__ __host__ float3x4 radians(const float3x4 &v) { return float3x4((v._m00*PI/180), (v._m01*PI/180), (v._m02*PI/180), (v._m03*PI/180), (v._m10*PI/180), (v._m11*PI/180), (v._m12*PI/180), (v._m13*PI/180), (v._m20*PI/180), (v._m21*PI/180), (v._m22*PI/180), (v._m23*PI/180)); }
	__device__ __host__ float4x1 radians(const float4x1 &v) { return float4x1((v._m00*PI/180), (v._m10*PI/180), (v._m20*PI/180), (v._m30*PI/180)); }
	__device__ __host__ float4x2 radians(const float4x2 &v) { return float4x2((v._m00*PI/180), (v._m01*PI/180), (v._m10*PI/180), (v._m11*PI/180), (v._m20*PI/180), (v._m21*PI/180), (v._m30*PI/180), (v._m31*PI/180)); }
	__device__ __host__ float4x3 radians(const float4x3 &v) { return float4x3((v._m00*PI/180), (v._m01*PI/180), (v._m02*PI/180), (v._m10*PI/180), (v._m11*PI/180), (v._m12*PI/180), (v._m20*PI/180), (v._m21*PI/180), (v._m22*PI/180), (v._m30*PI/180), (v._m31*PI/180), (v._m32*PI/180)); }
	__device__ __host__ float4x4 radians(const float4x4 &v) { return float4x4((v._m00*PI/180), (v._m01*PI/180), (v._m02*PI/180), (v._m03*PI/180), (v._m10*PI/180), (v._m11*PI/180), (v._m12*PI/180), (v._m13*PI/180), (v._m20*PI/180), (v._m21*PI/180), (v._m22*PI/180), (v._m23*PI/180), (v._m30*PI/180), (v._m31*PI/180), (v._m32*PI/180), (v._m33*PI/180)); }



	__device__ __host__ float round(const float &v) { return roundf(v); }

	__device__ __host__ float_1 round(const float_1 &v) { return float_1(roundf(v.x)); }
	__device__ __host__ float_2 round(const float_2 &v) { return float_2(roundf(v.x), roundf(v.y)); }
	__device__ __host__ float_3 round(const float_3 &v) { return float_3(roundf(v.x), roundf(v.y), roundf(v.z)); }
	__device__ __host__ float_4 round(const float_4 &v) { return float_4(roundf(v.x), roundf(v.y), roundf(v.z), roundf(v.w)); }

	__device__ __host__ float1x1 round(const float1x1 &v) { return float1x1(roundf(v._m00)); }
	__device__ __host__ float1x2 round(const float1x2 &v) { return float1x2(roundf(v._m00), roundf(v._m01)); }
	__device__ __host__ float1x3 round(const float1x3 &v) { return float1x3(roundf(v._m00), roundf(v._m01), roundf(v._m02)); }
	__device__ __host__ float1x4 round(const float1x4 &v) { return float1x4(roundf(v._m00), roundf(v._m01), roundf(v._m02), roundf(v._m03)); }
	__device__ __host__ float2x1 round(const float2x1 &v) { return float2x1(roundf(v._m00), roundf(v._m10)); }
	__device__ __host__ float2x2 round(const float2x2 &v) { return float2x2(roundf(v._m00), roundf(v._m01), roundf(v._m10), roundf(v._m11)); }
	__device__ __host__ float2x3 round(const float2x3 &v) { return float2x3(roundf(v._m00), roundf(v._m01), roundf(v._m02), roundf(v._m10), roundf(v._m11), roundf(v._m12)); }
	__device__ __host__ float2x4 round(const float2x4 &v) { return float2x4(roundf(v._m00), roundf(v._m01), roundf(v._m02), roundf(v._m03), roundf(v._m10), roundf(v._m11), roundf(v._m12), roundf(v._m13)); }
	__device__ __host__ float3x1 round(const float3x1 &v) { return float3x1(roundf(v._m00), roundf(v._m10), roundf(v._m20)); }
	__device__ __host__ float3x2 round(const float3x2 &v) { return float3x2(roundf(v._m00), roundf(v._m01), roundf(v._m10), roundf(v._m11), roundf(v._m20), roundf(v._m21)); }
	__device__ __host__ float3x3 round(const float3x3 &v) { return float3x3(roundf(v._m00), roundf(v._m01), roundf(v._m02), roundf(v._m10), roundf(v._m11), roundf(v._m12), roundf(v._m20), roundf(v._m21), roundf(v._m22)); }
	__device__ __host__ float3x4 round(const float3x4 &v) { return float3x4(roundf(v._m00), roundf(v._m01), roundf(v._m02), roundf(v._m03), roundf(v._m10), roundf(v._m11), roundf(v._m12), roundf(v._m13), roundf(v._m20), roundf(v._m21), roundf(v._m22), roundf(v._m23)); }
	__device__ __host__ float4x1 round(const float4x1 &v) { return float4x1(roundf(v._m00), roundf(v._m10), roundf(v._m20), roundf(v._m30)); }
	__device__ __host__ float4x2 round(const float4x2 &v) { return float4x2(roundf(v._m00), roundf(v._m01), roundf(v._m10), roundf(v._m11), roundf(v._m20), roundf(v._m21), roundf(v._m30), roundf(v._m31)); }
	__device__ __host__ float4x3 round(const float4x3 &v) { return float4x3(roundf(v._m00), roundf(v._m01), roundf(v._m02), roundf(v._m10), roundf(v._m11), roundf(v._m12), roundf(v._m20), roundf(v._m21), roundf(v._m22), roundf(v._m30), roundf(v._m31), roundf(v._m32)); }
	__device__ __host__ float4x4 round(const float4x4 &v) { return float4x4(roundf(v._m00), roundf(v._m01), roundf(v._m02), roundf(v._m03), roundf(v._m10), roundf(v._m11), roundf(v._m12), roundf(v._m13), roundf(v._m20), roundf(v._m21), roundf(v._m22), roundf(v._m23), roundf(v._m30), roundf(v._m31), roundf(v._m32), roundf(v._m33)); }



	__device__ __host__ float rsqrt(const float &v) { return (1.0f/sqrtf(v)); }

	__device__ __host__ float_1 rsqrt(const float_1 &v) { return float_1((1.0f/sqrtf(v.x))); }
	__device__ __host__ float_2 rsqrt(const float_2 &v) { return float_2((1.0f/sqrtf(v.x)), (1.0f/sqrtf(v.y))); }
	__device__ __host__ float_3 rsqrt(const float_3 &v) { return float_3((1.0f/sqrtf(v.x)), (1.0f/sqrtf(v.y)), (1.0f/sqrtf(v.z))); }
	__device__ __host__ float_4 rsqrt(const float_4 &v) { return float_4((1.0f/sqrtf(v.x)), (1.0f/sqrtf(v.y)), (1.0f/sqrtf(v.z)), (1.0f/sqrtf(v.w))); }

	__device__ __host__ float1x1 rsqrt(const float1x1 &v) { return float1x1((1.0f/sqrtf(v._m00))); }
	__device__ __host__ float1x2 rsqrt(const float1x2 &v) { return float1x2((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01))); }
	__device__ __host__ float1x3 rsqrt(const float1x3 &v) { return float1x3((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01)), (1.0f/sqrtf(v._m02))); }
	__device__ __host__ float1x4 rsqrt(const float1x4 &v) { return float1x4((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01)), (1.0f/sqrtf(v._m02)), (1.0f/sqrtf(v._m03))); }
	__device__ __host__ float2x1 rsqrt(const float2x1 &v) { return float2x1((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m10))); }
	__device__ __host__ float2x2 rsqrt(const float2x2 &v) { return float2x2((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01)), (1.0f/sqrtf(v._m10)), (1.0f/sqrtf(v._m11))); }
	__device__ __host__ float2x3 rsqrt(const float2x3 &v) { return float2x3((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01)), (1.0f/sqrtf(v._m02)), (1.0f/sqrtf(v._m10)), (1.0f/sqrtf(v._m11)), (1.0f/sqrtf(v._m12))); }
	__device__ __host__ float2x4 rsqrt(const float2x4 &v) { return float2x4((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01)), (1.0f/sqrtf(v._m02)), (1.0f/sqrtf(v._m03)), (1.0f/sqrtf(v._m10)), (1.0f/sqrtf(v._m11)), (1.0f/sqrtf(v._m12)), (1.0f/sqrtf(v._m13))); }
	__device__ __host__ float3x1 rsqrt(const float3x1 &v) { return float3x1((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m10)), (1.0f/sqrtf(v._m20))); }
	__device__ __host__ float3x2 rsqrt(const float3x2 &v) { return float3x2((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01)), (1.0f/sqrtf(v._m10)), (1.0f/sqrtf(v._m11)), (1.0f/sqrtf(v._m20)), (1.0f/sqrtf(v._m21))); }
	__device__ __host__ float3x3 rsqrt(const float3x3 &v) { return float3x3((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01)), (1.0f/sqrtf(v._m02)), (1.0f/sqrtf(v._m10)), (1.0f/sqrtf(v._m11)), (1.0f/sqrtf(v._m12)), (1.0f/sqrtf(v._m20)), (1.0f/sqrtf(v._m21)), (1.0f/sqrtf(v._m22))); }
	__device__ __host__ float3x4 rsqrt(const float3x4 &v) { return float3x4((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01)), (1.0f/sqrtf(v._m02)), (1.0f/sqrtf(v._m03)), (1.0f/sqrtf(v._m10)), (1.0f/sqrtf(v._m11)), (1.0f/sqrtf(v._m12)), (1.0f/sqrtf(v._m13)), (1.0f/sqrtf(v._m20)), (1.0f/sqrtf(v._m21)), (1.0f/sqrtf(v._m22)), (1.0f/sqrtf(v._m23))); }
	__device__ __host__ float4x1 rsqrt(const float4x1 &v) { return float4x1((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m10)), (1.0f/sqrtf(v._m20)), (1.0f/sqrtf(v._m30))); }
	__device__ __host__ float4x2 rsqrt(const float4x2 &v) { return float4x2((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01)), (1.0f/sqrtf(v._m10)), (1.0f/sqrtf(v._m11)), (1.0f/sqrtf(v._m20)), (1.0f/sqrtf(v._m21)), (1.0f/sqrtf(v._m30)), (1.0f/sqrtf(v._m31))); }
	__device__ __host__ float4x3 rsqrt(const float4x3 &v) { return float4x3((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01)), (1.0f/sqrtf(v._m02)), (1.0f/sqrtf(v._m10)), (1.0f/sqrtf(v._m11)), (1.0f/sqrtf(v._m12)), (1.0f/sqrtf(v._m20)), (1.0f/sqrtf(v._m21)), (1.0f/sqrtf(v._m22)), (1.0f/sqrtf(v._m30)), (1.0f/sqrtf(v._m31)), (1.0f/sqrtf(v._m32))); }
	__device__ __host__ float4x4 rsqrt(const float4x4 &v) { return float4x4((1.0f/sqrtf(v._m00)), (1.0f/sqrtf(v._m01)), (1.0f/sqrtf(v._m02)), (1.0f/sqrtf(v._m03)), (1.0f/sqrtf(v._m10)), (1.0f/sqrtf(v._m11)), (1.0f/sqrtf(v._m12)), (1.0f/sqrtf(v._m13)), (1.0f/sqrtf(v._m20)), (1.0f/sqrtf(v._m21)), (1.0f/sqrtf(v._m22)), (1.0f/sqrtf(v._m23)), (1.0f/sqrtf(v._m30)), (1.0f/sqrtf(v._m31)), (1.0f/sqrtf(v._m32)), (1.0f/sqrtf(v._m33))); }



	__device__ __host__ float_1 saturate(const float_1 &v) { return float_1(max(0.0f, min(1.0f, v.x))); }
	__device__ __host__ float_2 saturate(const float_2 &v) { return float_2(max(0.0f, min(1.0f, v.x)), max(0.0f, min(1.0f, v.y))); }
	__device__ __host__ float_3 saturate(const float_3 &v) { return float_3(max(0.0f, min(1.0f, v.x)), max(0.0f, min(1.0f, v.y)), max(0.0f, min(1.0f, v.z))); }
	__device__ __host__ float_4 saturate(const float_4 &v) { return float_4(max(0.0f, min(1.0f, v.x)), max(0.0f, min(1.0f, v.y)), max(0.0f, min(1.0f, v.z)), max(0.0f, min(1.0f, v.w))); }

	__device__ __host__ float1x1 saturate(const float1x1 &v) { return float1x1(max(0.0f, min(1.0f, v._m00))); }
	__device__ __host__ float1x2 saturate(const float1x2 &v) { return float1x2(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01))); }
	__device__ __host__ float1x3 saturate(const float1x3 &v) { return float1x3(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01)), max(0.0f, min(1.0f, v._m02))); }
	__device__ __host__ float1x4 saturate(const float1x4 &v) { return float1x4(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01)), max(0.0f, min(1.0f, v._m02)), max(0.0f, min(1.0f, v._m03))); }
	__device__ __host__ float2x1 saturate(const float2x1 &v) { return float2x1(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m10))); }
	__device__ __host__ float2x2 saturate(const float2x2 &v) { return float2x2(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01)), max(0.0f, min(1.0f, v._m10)), max(0.0f, min(1.0f, v._m11))); }
	__device__ __host__ float2x3 saturate(const float2x3 &v) { return float2x3(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01)), max(0.0f, min(1.0f, v._m02)), max(0.0f, min(1.0f, v._m10)), max(0.0f, min(1.0f, v._m11)), max(0.0f, min(1.0f, v._m12))); }
	__device__ __host__ float2x4 saturate(const float2x4 &v) { return float2x4(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01)), max(0.0f, min(1.0f, v._m02)), max(0.0f, min(1.0f, v._m03)), max(0.0f, min(1.0f, v._m10)), max(0.0f, min(1.0f, v._m11)), max(0.0f, min(1.0f, v._m12)), max(0.0f, min(1.0f, v._m13))); }
	__device__ __host__ float3x1 saturate(const float3x1 &v) { return float3x1(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m10)), max(0.0f, min(1.0f, v._m20))); }
	__device__ __host__ float3x2 saturate(const float3x2 &v) { return float3x2(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01)), max(0.0f, min(1.0f, v._m10)), max(0.0f, min(1.0f, v._m11)), max(0.0f, min(1.0f, v._m20)), max(0.0f, min(1.0f, v._m21))); }
	__device__ __host__ float3x3 saturate(const float3x3 &v) { return float3x3(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01)), max(0.0f, min(1.0f, v._m02)), max(0.0f, min(1.0f, v._m10)), max(0.0f, min(1.0f, v._m11)), max(0.0f, min(1.0f, v._m12)), max(0.0f, min(1.0f, v._m20)), max(0.0f, min(1.0f, v._m21)), max(0.0f, min(1.0f, v._m22))); }
	__device__ __host__ float3x4 saturate(const float3x4 &v) { return float3x4(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01)), max(0.0f, min(1.0f, v._m02)), max(0.0f, min(1.0f, v._m03)), max(0.0f, min(1.0f, v._m10)), max(0.0f, min(1.0f, v._m11)), max(0.0f, min(1.0f, v._m12)), max(0.0f, min(1.0f, v._m13)), max(0.0f, min(1.0f, v._m20)), max(0.0f, min(1.0f, v._m21)), max(0.0f, min(1.0f, v._m22)), max(0.0f, min(1.0f, v._m23))); }
	__device__ __host__ float4x1 saturate(const float4x1 &v) { return float4x1(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m10)), max(0.0f, min(1.0f, v._m20)), max(0.0f, min(1.0f, v._m30))); }
	__device__ __host__ float4x2 saturate(const float4x2 &v) { return float4x2(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01)), max(0.0f, min(1.0f, v._m10)), max(0.0f, min(1.0f, v._m11)), max(0.0f, min(1.0f, v._m20)), max(0.0f, min(1.0f, v._m21)), max(0.0f, min(1.0f, v._m30)), max(0.0f, min(1.0f, v._m31))); }
	__device__ __host__ float4x3 saturate(const float4x3 &v) { return float4x3(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01)), max(0.0f, min(1.0f, v._m02)), max(0.0f, min(1.0f, v._m10)), max(0.0f, min(1.0f, v._m11)), max(0.0f, min(1.0f, v._m12)), max(0.0f, min(1.0f, v._m20)), max(0.0f, min(1.0f, v._m21)), max(0.0f, min(1.0f, v._m22)), max(0.0f, min(1.0f, v._m30)), max(0.0f, min(1.0f, v._m31)), max(0.0f, min(1.0f, v._m32))); }
	__device__ __host__ float4x4 saturate(const float4x4 &v) { return float4x4(max(0.0f, min(1.0f, v._m00)), max(0.0f, min(1.0f, v._m01)), max(0.0f, min(1.0f, v._m02)), max(0.0f, min(1.0f, v._m03)), max(0.0f, min(1.0f, v._m10)), max(0.0f, min(1.0f, v._m11)), max(0.0f, min(1.0f, v._m12)), max(0.0f, min(1.0f, v._m13)), max(0.0f, min(1.0f, v._m20)), max(0.0f, min(1.0f, v._m21)), max(0.0f, min(1.0f, v._m22)), max(0.0f, min(1.0f, v._m23)), max(0.0f, min(1.0f, v._m30)), max(0.0f, min(1.0f, v._m31)), max(0.0f, min(1.0f, v._m32)), max(0.0f, min(1.0f, v._m33))); }



	__device__ __host__ float sign(const float &v) { return sign(v); }

	__device__ __host__ float_1 sign(const float_1 &v) { return float_1(sign(v.x)); }
	__device__ __host__ float_2 sign(const float_2 &v) { return float_2(sign(v.x), sign(v.y)); }
	__device__ __host__ float_3 sign(const float_3 &v) { return float_3(sign(v.x), sign(v.y), sign(v.z)); }
	__device__ __host__ float_4 sign(const float_4 &v) { return float_4(sign(v.x), sign(v.y), sign(v.z), sign(v.w)); }

	__device__ __host__ float1x1 sign(const float1x1 &v) { return float1x1(sign(v._m00)); }
	__device__ __host__ float1x2 sign(const float1x2 &v) { return float1x2(sign(v._m00), sign(v._m01)); }
	__device__ __host__ float1x3 sign(const float1x3 &v) { return float1x3(sign(v._m00), sign(v._m01), sign(v._m02)); }
	__device__ __host__ float1x4 sign(const float1x4 &v) { return float1x4(sign(v._m00), sign(v._m01), sign(v._m02), sign(v._m03)); }
	__device__ __host__ float2x1 sign(const float2x1 &v) { return float2x1(sign(v._m00), sign(v._m10)); }
	__device__ __host__ float2x2 sign(const float2x2 &v) { return float2x2(sign(v._m00), sign(v._m01), sign(v._m10), sign(v._m11)); }
	__device__ __host__ float2x3 sign(const float2x3 &v) { return float2x3(sign(v._m00), sign(v._m01), sign(v._m02), sign(v._m10), sign(v._m11), sign(v._m12)); }
	__device__ __host__ float2x4 sign(const float2x4 &v) { return float2x4(sign(v._m00), sign(v._m01), sign(v._m02), sign(v._m03), sign(v._m10), sign(v._m11), sign(v._m12), sign(v._m13)); }
	__device__ __host__ float3x1 sign(const float3x1 &v) { return float3x1(sign(v._m00), sign(v._m10), sign(v._m20)); }
	__device__ __host__ float3x2 sign(const float3x2 &v) { return float3x2(sign(v._m00), sign(v._m01), sign(v._m10), sign(v._m11), sign(v._m20), sign(v._m21)); }
	__device__ __host__ float3x3 sign(const float3x3 &v) { return float3x3(sign(v._m00), sign(v._m01), sign(v._m02), sign(v._m10), sign(v._m11), sign(v._m12), sign(v._m20), sign(v._m21), sign(v._m22)); }
	__device__ __host__ float3x4 sign(const float3x4 &v) { return float3x4(sign(v._m00), sign(v._m01), sign(v._m02), sign(v._m03), sign(v._m10), sign(v._m11), sign(v._m12), sign(v._m13), sign(v._m20), sign(v._m21), sign(v._m22), sign(v._m23)); }
	__device__ __host__ float4x1 sign(const float4x1 &v) { return float4x1(sign(v._m00), sign(v._m10), sign(v._m20), sign(v._m30)); }
	__device__ __host__ float4x2 sign(const float4x2 &v) { return float4x2(sign(v._m00), sign(v._m01), sign(v._m10), sign(v._m11), sign(v._m20), sign(v._m21), sign(v._m30), sign(v._m31)); }
	__device__ __host__ float4x3 sign(const float4x3 &v) { return float4x3(sign(v._m00), sign(v._m01), sign(v._m02), sign(v._m10), sign(v._m11), sign(v._m12), sign(v._m20), sign(v._m21), sign(v._m22), sign(v._m30), sign(v._m31), sign(v._m32)); }
	__device__ __host__ float4x4 sign(const float4x4 &v) { return float4x4(sign(v._m00), sign(v._m01), sign(v._m02), sign(v._m03), sign(v._m10), sign(v._m11), sign(v._m12), sign(v._m13), sign(v._m20), sign(v._m21), sign(v._m22), sign(v._m23), sign(v._m30), sign(v._m31), sign(v._m32), sign(v._m33)); }



	__device__ __host__ float_1 sin(const float_1 &v) { return float_1(sinf(v.x)); }
	__device__ __host__ float_2 sin(const float_2 &v) { return float_2(sinf(v.x), sinf(v.y)); }
	__device__ __host__ float_3 sin(const float_3 &v) { return float_3(sinf(v.x), sinf(v.y), sinf(v.z)); }
	__device__ __host__ float_4 sin(const float_4 &v) { return float_4(sinf(v.x), sinf(v.y), sinf(v.z), sinf(v.w)); }

	__device__ __host__ float1x1 sin(const float1x1 &v) { return float1x1(sinf(v._m00)); }
	__device__ __host__ float1x2 sin(const float1x2 &v) { return float1x2(sinf(v._m00), sinf(v._m01)); }
	__device__ __host__ float1x3 sin(const float1x3 &v) { return float1x3(sinf(v._m00), sinf(v._m01), sinf(v._m02)); }
	__device__ __host__ float1x4 sin(const float1x4 &v) { return float1x4(sinf(v._m00), sinf(v._m01), sinf(v._m02), sinf(v._m03)); }
	__device__ __host__ float2x1 sin(const float2x1 &v) { return float2x1(sinf(v._m00), sinf(v._m10)); }
	__device__ __host__ float2x2 sin(const float2x2 &v) { return float2x2(sinf(v._m00), sinf(v._m01), sinf(v._m10), sinf(v._m11)); }
	__device__ __host__ float2x3 sin(const float2x3 &v) { return float2x3(sinf(v._m00), sinf(v._m01), sinf(v._m02), sinf(v._m10), sinf(v._m11), sinf(v._m12)); }
	__device__ __host__ float2x4 sin(const float2x4 &v) { return float2x4(sinf(v._m00), sinf(v._m01), sinf(v._m02), sinf(v._m03), sinf(v._m10), sinf(v._m11), sinf(v._m12), sinf(v._m13)); }
	__device__ __host__ float3x1 sin(const float3x1 &v) { return float3x1(sinf(v._m00), sinf(v._m10), sinf(v._m20)); }
	__device__ __host__ float3x2 sin(const float3x2 &v) { return float3x2(sinf(v._m00), sinf(v._m01), sinf(v._m10), sinf(v._m11), sinf(v._m20), sinf(v._m21)); }
	__device__ __host__ float3x3 sin(const float3x3 &v) { return float3x3(sinf(v._m00), sinf(v._m01), sinf(v._m02), sinf(v._m10), sinf(v._m11), sinf(v._m12), sinf(v._m20), sinf(v._m21), sinf(v._m22)); }
	__device__ __host__ float3x4 sin(const float3x4 &v) { return float3x4(sinf(v._m00), sinf(v._m01), sinf(v._m02), sinf(v._m03), sinf(v._m10), sinf(v._m11), sinf(v._m12), sinf(v._m13), sinf(v._m20), sinf(v._m21), sinf(v._m22), sinf(v._m23)); }
	__device__ __host__ float4x1 sin(const float4x1 &v) { return float4x1(sinf(v._m00), sinf(v._m10), sinf(v._m20), sinf(v._m30)); }
	__device__ __host__ float4x2 sin(const float4x2 &v) { return float4x2(sinf(v._m00), sinf(v._m01), sinf(v._m10), sinf(v._m11), sinf(v._m20), sinf(v._m21), sinf(v._m30), sinf(v._m31)); }
	__device__ __host__ float4x3 sin(const float4x3 &v) { return float4x3(sinf(v._m00), sinf(v._m01), sinf(v._m02), sinf(v._m10), sinf(v._m11), sinf(v._m12), sinf(v._m20), sinf(v._m21), sinf(v._m22), sinf(v._m30), sinf(v._m31), sinf(v._m32)); }
	__device__ __host__ float4x4 sin(const float4x4 &v) { return float4x4(sinf(v._m00), sinf(v._m01), sinf(v._m02), sinf(v._m03), sinf(v._m10), sinf(v._m11), sinf(v._m12), sinf(v._m13), sinf(v._m20), sinf(v._m21), sinf(v._m22), sinf(v._m23), sinf(v._m30), sinf(v._m31), sinf(v._m32), sinf(v._m33)); }



	__device__ __host__ float sinh(const float &v) { return sinhf(v); }

	__device__ __host__ float_1 sinh(const float_1 &v) { return float_1(sinhf(v.x)); }
	__device__ __host__ float_2 sinh(const float_2 &v) { return float_2(sinhf(v.x), sinhf(v.y)); }
	__device__ __host__ float_3 sinh(const float_3 &v) { return float_3(sinhf(v.x), sinhf(v.y), sinhf(v.z)); }
	__device__ __host__ float_4 sinh(const float_4 &v) { return float_4(sinhf(v.x), sinhf(v.y), sinhf(v.z), sinhf(v.w)); }

	__device__ __host__ float1x1 sinh(const float1x1 &v) { return float1x1(sinhf(v._m00)); }
	__device__ __host__ float1x2 sinh(const float1x2 &v) { return float1x2(sinhf(v._m00), sinhf(v._m01)); }
	__device__ __host__ float1x3 sinh(const float1x3 &v) { return float1x3(sinhf(v._m00), sinhf(v._m01), sinhf(v._m02)); }
	__device__ __host__ float1x4 sinh(const float1x4 &v) { return float1x4(sinhf(v._m00), sinhf(v._m01), sinhf(v._m02), sinhf(v._m03)); }
	__device__ __host__ float2x1 sinh(const float2x1 &v) { return float2x1(sinhf(v._m00), sinhf(v._m10)); }
	__device__ __host__ float2x2 sinh(const float2x2 &v) { return float2x2(sinhf(v._m00), sinhf(v._m01), sinhf(v._m10), sinhf(v._m11)); }
	__device__ __host__ float2x3 sinh(const float2x3 &v) { return float2x3(sinhf(v._m00), sinhf(v._m01), sinhf(v._m02), sinhf(v._m10), sinhf(v._m11), sinhf(v._m12)); }
	__device__ __host__ float2x4 sinh(const float2x4 &v) { return float2x4(sinhf(v._m00), sinhf(v._m01), sinhf(v._m02), sinhf(v._m03), sinhf(v._m10), sinhf(v._m11), sinhf(v._m12), sinhf(v._m13)); }
	__device__ __host__ float3x1 sinh(const float3x1 &v) { return float3x1(sinhf(v._m00), sinhf(v._m10), sinhf(v._m20)); }
	__device__ __host__ float3x2 sinh(const float3x2 &v) { return float3x2(sinhf(v._m00), sinhf(v._m01), sinhf(v._m10), sinhf(v._m11), sinhf(v._m20), sinhf(v._m21)); }
	__device__ __host__ float3x3 sinh(const float3x3 &v) { return float3x3(sinhf(v._m00), sinhf(v._m01), sinhf(v._m02), sinhf(v._m10), sinhf(v._m11), sinhf(v._m12), sinhf(v._m20), sinhf(v._m21), sinhf(v._m22)); }
	__device__ __host__ float3x4 sinh(const float3x4 &v) { return float3x4(sinhf(v._m00), sinhf(v._m01), sinhf(v._m02), sinhf(v._m03), sinhf(v._m10), sinhf(v._m11), sinhf(v._m12), sinhf(v._m13), sinhf(v._m20), sinhf(v._m21), sinhf(v._m22), sinhf(v._m23)); }
	__device__ __host__ float4x1 sinh(const float4x1 &v) { return float4x1(sinhf(v._m00), sinhf(v._m10), sinhf(v._m20), sinhf(v._m30)); }
	__device__ __host__ float4x2 sinh(const float4x2 &v) { return float4x2(sinhf(v._m00), sinhf(v._m01), sinhf(v._m10), sinhf(v._m11), sinhf(v._m20), sinhf(v._m21), sinhf(v._m30), sinhf(v._m31)); }
	__device__ __host__ float4x3 sinh(const float4x3 &v) { return float4x3(sinhf(v._m00), sinhf(v._m01), sinhf(v._m02), sinhf(v._m10), sinhf(v._m11), sinhf(v._m12), sinhf(v._m20), sinhf(v._m21), sinhf(v._m22), sinhf(v._m30), sinhf(v._m31), sinhf(v._m32)); }
	__device__ __host__ float4x4 sinh(const float4x4 &v) { return float4x4(sinhf(v._m00), sinhf(v._m01), sinhf(v._m02), sinhf(v._m03), sinhf(v._m10), sinhf(v._m11), sinhf(v._m12), sinhf(v._m13), sinhf(v._m20), sinhf(v._m21), sinhf(v._m22), sinhf(v._m23), sinhf(v._m30), sinhf(v._m31), sinhf(v._m32), sinhf(v._m33)); }



	__device__ __host__ float smoothstepf(float a, float b, float c) { float t =saturate((c - a)/(b - a)); return t*t*(3.0f - t * 2.0f); }
	__device__ __host__ float smoothstep(const float &a, const float &b, const float &c) { return smoothstepf(a, b, c); }

	__device__ __host__ float_1 smoothstep(const float_1 &a, const float_1 &b, const float_1 &c) { return float_1(smoothstepf(a.x, b.x, c.x)); }
	__device__ __host__ float_2 smoothstep(const float_2 &a, const float_2 &b, const float_2 &c) { return float_2(smoothstepf(a.x, b.x, c.x), smoothstepf(a.y, b.y, c.y)); }
	__device__ __host__ float_3 smoothstep(const float_3 &a, const float_3 &b, const float_3 &c) { return float_3(smoothstepf(a.x, b.x, c.x), smoothstepf(a.y, b.y, c.y), smoothstepf(a.z, b.z, c.z)); }
	__device__ __host__ float_4 smoothstep(const float_4 &a, const float_4 &b, const float_4 &c) { return float_4(smoothstepf(a.x, b.x, c.x), smoothstepf(a.y, b.y, c.y), smoothstepf(a.z, b.z, c.z), smoothstepf(a.w, b.w, c.w)); }

	__device__ __host__ float1x1 smoothstep(const float1x1 &a, const float1x1 &b, const float1x1 &c) { return float1x1(smoothstepf(a._m00, b._m00, c._m00)); }
	__device__ __host__ float1x2 smoothstep(const float1x2 &a, const float1x2 &b, const float1x2 &c) { return float1x2(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01)); }
	__device__ __host__ float1x3 smoothstep(const float1x3 &a, const float1x3 &b, const float1x3 &c) { return float1x3(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01), smoothstepf(a._m02, b._m02, c._m02)); }
	__device__ __host__ float1x4 smoothstep(const float1x4 &a, const float1x4 &b, const float1x4 &c) { return float1x4(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01), smoothstepf(a._m02, b._m02, c._m02), smoothstepf(a._m03, b._m03, c._m03)); }
	__device__ __host__ float2x1 smoothstep(const float2x1 &a, const float2x1 &b, const float2x1 &c) { return float2x1(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m10, b._m10, c._m10)); }
	__device__ __host__ float2x2 smoothstep(const float2x2 &a, const float2x2 &b, const float2x2 &c) { return float2x2(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01), smoothstepf(a._m10, b._m10, c._m10), smoothstepf(a._m11, b._m11, c._m11)); }
	__device__ __host__ float2x3 smoothstep(const float2x3 &a, const float2x3 &b, const float2x3 &c) { return float2x3(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01), smoothstepf(a._m02, b._m02, c._m02), smoothstepf(a._m10, b._m10, c._m10), smoothstepf(a._m11, b._m11, c._m11), smoothstepf(a._m12, b._m12, c._m12)); }
	__device__ __host__ float2x4 smoothstep(const float2x4 &a, const float2x4 &b, const float2x4 &c) { return float2x4(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01), smoothstepf(a._m02, b._m02, c._m02), smoothstepf(a._m03, b._m03, c._m03), smoothstepf(a._m10, b._m10, c._m10), smoothstepf(a._m11, b._m11, c._m11), smoothstepf(a._m12, b._m12, c._m12), smoothstepf(a._m13, b._m13, c._m13)); }
	__device__ __host__ float3x1 smoothstep(const float3x1 &a, const float3x1 &b, const float3x1 &c) { return float3x1(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m10, b._m10, c._m10), smoothstepf(a._m20, b._m20, c._m20)); }
	__device__ __host__ float3x2 smoothstep(const float3x2 &a, const float3x2 &b, const float3x2 &c) { return float3x2(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01), smoothstepf(a._m10, b._m10, c._m10), smoothstepf(a._m11, b._m11, c._m11), smoothstepf(a._m20, b._m20, c._m20), smoothstepf(a._m21, b._m21, c._m21)); }
	__device__ __host__ float3x3 smoothstep(const float3x3 &a, const float3x3 &b, const float3x3 &c) { return float3x3(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01), smoothstepf(a._m02, b._m02, c._m02), smoothstepf(a._m10, b._m10, c._m10), smoothstepf(a._m11, b._m11, c._m11), smoothstepf(a._m12, b._m12, c._m12), smoothstepf(a._m20, b._m20, c._m20), smoothstepf(a._m21, b._m21, c._m21), smoothstepf(a._m22, b._m22, c._m22)); }
	__device__ __host__ float3x4 smoothstep(const float3x4 &a, const float3x4 &b, const float3x4 &c) { return float3x4(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01), smoothstepf(a._m02, b._m02, c._m02), smoothstepf(a._m03, b._m03, c._m03), smoothstepf(a._m10, b._m10, c._m10), smoothstepf(a._m11, b._m11, c._m11), smoothstepf(a._m12, b._m12, c._m12), smoothstepf(a._m13, b._m13, c._m13), smoothstepf(a._m20, b._m20, c._m20), smoothstepf(a._m21, b._m21, c._m21), smoothstepf(a._m22, b._m22, c._m22), smoothstepf(a._m23, b._m23, c._m23)); }
	__device__ __host__ float4x1 smoothstep(const float4x1 &a, const float4x1 &b, const float4x1 &c) { return float4x1(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m10, b._m10, c._m10), smoothstepf(a._m20, b._m20, c._m20), smoothstepf(a._m30, b._m30, c._m30)); }
	__device__ __host__ float4x2 smoothstep(const float4x2 &a, const float4x2 &b, const float4x2 &c) { return float4x2(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01), smoothstepf(a._m10, b._m10, c._m10), smoothstepf(a._m11, b._m11, c._m11), smoothstepf(a._m20, b._m20, c._m20), smoothstepf(a._m21, b._m21, c._m21), smoothstepf(a._m30, b._m30, c._m30), smoothstepf(a._m31, b._m31, c._m31)); }
	__device__ __host__ float4x3 smoothstep(const float4x3 &a, const float4x3 &b, const float4x3 &c) { return float4x3(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01), smoothstepf(a._m02, b._m02, c._m02), smoothstepf(a._m10, b._m10, c._m10), smoothstepf(a._m11, b._m11, c._m11), smoothstepf(a._m12, b._m12, c._m12), smoothstepf(a._m20, b._m20, c._m20), smoothstepf(a._m21, b._m21, c._m21), smoothstepf(a._m22, b._m22, c._m22), smoothstepf(a._m30, b._m30, c._m30), smoothstepf(a._m31, b._m31, c._m31), smoothstepf(a._m32, b._m32, c._m32)); }
	__device__ __host__ float4x4 smoothstep(const float4x4 &a, const float4x4 &b, const float4x4 &c) { return float4x4(smoothstepf(a._m00, b._m00, c._m00), smoothstepf(a._m01, b._m01, c._m01), smoothstepf(a._m02, b._m02, c._m02), smoothstepf(a._m03, b._m03, c._m03), smoothstepf(a._m10, b._m10, c._m10), smoothstepf(a._m11, b._m11, c._m11), smoothstepf(a._m12, b._m12, c._m12), smoothstepf(a._m13, b._m13, c._m13), smoothstepf(a._m20, b._m20, c._m20), smoothstepf(a._m21, b._m21, c._m21), smoothstepf(a._m22, b._m22, c._m22), smoothstepf(a._m23, b._m23, c._m23), smoothstepf(a._m30, b._m30, c._m30), smoothstepf(a._m31, b._m31, c._m31), smoothstepf(a._m32, b._m32, c._m32), smoothstepf(a._m33, b._m33, c._m33)); }



	__device__ __host__ float sqrt(const float &v) { return sqrtf(v); }

	__device__ __host__ float_1 sqrt(const float_1 &v) { return float_1(sqrtf(v.x)); }
	__device__ __host__ float_2 sqrt(const float_2 &v) { return float_2(sqrtf(v.x), sqrtf(v.y)); }
	__device__ __host__ float_3 sqrt(const float_3 &v) { return float_3(sqrtf(v.x), sqrtf(v.y), sqrtf(v.z)); }
	__device__ __host__ float_4 sqrt(const float_4 &v) { return float_4(sqrtf(v.x), sqrtf(v.y), sqrtf(v.z), sqrtf(v.w)); }

	__device__ __host__ float1x1 sqrt(const float1x1 &v) { return float1x1(sqrtf(v._m00)); }
	__device__ __host__ float1x2 sqrt(const float1x2 &v) { return float1x2(sqrtf(v._m00), sqrtf(v._m01)); }
	__device__ __host__ float1x3 sqrt(const float1x3 &v) { return float1x3(sqrtf(v._m00), sqrtf(v._m01), sqrtf(v._m02)); }
	__device__ __host__ float1x4 sqrt(const float1x4 &v) { return float1x4(sqrtf(v._m00), sqrtf(v._m01), sqrtf(v._m02), sqrtf(v._m03)); }
	__device__ __host__ float2x1 sqrt(const float2x1 &v) { return float2x1(sqrtf(v._m00), sqrtf(v._m10)); }
	__device__ __host__ float2x2 sqrt(const float2x2 &v) { return float2x2(sqrtf(v._m00), sqrtf(v._m01), sqrtf(v._m10), sqrtf(v._m11)); }
	__device__ __host__ float2x3 sqrt(const float2x3 &v) { return float2x3(sqrtf(v._m00), sqrtf(v._m01), sqrtf(v._m02), sqrtf(v._m10), sqrtf(v._m11), sqrtf(v._m12)); }
	__device__ __host__ float2x4 sqrt(const float2x4 &v) { return float2x4(sqrtf(v._m00), sqrtf(v._m01), sqrtf(v._m02), sqrtf(v._m03), sqrtf(v._m10), sqrtf(v._m11), sqrtf(v._m12), sqrtf(v._m13)); }
	__device__ __host__ float3x1 sqrt(const float3x1 &v) { return float3x1(sqrtf(v._m00), sqrtf(v._m10), sqrtf(v._m20)); }
	__device__ __host__ float3x2 sqrt(const float3x2 &v) { return float3x2(sqrtf(v._m00), sqrtf(v._m01), sqrtf(v._m10), sqrtf(v._m11), sqrtf(v._m20), sqrtf(v._m21)); }
	__device__ __host__ float3x3 sqrt(const float3x3 &v) { return float3x3(sqrtf(v._m00), sqrtf(v._m01), sqrtf(v._m02), sqrtf(v._m10), sqrtf(v._m11), sqrtf(v._m12), sqrtf(v._m20), sqrtf(v._m21), sqrtf(v._m22)); }
	__device__ __host__ float3x4 sqrt(const float3x4 &v) { return float3x4(sqrtf(v._m00), sqrtf(v._m01), sqrtf(v._m02), sqrtf(v._m03), sqrtf(v._m10), sqrtf(v._m11), sqrtf(v._m12), sqrtf(v._m13), sqrtf(v._m20), sqrtf(v._m21), sqrtf(v._m22), sqrtf(v._m23)); }
	__device__ __host__ float4x1 sqrt(const float4x1 &v) { return float4x1(sqrtf(v._m00), sqrtf(v._m10), sqrtf(v._m20), sqrtf(v._m30)); }
	__device__ __host__ float4x2 sqrt(const float4x2 &v) { return float4x2(sqrtf(v._m00), sqrtf(v._m01), sqrtf(v._m10), sqrtf(v._m11), sqrtf(v._m20), sqrtf(v._m21), sqrtf(v._m30), sqrtf(v._m31)); }
	__device__ __host__ float4x3 sqrt(const float4x3 &v) { return float4x3(sqrtf(v._m00), sqrtf(v._m01), sqrtf(v._m02), sqrtf(v._m10), sqrtf(v._m11), sqrtf(v._m12), sqrtf(v._m20), sqrtf(v._m21), sqrtf(v._m22), sqrtf(v._m30), sqrtf(v._m31), sqrtf(v._m32)); }
	__device__ __host__ float4x4 sqrt(const float4x4 &v) { return float4x4(sqrtf(v._m00), sqrtf(v._m01), sqrtf(v._m02), sqrtf(v._m03), sqrtf(v._m10), sqrtf(v._m11), sqrtf(v._m12), sqrtf(v._m13), sqrtf(v._m20), sqrtf(v._m21), sqrtf(v._m22), sqrtf(v._m23), sqrtf(v._m30), sqrtf(v._m31), sqrtf(v._m32), sqrtf(v._m33)); }



	__device__ __host__ float step(const float &a, const float &b) { return a >= b ? 1.0f : 0.0f; }

	__device__ __host__ float_1 step(const float_1 &a, const float_1 &b) { return float_1(a.x >= b.x ? 1.0f : 0.0f); }
	__device__ __host__ float_2 step(const float_2 &a, const float_2 &b) { return float_2(a.x >= b.x ? 1.0f : 0.0f, a.y >= b.y ? 1.0f : 0.0f); }
	__device__ __host__ float_3 step(const float_3 &a, const float_3 &b) { return float_3(a.x >= b.x ? 1.0f : 0.0f, a.y >= b.y ? 1.0f : 0.0f, a.z >= b.z ? 1.0f : 0.0f); }
	__device__ __host__ float_4 step(const float_4 &a, const float_4 &b) { return float_4(a.x >= b.x ? 1.0f : 0.0f, a.y >= b.y ? 1.0f : 0.0f, a.z >= b.z ? 1.0f : 0.0f, a.w >= b.w ? 1.0f : 0.0f); }

	__device__ __host__ float1x1 step(const float1x1 &a, const float1x1 &b) { return float1x1(a._m00 >= b._m00 ? 1.0f : 0.0f); }
	__device__ __host__ float1x2 step(const float1x2 &a, const float1x2 &b) { return float1x2(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f); }
	__device__ __host__ float1x3 step(const float1x3 &a, const float1x3 &b) { return float1x3(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f, a._m02 >= b._m02 ? 1.0f : 0.0f); }
	__device__ __host__ float1x4 step(const float1x4 &a, const float1x4 &b) { return float1x4(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f, a._m02 >= b._m02 ? 1.0f : 0.0f, a._m03 >= b._m03 ? 1.0f : 0.0f); }
	__device__ __host__ float2x1 step(const float2x1 &a, const float2x1 &b) { return float2x1(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f); }
	__device__ __host__ float2x2 step(const float2x2 &a, const float2x2 &b) { return float2x2(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f, a._m11 >= b._m11 ? 1.0f : 0.0f); }
	__device__ __host__ float2x3 step(const float2x3 &a, const float2x3 &b) { return float2x3(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f, a._m02 >= b._m02 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f, a._m11 >= b._m11 ? 1.0f : 0.0f, a._m12 >= b._m12 ? 1.0f : 0.0f); }
	__device__ __host__ float2x4 step(const float2x4 &a, const float2x4 &b) { return float2x4(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f, a._m02 >= b._m02 ? 1.0f : 0.0f, a._m03 >= b._m03 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f, a._m11 >= b._m11 ? 1.0f : 0.0f, a._m12 >= b._m12 ? 1.0f : 0.0f, a._m13 >= b._m13 ? 1.0f : 0.0f); }
	__device__ __host__ float3x1 step(const float3x1 &a, const float3x1 &b) { return float3x1(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f, a._m20 >= b._m20 ? 1.0f : 0.0f); }
	__device__ __host__ float3x2 step(const float3x2 &a, const float3x2 &b) { return float3x2(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f, a._m11 >= b._m11 ? 1.0f : 0.0f, a._m20 >= b._m20 ? 1.0f : 0.0f, a._m21 >= b._m21 ? 1.0f : 0.0f); }
	__device__ __host__ float3x3 step(const float3x3 &a, const float3x3 &b) { return float3x3(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f, a._m02 >= b._m02 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f, a._m11 >= b._m11 ? 1.0f : 0.0f, a._m12 >= b._m12 ? 1.0f : 0.0f, a._m20 >= b._m20 ? 1.0f : 0.0f, a._m21 >= b._m21 ? 1.0f : 0.0f, a._m22 >= b._m22 ? 1.0f : 0.0f); }
	__device__ __host__ float3x4 step(const float3x4 &a, const float3x4 &b) { return float3x4(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f, a._m02 >= b._m02 ? 1.0f : 0.0f, a._m03 >= b._m03 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f, a._m11 >= b._m11 ? 1.0f : 0.0f, a._m12 >= b._m12 ? 1.0f : 0.0f, a._m13 >= b._m13 ? 1.0f : 0.0f, a._m20 >= b._m20 ? 1.0f : 0.0f, a._m21 >= b._m21 ? 1.0f : 0.0f, a._m22 >= b._m22 ? 1.0f : 0.0f, a._m23 >= b._m23 ? 1.0f : 0.0f); }
	__device__ __host__ float4x1 step(const float4x1 &a, const float4x1 &b) { return float4x1(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f, a._m20 >= b._m20 ? 1.0f : 0.0f, a._m30 >= b._m30 ? 1.0f : 0.0f); }
	__device__ __host__ float4x2 step(const float4x2 &a, const float4x2 &b) { return float4x2(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f, a._m11 >= b._m11 ? 1.0f : 0.0f, a._m20 >= b._m20 ? 1.0f : 0.0f, a._m21 >= b._m21 ? 1.0f : 0.0f, a._m30 >= b._m30 ? 1.0f : 0.0f, a._m31 >= b._m31 ? 1.0f : 0.0f); }
	__device__ __host__ float4x3 step(const float4x3 &a, const float4x3 &b) { return float4x3(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f, a._m02 >= b._m02 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f, a._m11 >= b._m11 ? 1.0f : 0.0f, a._m12 >= b._m12 ? 1.0f : 0.0f, a._m20 >= b._m20 ? 1.0f : 0.0f, a._m21 >= b._m21 ? 1.0f : 0.0f, a._m22 >= b._m22 ? 1.0f : 0.0f, a._m30 >= b._m30 ? 1.0f : 0.0f, a._m31 >= b._m31 ? 1.0f : 0.0f, a._m32 >= b._m32 ? 1.0f : 0.0f); }
	__device__ __host__ float4x4 step(const float4x4 &a, const float4x4 &b) { return float4x4(a._m00 >= b._m00 ? 1.0f : 0.0f, a._m01 >= b._m01 ? 1.0f : 0.0f, a._m02 >= b._m02 ? 1.0f : 0.0f, a._m03 >= b._m03 ? 1.0f : 0.0f, a._m10 >= b._m10 ? 1.0f : 0.0f, a._m11 >= b._m11 ? 1.0f : 0.0f, a._m12 >= b._m12 ? 1.0f : 0.0f, a._m13 >= b._m13 ? 1.0f : 0.0f, a._m20 >= b._m20 ? 1.0f : 0.0f, a._m21 >= b._m21 ? 1.0f : 0.0f, a._m22 >= b._m22 ? 1.0f : 0.0f, a._m23 >= b._m23 ? 1.0f : 0.0f, a._m30 >= b._m30 ? 1.0f : 0.0f, a._m31 >= b._m31 ? 1.0f : 0.0f, a._m32 >= b._m32 ? 1.0f : 0.0f, a._m33 >= b._m33 ? 1.0f : 0.0f); }



	__device__ __host__ float tan(const float &v) { return tanf(v); }

	__device__ __host__ float_1 tan(const float_1 &v) { return float_1(tanf(v.x)); }
	__device__ __host__ float_2 tan(const float_2 &v) { return float_2(tanf(v.x), tanf(v.y)); }
	__device__ __host__ float_3 tan(const float_3 &v) { return float_3(tanf(v.x), tanf(v.y), tanf(v.z)); }
	__device__ __host__ float_4 tan(const float_4 &v) { return float_4(tanf(v.x), tanf(v.y), tanf(v.z), tanf(v.w)); }

	__device__ __host__ float1x1 tan(const float1x1 &v) { return float1x1(tanf(v._m00)); }
	__device__ __host__ float1x2 tan(const float1x2 &v) { return float1x2(tanf(v._m00), tanf(v._m01)); }
	__device__ __host__ float1x3 tan(const float1x3 &v) { return float1x3(tanf(v._m00), tanf(v._m01), tanf(v._m02)); }
	__device__ __host__ float1x4 tan(const float1x4 &v) { return float1x4(tanf(v._m00), tanf(v._m01), tanf(v._m02), tanf(v._m03)); }
	__device__ __host__ float2x1 tan(const float2x1 &v) { return float2x1(tanf(v._m00), tanf(v._m10)); }
	__device__ __host__ float2x2 tan(const float2x2 &v) { return float2x2(tanf(v._m00), tanf(v._m01), tanf(v._m10), tanf(v._m11)); }
	__device__ __host__ float2x3 tan(const float2x3 &v) { return float2x3(tanf(v._m00), tanf(v._m01), tanf(v._m02), tanf(v._m10), tanf(v._m11), tanf(v._m12)); }
	__device__ __host__ float2x4 tan(const float2x4 &v) { return float2x4(tanf(v._m00), tanf(v._m01), tanf(v._m02), tanf(v._m03), tanf(v._m10), tanf(v._m11), tanf(v._m12), tanf(v._m13)); }
	__device__ __host__ float3x1 tan(const float3x1 &v) { return float3x1(tanf(v._m00), tanf(v._m10), tanf(v._m20)); }
	__device__ __host__ float3x2 tan(const float3x2 &v) { return float3x2(tanf(v._m00), tanf(v._m01), tanf(v._m10), tanf(v._m11), tanf(v._m20), tanf(v._m21)); }
	__device__ __host__ float3x3 tan(const float3x3 &v) { return float3x3(tanf(v._m00), tanf(v._m01), tanf(v._m02), tanf(v._m10), tanf(v._m11), tanf(v._m12), tanf(v._m20), tanf(v._m21), tanf(v._m22)); }
	__device__ __host__ float3x4 tan(const float3x4 &v) { return float3x4(tanf(v._m00), tanf(v._m01), tanf(v._m02), tanf(v._m03), tanf(v._m10), tanf(v._m11), tanf(v._m12), tanf(v._m13), tanf(v._m20), tanf(v._m21), tanf(v._m22), tanf(v._m23)); }
	__device__ __host__ float4x1 tan(const float4x1 &v) { return float4x1(tanf(v._m00), tanf(v._m10), tanf(v._m20), tanf(v._m30)); }
	__device__ __host__ float4x2 tan(const float4x2 &v) { return float4x2(tanf(v._m00), tanf(v._m01), tanf(v._m10), tanf(v._m11), tanf(v._m20), tanf(v._m21), tanf(v._m30), tanf(v._m31)); }
	__device__ __host__ float4x3 tan(const float4x3 &v) { return float4x3(tanf(v._m00), tanf(v._m01), tanf(v._m02), tanf(v._m10), tanf(v._m11), tanf(v._m12), tanf(v._m20), tanf(v._m21), tanf(v._m22), tanf(v._m30), tanf(v._m31), tanf(v._m32)); }
	__device__ __host__ float4x4 tan(const float4x4 &v) { return float4x4(tanf(v._m00), tanf(v._m01), tanf(v._m02), tanf(v._m03), tanf(v._m10), tanf(v._m11), tanf(v._m12), tanf(v._m13), tanf(v._m20), tanf(v._m21), tanf(v._m22), tanf(v._m23), tanf(v._m30), tanf(v._m31), tanf(v._m32), tanf(v._m33)); }



	__device__ __host__ float tanh(const float &v) { return tanhf(v); }

	__device__ __host__ float_1 tanh(const float_1 &v) { return float_1(tanhf(v.x)); }
	__device__ __host__ float_2 tanh(const float_2 &v) { return float_2(tanhf(v.x), tanhf(v.y)); }
	__device__ __host__ float_3 tanh(const float_3 &v) { return float_3(tanhf(v.x), tanhf(v.y), tanhf(v.z)); }
	__device__ __host__ float_4 tanh(const float_4 &v) { return float_4(tanhf(v.x), tanhf(v.y), tanhf(v.z), tanhf(v.w)); }

	__device__ __host__ float1x1 tanh(const float1x1 &v) { return float1x1(tanhf(v._m00)); }
	__device__ __host__ float1x2 tanh(const float1x2 &v) { return float1x2(tanhf(v._m00), tanhf(v._m01)); }
	__device__ __host__ float1x3 tanh(const float1x3 &v) { return float1x3(tanhf(v._m00), tanhf(v._m01), tanhf(v._m02)); }
	__device__ __host__ float1x4 tanh(const float1x4 &v) { return float1x4(tanhf(v._m00), tanhf(v._m01), tanhf(v._m02), tanhf(v._m03)); }
	__device__ __host__ float2x1 tanh(const float2x1 &v) { return float2x1(tanhf(v._m00), tanhf(v._m10)); }
	__device__ __host__ float2x2 tanh(const float2x2 &v) { return float2x2(tanhf(v._m00), tanhf(v._m01), tanhf(v._m10), tanhf(v._m11)); }
	__device__ __host__ float2x3 tanh(const float2x3 &v) { return float2x3(tanhf(v._m00), tanhf(v._m01), tanhf(v._m02), tanhf(v._m10), tanhf(v._m11), tanhf(v._m12)); }
	__device__ __host__ float2x4 tanh(const float2x4 &v) { return float2x4(tanhf(v._m00), tanhf(v._m01), tanhf(v._m02), tanhf(v._m03), tanhf(v._m10), tanhf(v._m11), tanhf(v._m12), tanhf(v._m13)); }
	__device__ __host__ float3x1 tanh(const float3x1 &v) { return float3x1(tanhf(v._m00), tanhf(v._m10), tanhf(v._m20)); }
	__device__ __host__ float3x2 tanh(const float3x2 &v) { return float3x2(tanhf(v._m00), tanhf(v._m01), tanhf(v._m10), tanhf(v._m11), tanhf(v._m20), tanhf(v._m21)); }
	__device__ __host__ float3x3 tanh(const float3x3 &v) { return float3x3(tanhf(v._m00), tanhf(v._m01), tanhf(v._m02), tanhf(v._m10), tanhf(v._m11), tanhf(v._m12), tanhf(v._m20), tanhf(v._m21), tanhf(v._m22)); }
	__device__ __host__ float3x4 tanh(const float3x4 &v) { return float3x4(tanhf(v._m00), tanhf(v._m01), tanhf(v._m02), tanhf(v._m03), tanhf(v._m10), tanhf(v._m11), tanhf(v._m12), tanhf(v._m13), tanhf(v._m20), tanhf(v._m21), tanhf(v._m22), tanhf(v._m23)); }
	__device__ __host__ float4x1 tanh(const float4x1 &v) { return float4x1(tanhf(v._m00), tanhf(v._m10), tanhf(v._m20), tanhf(v._m30)); }
	__device__ __host__ float4x2 tanh(const float4x2 &v) { return float4x2(tanhf(v._m00), tanhf(v._m01), tanhf(v._m10), tanhf(v._m11), tanhf(v._m20), tanhf(v._m21), tanhf(v._m30), tanhf(v._m31)); }
	__device__ __host__ float4x3 tanh(const float4x3 &v) { return float4x3(tanhf(v._m00), tanhf(v._m01), tanhf(v._m02), tanhf(v._m10), tanhf(v._m11), tanhf(v._m12), tanhf(v._m20), tanhf(v._m21), tanhf(v._m22), tanhf(v._m30), tanhf(v._m31), tanhf(v._m32)); }
	__device__ __host__ float4x4 tanh(const float4x4 &v) { return float4x4(tanhf(v._m00), tanhf(v._m01), tanhf(v._m02), tanhf(v._m03), tanhf(v._m10), tanhf(v._m11), tanhf(v._m12), tanhf(v._m13), tanhf(v._m20), tanhf(v._m21), tanhf(v._m22), tanhf(v._m23), tanhf(v._m30), tanhf(v._m31), tanhf(v._m32), tanhf(v._m33)); }



	__device__ __host__ float1x1 transpose(const float1x1 &a) { return float1x1(a._m00); }
	__device__ __host__ float1x2 transpose(const float2x1 &a) { return float1x2(a._m00, a._m10); }
	__device__ __host__ float1x3 transpose(const float3x1 &a) { return float1x3(a._m00, a._m10, a._m20); }
	__device__ __host__ float1x4 transpose(const float4x1 &a) { return float1x4(a._m00, a._m10, a._m20, a._m30); }
	__device__ __host__ float2x1 transpose(const float1x2 &a) { return float2x1(a._m00, a._m01); }
	__device__ __host__ float2x2 transpose(const float2x2 &a) { return float2x2(a._m00, a._m10, a._m01, a._m11); }
	__device__ __host__ float2x3 transpose(const float3x2 &a) { return float2x3(a._m00, a._m10, a._m20, a._m01, a._m11, a._m21); }
	__device__ __host__ float2x4 transpose(const float4x2 &a) { return float2x4(a._m00, a._m10, a._m20, a._m30, a._m01, a._m11, a._m21, a._m31); }
	__device__ __host__ float3x1 transpose(const float1x3 &a) { return float3x1(a._m00, a._m01, a._m02); }
	__device__ __host__ float3x2 transpose(const float2x3 &a) { return float3x2(a._m00, a._m10, a._m01, a._m11, a._m02, a._m12); }
	__device__ __host__ float3x3 transpose(const float3x3 &a) { return float3x3(a._m00, a._m10, a._m20, a._m01, a._m11, a._m21, a._m02, a._m12, a._m22); }
	__device__ __host__ float3x4 transpose(const float4x3 &a) { return float3x4(a._m00, a._m10, a._m20, a._m30, a._m01, a._m11, a._m21, a._m31, a._m02, a._m12, a._m22, a._m32); }
	__device__ __host__ float4x1 transpose(const float1x4 &a) { return float4x1(a._m00, a._m01, a._m02, a._m03); }
	__device__ __host__ float4x2 transpose(const float2x4 &a) { return float4x2(a._m00, a._m10, a._m01, a._m11, a._m02, a._m12, a._m03, a._m13); }
	__device__ __host__ float4x3 transpose(const float3x4 &a) { return float4x3(a._m00, a._m10, a._m20, a._m01, a._m11, a._m21, a._m02, a._m12, a._m22, a._m03, a._m13, a._m23); }
	__device__ __host__ float4x4 transpose(const float4x4 &a) { return float4x4(a._m00, a._m10, a._m20, a._m30, a._m01, a._m11, a._m21, a._m31, a._m02, a._m12, a._m22, a._m32, a._m03, a._m13, a._m23, a._m33); }




                
#endif
	__device__ __host__ int_1::int_1(const float_1 &v) { new (this) int_1((int)v.x); }
	__device__ __host__ int_1::int_1(const uint_1 &v) { new (this) int_1((int)v.x); }

	__device__ __host__ int_2::int_2(const float_2 &v) { new (this) int_2((int)v.x,(int)v.y); }
	__device__ __host__ int_2::int_2(const uint_2 &v) { new (this) int_2((int)v.x,(int)v.y); }

	__device__ __host__ int_3::int_3(const float_3 &v) { new (this) int_3((int)v.x,(int)v.y,(int)v.z); }
	__device__ __host__ int_3::int_3(const uint_3 &v) { new (this) int_3((int)v.x,(int)v.y,(int)v.z); }

	__device__ __host__ int_4::int_4(const float_4 &v) { new (this) int_4((int)v.x,(int)v.y,(int)v.z,(int)v.w); }
	__device__ __host__ int_4::int_4(const uint_4 &v) { new (this) int_4((int)v.x,(int)v.y,(int)v.z,(int)v.w); }

	int1x1::operator float1x1() const { return float1x1((float)this->_m00); }
	int1x1::operator uint1x1() const { return uint1x1((uint)this->_m00); }

	int1x2::operator float1x2() const { return float1x2((float)this->_m00,(float)this->_m01); }
	int1x2::operator uint1x2() const { return uint1x2((uint)this->_m00,(uint)this->_m01); }

	int1x3::operator float1x3() const { return float1x3((float)this->_m00,(float)this->_m01,(float)this->_m02); }
	int1x3::operator uint1x3() const { return uint1x3((uint)this->_m00,(uint)this->_m01,(uint)this->_m02); }

	int1x4::operator float1x4() const { return float1x4((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m03); }
	int1x4::operator uint1x4() const { return uint1x4((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m03); }

	int2x1::operator float2x1() const { return float2x1((float)this->_m00,(float)this->_m10); }
	int2x1::operator uint2x1() const { return uint2x1((uint)this->_m00,(uint)this->_m10); }

	int2x2::operator float2x2() const { return float2x2((float)this->_m00,(float)this->_m01,(float)this->_m10,(float)this->_m11); }
	int2x2::operator uint2x2() const { return uint2x2((uint)this->_m00,(uint)this->_m01,(uint)this->_m10,(uint)this->_m11); }

	int2x3::operator float2x3() const { return float2x3((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m10,(float)this->_m11,(float)this->_m12); }
	int2x3::operator uint2x3() const { return uint2x3((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12); }

	int2x4::operator float2x4() const { return float2x4((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m03,(float)this->_m10,(float)this->_m11,(float)this->_m12,(float)this->_m13); }
	int2x4::operator uint2x4() const { return uint2x4((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m03,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12,(uint)this->_m13); }

	int3x1::operator float3x1() const { return float3x1((float)this->_m00,(float)this->_m10,(float)this->_m20); }
	int3x1::operator uint3x1() const { return uint3x1((uint)this->_m00,(uint)this->_m10,(uint)this->_m20); }

	int3x2::operator float3x2() const { return float3x2((float)this->_m00,(float)this->_m01,(float)this->_m10,(float)this->_m11,(float)this->_m20,(float)this->_m21); }
	int3x2::operator uint3x2() const { return uint3x2((uint)this->_m00,(uint)this->_m01,(uint)this->_m10,(uint)this->_m11,(uint)this->_m20,(uint)this->_m21); }

	int3x3::operator float3x3() const { return float3x3((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m10,(float)this->_m11,(float)this->_m12,(float)this->_m20,(float)this->_m21,(float)this->_m22); }
	int3x3::operator uint3x3() const { return uint3x3((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12,(uint)this->_m20,(uint)this->_m21,(uint)this->_m22); }

	int3x4::operator float3x4() const { return float3x4((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m03,(float)this->_m10,(float)this->_m11,(float)this->_m12,(float)this->_m13,(float)this->_m20,(float)this->_m21,(float)this->_m22,(float)this->_m23); }
	int3x4::operator uint3x4() const { return uint3x4((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m03,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12,(uint)this->_m13,(uint)this->_m20,(uint)this->_m21,(uint)this->_m22,(uint)this->_m23); }

	int4x1::operator float4x1() const { return float4x1((float)this->_m00,(float)this->_m10,(float)this->_m20,(float)this->_m30); }
	int4x1::operator uint4x1() const { return uint4x1((uint)this->_m00,(uint)this->_m10,(uint)this->_m20,(uint)this->_m30); }

	int4x2::operator float4x2() const { return float4x2((float)this->_m00,(float)this->_m01,(float)this->_m10,(float)this->_m11,(float)this->_m20,(float)this->_m21,(float)this->_m30,(float)this->_m31); }
	int4x2::operator uint4x2() const { return uint4x2((uint)this->_m00,(uint)this->_m01,(uint)this->_m10,(uint)this->_m11,(uint)this->_m20,(uint)this->_m21,(uint)this->_m30,(uint)this->_m31); }

	int4x3::operator float4x3() const { return float4x3((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m10,(float)this->_m11,(float)this->_m12,(float)this->_m20,(float)this->_m21,(float)this->_m22,(float)this->_m30,(float)this->_m31,(float)this->_m32); }
	int4x3::operator uint4x3() const { return uint4x3((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12,(uint)this->_m20,(uint)this->_m21,(uint)this->_m22,(uint)this->_m30,(uint)this->_m31,(uint)this->_m32); }

	int4x4::operator float4x4() const { return float4x4((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m03,(float)this->_m10,(float)this->_m11,(float)this->_m12,(float)this->_m13,(float)this->_m20,(float)this->_m21,(float)this->_m22,(float)this->_m23,(float)this->_m30,(float)this->_m31,(float)this->_m32,(float)this->_m33); }
	int4x4::operator uint4x4() const { return uint4x4((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m03,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12,(uint)this->_m13,(uint)this->_m20,(uint)this->_m21,(uint)this->_m22,(uint)this->_m23,(uint)this->_m30,(uint)this->_m31,(uint)this->_m32,(uint)this->_m33); }

	__device__ __host__ float_1::float_1(const int_1 &v) { new (this) float_1((float)v.x); }
	__device__ __host__ float_1::float_1(const uint_1 &v) { new (this) float_1((float)v.x); }

	__device__ __host__ float_2::float_2(const int_2 &v) { new (this) float_2((float)v.x,(float)v.y); }
	__device__ __host__ float_2::float_2(const uint_2 &v) { new (this) float_2((float)v.x,(float)v.y); }

	__device__ __host__ float_3::float_3(const int_3 &v) { new (this) float_3((float)v.x,(float)v.y,(float)v.z); }
	__device__ __host__ float_3::float_3(const uint_3 &v) { new (this) float_3((float)v.x,(float)v.y,(float)v.z); }

	__device__ __host__ float_4::float_4(const int_4 &v) { new (this) float_4((float)v.x,(float)v.y,(float)v.z,(float)v.w); }
	__device__ __host__ float_4::float_4(const uint_4 &v) { new (this) float_4((float)v.x,(float)v.y,(float)v.z,(float)v.w); }

	float1x1::operator int1x1() const { return int1x1((int)this->_m00); }
	float1x1::operator uint1x1() const { return uint1x1((uint)this->_m00); }

	float1x2::operator int1x2() const { return int1x2((int)this->_m00,(int)this->_m01); }
	float1x2::operator uint1x2() const { return uint1x2((uint)this->_m00,(uint)this->_m01); }

	float1x3::operator int1x3() const { return int1x3((int)this->_m00,(int)this->_m01,(int)this->_m02); }
	float1x3::operator uint1x3() const { return uint1x3((uint)this->_m00,(uint)this->_m01,(uint)this->_m02); }

	float1x4::operator int1x4() const { return int1x4((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m03); }
	float1x4::operator uint1x4() const { return uint1x4((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m03); }

	float2x1::operator int2x1() const { return int2x1((int)this->_m00,(int)this->_m10); }
	float2x1::operator uint2x1() const { return uint2x1((uint)this->_m00,(uint)this->_m10); }

	float2x2::operator int2x2() const { return int2x2((int)this->_m00,(int)this->_m01,(int)this->_m10,(int)this->_m11); }
	float2x2::operator uint2x2() const { return uint2x2((uint)this->_m00,(uint)this->_m01,(uint)this->_m10,(uint)this->_m11); }

	float2x3::operator int2x3() const { return int2x3((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m10,(int)this->_m11,(int)this->_m12); }
	float2x3::operator uint2x3() const { return uint2x3((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12); }

	float2x4::operator int2x4() const { return int2x4((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m03,(int)this->_m10,(int)this->_m11,(int)this->_m12,(int)this->_m13); }
	float2x4::operator uint2x4() const { return uint2x4((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m03,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12,(uint)this->_m13); }

	float3x1::operator int3x1() const { return int3x1((int)this->_m00,(int)this->_m10,(int)this->_m20); }
	float3x1::operator uint3x1() const { return uint3x1((uint)this->_m00,(uint)this->_m10,(uint)this->_m20); }

	float3x2::operator int3x2() const { return int3x2((int)this->_m00,(int)this->_m01,(int)this->_m10,(int)this->_m11,(int)this->_m20,(int)this->_m21); }
	float3x2::operator uint3x2() const { return uint3x2((uint)this->_m00,(uint)this->_m01,(uint)this->_m10,(uint)this->_m11,(uint)this->_m20,(uint)this->_m21); }

	float3x3::operator int3x3() const { return int3x3((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m10,(int)this->_m11,(int)this->_m12,(int)this->_m20,(int)this->_m21,(int)this->_m22); }
	float3x3::operator uint3x3() const { return uint3x3((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12,(uint)this->_m20,(uint)this->_m21,(uint)this->_m22); }

	float3x4::operator int3x4() const { return int3x4((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m03,(int)this->_m10,(int)this->_m11,(int)this->_m12,(int)this->_m13,(int)this->_m20,(int)this->_m21,(int)this->_m22,(int)this->_m23); }
	float3x4::operator uint3x4() const { return uint3x4((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m03,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12,(uint)this->_m13,(uint)this->_m20,(uint)this->_m21,(uint)this->_m22,(uint)this->_m23); }

	float4x1::operator int4x1() const { return int4x1((int)this->_m00,(int)this->_m10,(int)this->_m20,(int)this->_m30); }
	float4x1::operator uint4x1() const { return uint4x1((uint)this->_m00,(uint)this->_m10,(uint)this->_m20,(uint)this->_m30); }

	float4x2::operator int4x2() const { return int4x2((int)this->_m00,(int)this->_m01,(int)this->_m10,(int)this->_m11,(int)this->_m20,(int)this->_m21,(int)this->_m30,(int)this->_m31); }
	float4x2::operator uint4x2() const { return uint4x2((uint)this->_m00,(uint)this->_m01,(uint)this->_m10,(uint)this->_m11,(uint)this->_m20,(uint)this->_m21,(uint)this->_m30,(uint)this->_m31); }

	float4x3::operator int4x3() const { return int4x3((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m10,(int)this->_m11,(int)this->_m12,(int)this->_m20,(int)this->_m21,(int)this->_m22,(int)this->_m30,(int)this->_m31,(int)this->_m32); }
	float4x3::operator uint4x3() const { return uint4x3((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12,(uint)this->_m20,(uint)this->_m21,(uint)this->_m22,(uint)this->_m30,(uint)this->_m31,(uint)this->_m32); }

	float4x4::operator int4x4() const { return int4x4((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m03,(int)this->_m10,(int)this->_m11,(int)this->_m12,(int)this->_m13,(int)this->_m20,(int)this->_m21,(int)this->_m22,(int)this->_m23,(int)this->_m30,(int)this->_m31,(int)this->_m32,(int)this->_m33); }
	float4x4::operator uint4x4() const { return uint4x4((uint)this->_m00,(uint)this->_m01,(uint)this->_m02,(uint)this->_m03,(uint)this->_m10,(uint)this->_m11,(uint)this->_m12,(uint)this->_m13,(uint)this->_m20,(uint)this->_m21,(uint)this->_m22,(uint)this->_m23,(uint)this->_m30,(uint)this->_m31,(uint)this->_m32,(uint)this->_m33); }

	__device__ __host__ uint_1::uint_1(const float_1 &v) { new (this) uint_1((uint)v.x); }
	__device__ __host__ uint_1::uint_1(const int_1 &v) { new (this) uint_1((uint)v.x); }

	__device__ __host__ uint_2::uint_2(const float_2 &v) { new (this) uint_2((uint)v.x,(uint)v.y); }
	__device__ __host__ uint_2::uint_2(const int_2 &v) { new (this) uint_2((uint)v.x,(uint)v.y); }

	__device__ __host__ uint_3::uint_3(const float_3 &v) { new (this) uint_3((uint)v.x,(uint)v.y,(uint)v.z); }
	__device__ __host__ uint_3::uint_3(const int_3 &v) { new (this) uint_3((uint)v.x,(uint)v.y,(uint)v.z); }

	__device__ __host__ uint_4::uint_4(const float_4 &v) { new (this) uint_4((uint)v.x,(uint)v.y,(uint)v.z,(uint)v.w); }
	__device__ __host__ uint_4::uint_4(const int_4 &v) { new (this) uint_4((uint)v.x,(uint)v.y,(uint)v.z,(uint)v.w); }

	uint1x1::operator float1x1() const { return float1x1((float)this->_m00); }
	uint1x1::operator int1x1() const { return int1x1((int)this->_m00); }

	uint1x2::operator float1x2() const { return float1x2((float)this->_m00,(float)this->_m01); }
	uint1x2::operator int1x2() const { return int1x2((int)this->_m00,(int)this->_m01); }

	uint1x3::operator float1x3() const { return float1x3((float)this->_m00,(float)this->_m01,(float)this->_m02); }
	uint1x3::operator int1x3() const { return int1x3((int)this->_m00,(int)this->_m01,(int)this->_m02); }

	uint1x4::operator float1x4() const { return float1x4((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m03); }
	uint1x4::operator int1x4() const { return int1x4((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m03); }

	uint2x1::operator float2x1() const { return float2x1((float)this->_m00,(float)this->_m10); }
	uint2x1::operator int2x1() const { return int2x1((int)this->_m00,(int)this->_m10); }

	uint2x2::operator float2x2() const { return float2x2((float)this->_m00,(float)this->_m01,(float)this->_m10,(float)this->_m11); }
	uint2x2::operator int2x2() const { return int2x2((int)this->_m00,(int)this->_m01,(int)this->_m10,(int)this->_m11); }

	uint2x3::operator float2x3() const { return float2x3((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m10,(float)this->_m11,(float)this->_m12); }
	uint2x3::operator int2x3() const { return int2x3((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m10,(int)this->_m11,(int)this->_m12); }

	uint2x4::operator float2x4() const { return float2x4((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m03,(float)this->_m10,(float)this->_m11,(float)this->_m12,(float)this->_m13); }
	uint2x4::operator int2x4() const { return int2x4((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m03,(int)this->_m10,(int)this->_m11,(int)this->_m12,(int)this->_m13); }

	uint3x1::operator float3x1() const { return float3x1((float)this->_m00,(float)this->_m10,(float)this->_m20); }
	uint3x1::operator int3x1() const { return int3x1((int)this->_m00,(int)this->_m10,(int)this->_m20); }

	uint3x2::operator float3x2() const { return float3x2((float)this->_m00,(float)this->_m01,(float)this->_m10,(float)this->_m11,(float)this->_m20,(float)this->_m21); }
	uint3x2::operator int3x2() const { return int3x2((int)this->_m00,(int)this->_m01,(int)this->_m10,(int)this->_m11,(int)this->_m20,(int)this->_m21); }

	uint3x3::operator float3x3() const { return float3x3((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m10,(float)this->_m11,(float)this->_m12,(float)this->_m20,(float)this->_m21,(float)this->_m22); }
	uint3x3::operator int3x3() const { return int3x3((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m10,(int)this->_m11,(int)this->_m12,(int)this->_m20,(int)this->_m21,(int)this->_m22); }

	uint3x4::operator float3x4() const { return float3x4((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m03,(float)this->_m10,(float)this->_m11,(float)this->_m12,(float)this->_m13,(float)this->_m20,(float)this->_m21,(float)this->_m22,(float)this->_m23); }
	uint3x4::operator int3x4() const { return int3x4((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m03,(int)this->_m10,(int)this->_m11,(int)this->_m12,(int)this->_m13,(int)this->_m20,(int)this->_m21,(int)this->_m22,(int)this->_m23); }

	uint4x1::operator float4x1() const { return float4x1((float)this->_m00,(float)this->_m10,(float)this->_m20,(float)this->_m30); }
	uint4x1::operator int4x1() const { return int4x1((int)this->_m00,(int)this->_m10,(int)this->_m20,(int)this->_m30); }

	uint4x2::operator float4x2() const { return float4x2((float)this->_m00,(float)this->_m01,(float)this->_m10,(float)this->_m11,(float)this->_m20,(float)this->_m21,(float)this->_m30,(float)this->_m31); }
	uint4x2::operator int4x2() const { return int4x2((int)this->_m00,(int)this->_m01,(int)this->_m10,(int)this->_m11,(int)this->_m20,(int)this->_m21,(int)this->_m30,(int)this->_m31); }

	uint4x3::operator float4x3() const { return float4x3((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m10,(float)this->_m11,(float)this->_m12,(float)this->_m20,(float)this->_m21,(float)this->_m22,(float)this->_m30,(float)this->_m31,(float)this->_m32); }
	uint4x3::operator int4x3() const { return int4x3((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m10,(int)this->_m11,(int)this->_m12,(int)this->_m20,(int)this->_m21,(int)this->_m22,(int)this->_m30,(int)this->_m31,(int)this->_m32); }

	uint4x4::operator float4x4() const { return float4x4((float)this->_m00,(float)this->_m01,(float)this->_m02,(float)this->_m03,(float)this->_m10,(float)this->_m11,(float)this->_m12,(float)this->_m13,(float)this->_m20,(float)this->_m21,(float)this->_m22,(float)this->_m23,(float)this->_m30,(float)this->_m31,(float)this->_m32,(float)this->_m33); }
	uint4x4::operator int4x4() const { return int4x4((int)this->_m00,(int)this->_m01,(int)this->_m02,(int)this->_m03,(int)this->_m10,(int)this->_m11,(int)this->_m12,(int)this->_m13,(int)this->_m20,(int)this->_m21,(int)this->_m22,(int)this->_m23,(int)this->_m30,(int)this->_m31,(int)this->_m32,(int)this->_m33); }

