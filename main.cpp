#include "Monomial.h"
#include "Polynomial.h"
#include <iostream>

int main() {
    int exps[1] = {2};
    MathExpressions::Monomial1D m1(12.4f, exps);

    MathExpressions::Monomial1D dm3;
    int mask[1] = {1};
    m1.differentiate(dm3, mask);

    std::cout << "Derivative of " << m1.toString() << ": " << dm3.toString() << "\n";

    MathExpressions::Monomial1D m2(18.0f, exps);
    MathExpressions::Monomial1D* monomes[2] = {&m1, &m2};
    MathExpressions::Polynomial1D p1(monomes);

    MathExpressions::Polynomial1D dp1(monomes);
    p1.differentiate(dp1, mask);

    std::cout << "Polynomial: " << p1.toString() << "\n";
    std::cout << "Derivative of polynomial: " << dp1.toString() << "\n";

    return 0;
}
