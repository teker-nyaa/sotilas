#include "math.hh"

float Math::Rsqrt(float x) {
    i32 i;
    float x2, y;

    x2 = x * 0.5f;
    y = x;
    i = (i32)&y; // i cast bitcast
    i = 0x5f3759df - (i >> 1); // i dont know whats going on
    y = (float)i;
    y = y * ( 1.5f - (x2 * y * y) ); // newton

    return y;
}

float Math::Vec::DotProduct() {
	return x*x+y*y+z*z;
}

float Math::Vec::Length() {
	return sqrt(x*x+y*y+z*z);
}

void Math::Vec::Mul(float scale) {
	x *= scale;
	y *= scale;
	z *= scale;
}

void Math::Vec::Normalize() {
	float len = Length();
	float ilen = Rsqrt(len);

	x *= ilen;
	y *= ilen;
	z *= ilen;
}

float Math::Vec::Add(Math::Vec other) {
	x += other.x;
	y += other.y
	z += other.z;
}

float Math::Vec::Sub(Math::Vec other) {
	x -= other.x;
	y -= other.y
	z -= other.z;
}