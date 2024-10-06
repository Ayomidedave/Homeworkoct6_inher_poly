#include <gtest/gtest.h>
#include "expression.h"  
using namespace homework_oct6;

// Test for the Constant class
TEST(ConstantTest, EvaluateTest) {
    Constant c(5.0);
    EXPECT_DOUBLE_EQ(c.evaluate(), 5.0);
}

TEST(ConstantTest, ToStringTest) {
    Constant c(5.0);
    EXPECT_EQ(c.toString(), "5.000000");
}

// Test for the BinaryPlus class
TEST(BinaryPlusTest, EvaluateTest) {
    Constant c1(2.0);
    Constant c2(3.0);
    BinaryPlus bp(c1, c2);
    EXPECT_DOUBLE_EQ(bp.evaluate(), 5.0);  // 2 + 3 = 5
}

TEST(BinaryPlusTest, ToStringTest) {
    Constant c1(2.0);
    Constant c2(3.0);
    BinaryPlus bp(c1, c2);
    EXPECT_EQ(bp.toString(), "(2.000000 + 3.000000)");
}
