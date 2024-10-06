#pragma once
#include <string>
namespace homework_oct6
{

  /**
   * @brief This is the Expression class
   */
  class Expression
  {

  public:
    /**
     * @brief This is a virtual method toString() that returns a string representation.
     */
    virtual std::string toString() const = 0;

    /**
     * @brief This is a virtual method evaluate() that returns the result of evaluating the expression.
     */
    virtual double evaluate() const = 0;

    // Virtual destructor to ensure proper cleanup of derived objects
    virtual ~Expression() = default;
  };

  /**
   * @brief This is the Constant class that inherits from the Expression class.
   */
  class Constant : public Expression
  {
    double val;

  public:
    /**
     * @brief This is a Constant constructor.
     * @param c This is a double
     * @return The result of the useful operation
     */
    Constant(double c) : val(c) {}

    /**
     * @brief This is a virtual method evaluate() that returns the result of evaluating the expression.
     */
    double evaluate() const override;

    /**
     * @brief Converts the constant value to a string.
     * @return The string representation of the value.
     */
    std::string toString() const override;
  };

  /**
   * @brief This is the BinaryPlus class that inherits from Expression.
   */
  class BinaryPlus : public Expression
  {
    const Expression &lhs;
    const Expression &rhs;

  public:
    /**
     * @brief Constructor for BinaryPlus.
     * @param left A reference to the left-hand side expression.
     * @param right A reference to the right-hand side expression.
     */
    BinaryPlus(const Expression &left, const Expression &right);

    /**
     * @brief Evaluates the BinaryPlus expression by adding the results of the two sub-expressions.
     * @return The result of the addition.
     */
    double evaluate() const override;

    /**
     * @brief Converts the BinaryPlus expression to a string.
     * @return A string representation of the expression in the form "(lhs + rhs)".
     */
    std::string toString() const override;
  };

} // namespace homework_oct6
