#include <very_easy/very_easy.hpp>
#include <gtest/gtest.h>

TEST(VeryEasyTests, Boolean)
{
    ASSERT_EQ(VeryEasy::returnTrue(), true);
}

TEST(VeryEasyTests, FlipBoolean)
{
    ASSERT_EQ(VeryEasy::flipIntBool(1), false);
    ASSERT_EQ(VeryEasy::flipIntBool(0), true);
}

TEST(VeryEasyTests, PowerCalculator)
{
    ASSERT_EQ(VeryEasy::circuitPower(230, 10), 2300);
    ASSERT_EQ(VeryEasy::circuitPower(480, 20), 9600);
    ASSERT_EQ(VeryEasy::circuitPower(110, 3), 330);
    ASSERT_EQ(VeryEasy::circuitPower(13800, 276), 3808800);
}

TEST(VeryEasyTests, ReturnTheSumOfTwoNumbers)
{
    ASSERT_EQ(VeryEasy::addition(3, 2), 5);
    ASSERT_EQ(VeryEasy::addition(-3, -6), -9);
    ASSERT_EQ(VeryEasy::addition(7, 3), 10);
}

TEST(VeryEasyTests, TheFarmProblems)
{
    ASSERT_EQ(VeryEasy::animals(5, 2, 8), 50);
}

TEST(VeryEasyTests, BasketballPoints)
{
    ASSERT_EQ(VeryEasy::points(1, 1), 5);
    ASSERT_EQ(VeryEasy::points(1, 2), 8);
    ASSERT_EQ(VeryEasy::points(2, 1), 7);
    ASSERT_EQ(VeryEasy::points(2, 2), 10);
    ASSERT_EQ(VeryEasy::points(7, 5), 29);
    ASSERT_EQ(VeryEasy::points(38, 8), 100);
    ASSERT_EQ(VeryEasy::points(69, 420), 1398);
}



int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
