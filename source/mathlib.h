#include <immintrin.h>

namespace Math {
    const double PI = 3.141592653598979323846;

    double Clamp(double num, double max, double min);
    double Sqrt(double x);
    double Rsqrt(double x);

    class Vector3 {
    public:
        double x;
        double y;
        double z;

        double Length();
        void Normalize();
    };
}