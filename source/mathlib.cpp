#include "mathlib.h"

double Math::Clamp(double num, double max, double min) {
    if(num <= min) {
        return min;
    }
    if(num >= max) {
        return max;
    }
    return num;
}

double Math::Sqrt(double x) {
    const double *num = &x;
    double out;
    double *out_ptr = &out;
    __m256 arr = _mm256_load_pd(num);
    arr = _mm256_sqrt_pd(arr);
    _mm256_store_pd(out_ptr, arr);
    return *out_ptr;
}

double Math::Rsqrt(double x) {
    const double *num = &x;
    double out;
    double *out_ptr = &out;
    __m256 arr = _mm256_load_pd(num);
    arr = _mm256_rsqrt14_pd(arr);
    _mm256_store_pd(out_ptr, arr);
    return *out_ptr;
}

double Math::Vector3::Length() {
    return Math::Sqrt(x*x + y*y + z*z);
}

void Math::Vector3::Normalize() {
    double len = Math::Sqrt(x*x + y*y + z*z);
    double ilen = Math::Rsqrt(len);
    x *= ilen;
    y *= ilen;
    z *= ilen;
}