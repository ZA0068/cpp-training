#include <gtest/gtest.h>
#include <medium/medium.hpp>

TEST(MediumTests, QuadraticEquation) {
    ASSERT_EQ(Medium::quadraticEquation(1, 2, -3), 1);
    ASSERT_EQ(Medium::quadraticEquation(2, -7, 3), 3);
    ASSERT_EQ(Medium::quadraticEquation(1, -12, -28), 14);
    
}













