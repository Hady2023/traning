#include <gtest/gtest.h>
#include "math.hpp"

TEST(MathTests, AddTwoNumbers) {
    EXPECT_EQ(add(2, 3), 0);
}

TEST(MathTests, AddNegative) {
    EXPECT_EQ(add(-1, 3), 2);
}