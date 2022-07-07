#include <gtest/gtest.h>
#include <medium/medium.hpp>

TEST(MediumTests, QuadraticEquation) {
    ASSERT_EQ(Medium::quadraticEquation(1, 2, -3), 1);
    ASSERT_EQ(Medium::quadraticEquation(2, -7, 3), 3);
    ASSERT_EQ(Medium::quadraticEquation(1, -12, -28), 14);
    
}
TEST(MediumTests, OddUp,EvenDown-NTimes) {
    ASSERT_EQ(Medium::evenOddTransform({3, 4, 9}, 3), std::vector<int>({9, -2, 15}));
    ASSERT_EQ(Medium::evenOddTransform({0, 0, 0}, 10), std::vector<int>({-20, -20, -20}));
    ASSERT_EQ(Medium::evenOddTransform({1, 2, 3}, 1), std::vector<int>({3, 0, 5}));
    ASSERT_EQ(Medium::evenOddTransform({55, 90, 830}, 2), std::vector<int>({59, 86, 826}));
}
TEST(MediumTests, ToyCarWorkshop) {
    ASSERT_EQ(Medium::cars(2, 48, 76), 0);
    ASSERT_EQ(Medium::cars(43, 15, 87), 10);
    ASSERT_EQ(Medium::cars(88, 37, 17), 8);
    ASSERT_EQ(Medium::cars(3, 29, 5), 0);
    ASSERT_EQ(Medium::cars(88, 50, 83), 22);
    ASSERT_EQ(Medium::cars(736, 430, 851), 184);
    ASSERT_EQ(Medium::cars(959, 331, 537), 239);

}











