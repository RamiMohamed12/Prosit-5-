#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "Monomial.h"
#include <string>

namespace MathExpressions {
    class Polynomial1D {
    private:
        Monomial1D* terms[2];

    public:
        Polynomial1D(Monomial1D* terms[2]);
        void differentiate(Polynomial1D& result, const int mask[1]) const;
        std::string toString() const;
    };
}

#endif // POLYNOMIAL_H
