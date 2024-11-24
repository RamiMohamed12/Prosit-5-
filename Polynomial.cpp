#include "Polynomial.h"
#include <sstream>

namespace MathExpressions {
    Polynomial1D::Polynomial1D(Monomial1D* terms[2]) {
        this->terms[0] = terms[0];
        this->terms[1] = terms[1];
    }

    void Polynomial1D::differentiate(Polynomial1D& result, const int mask[1]) const {
        this->terms[0]->differentiate(*result.terms[0], mask);
        this->terms[1]->differentiate(*result.terms[1], mask);
    }

    std::string Polynomial1D::toString() const {
        std::ostringstream os;
        os << terms[0]->toString() << " + " << terms[1]->toString();
        return os.str();
    }
}
