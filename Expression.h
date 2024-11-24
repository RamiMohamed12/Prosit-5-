#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>

// Abstract Expression class
template <int N>
class Expression {
public:
    virtual ~Expression() {}
    virtual float solve(const float vals[N]) const = 0;
    virtual void differentiate(Expression<N>& result, const int mask[N]) const = 0;
    virtual std::string toString() const = 0;
};

#endif // EXPRESSION_H
