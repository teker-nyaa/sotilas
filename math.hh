#include <cmath>

#include "typedef.h"

namespace Math {
    float Rsqrt(float x);

    class Vec {
        public:
            float x;
            float y;
            float z;

            float Length();
            float DotProduct();
            void Mul(float scale);
            void Normalize();
            void Add(Vec other);
            void Sub(Vec other);
    };
}