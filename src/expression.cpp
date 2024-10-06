#include "expression.h"
#include <string>
#include <iostream>

namespace homework_oct6
{

    // Implementation of the Constant class
    double Constant::evaluate() const
    {
        return val;
    }

    std::string Constant::toString() const
    {
        return std::to_string(val);
    }

    // Implementation of the BinaryPlus class
    double BinaryPlus::BinaryPlus(const Expression &left, const Expression &right) : lhs(left), rhs(right) {}

    double BinaryPlus::evaluate() const
    {
        return lhs.evaluate() + rhs.evaluate();
    }

    std::string BinaryPlus::toString() const
    {
        return "(" + lhs.toString() + " + " + rhs.toString() + ")";
    }

    // Printing the expressions
    void printExpression(const Expression &expr)
    {
        std::cout << expr.toString() << " = " << expr.evaluate() << std::endl;
    }

} // namespace homework_oct6
