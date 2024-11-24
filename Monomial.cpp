#include "Monomial.h"

namespace MathExpressions {

    Monomial1D::Monomial1D(float coeff, const int exps[1])
        : coefficient(coeff) {
        if (exps != nullptr) {
            exponents[0] = exps[0];
        } else {
            exponents[0] = 0;
        }
    }

    Monomial1D::Monomial1D(const Monomial1D& other)
        : coefficient(other.coefficient) {
        exponents[0] = other.exponents[0];
    }

    void Monomial1D::differentiate(Monomial1D& result, const int mask[1]) const {
        if (mask[0] == 1) {
            result.coefficient = coefficient * exponents[0];
            result.exponents[0] = exponents[0] > 0 ? exponents[0] - 1 : 0;
        } else {
            result.coefficient = 0.0f;
            result.exponents[0] = 0;
        }
    }

    std::string Monomial1D::toString() const {
        std::ostringstream os;
        os << coefficient << "x^" << exponents[0];
        return os.str();
    }
}
