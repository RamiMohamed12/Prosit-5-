#ifndef MONOMIAL_H
#define MONOMIAL_H

#include <string>
#include <sstream>

namespace MathExpressions {
    class Monomial1D {
    private:
        float coefficient;
        int exponents[1];

    public:
        // Constructor
        Monomial1D(float coeff = 0.0f, const int exps[1] = nullptr);

        // Copy constructor
        Monomial1D(const Monomial1D& other);

        // Differentiate the monomial
        void differentiate(Monomial1D& result, const int mask[1]) const;

        // Convert monomial to string
        std::string toString() const;
    };
}

#endif
