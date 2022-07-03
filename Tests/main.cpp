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
TEST(VeryEasyTests, InchesToFeet)
{
    ASSERT_EQ(VeryEasy::inchesToFeet(12), 1);
    ASSERT_EQ(VeryEasy::inchesToFeet(360), 30);
    ASSERT_EQ(VeryEasy::inchesToFeet(3612), 301);
    ASSERT_EQ(VeryEasy::inchesToFeet(324), 27);
    ASSERT_EQ(VeryEasy::inchesToFeet(3012), 251);
    ASSERT_EQ(VeryEasy::inchesToFeet(11), 0);
}
TEST(VeryEasyTests, CheckIfAnIntegerIsDivisibleByFive)
{
    ASSERT_EQ(VeryEasy::divisibleByFive(7), false);
    ASSERT_EQ(VeryEasy::divisibleByFive(5), true);
    ASSERT_EQ(VeryEasy::divisibleByFive(15), true);
    ASSERT_EQ(VeryEasy::divisibleByFive(-55), true);
    ASSERT_EQ(VeryEasy::divisibleByFive(33), false);
    ASSERT_EQ(VeryEasy::divisibleByFive(-18), false);
    ASSERT_EQ(VeryEasy::divisibleByFive(999), false);
    ASSERT_EQ(VeryEasy::divisibleByFive(2), false);
}
TEST(VeryEasyTests, ProfitableGamble)
{
    ASSERT_EQ(VeryEasy::profitableGamble(0.2, 50, 9), true);
    ASSERT_EQ(VeryEasy::profitableGamble(0.9, 1, 2), false);
    ASSERT_EQ(VeryEasy::profitableGamble(0.9, 3, 2), true);
    ASSERT_EQ(VeryEasy::profitableGamble(0.33, 10, 3.30), true);
    ASSERT_EQ(VeryEasy::profitableGamble(0, 1000, 0.01), false);
    ASSERT_EQ(VeryEasy::profitableGamble(0.1, 1000, 7), true);
    ASSERT_EQ(VeryEasy::profitableGamble(0, 0, 0), false);
}
TEST(VeryEasyTests, LessThan100)
{
    ASSERT_EQ(VeryEasy::lessThan100(5, 57), true);
	ASSERT_EQ(VeryEasy::lessThan100(77, 30),false);
	ASSERT_EQ(VeryEasy::lessThan100(0, 59), true);
	ASSERT_EQ(VeryEasy::lessThan100(78, 35),false);
	ASSERT_EQ(VeryEasy::lessThan100(63, 11),true);
	ASSERT_EQ(VeryEasy::lessThan100(37, 99),false);
	ASSERT_EQ(VeryEasy::lessThan100(52, 11),true);
	ASSERT_EQ(VeryEasy::lessThan100(82, 95),false);
	ASSERT_EQ(VeryEasy::lessThan100(17, 44),true);
	ASSERT_EQ(VeryEasy::lessThan100(74, 53),false);
	ASSERT_EQ(VeryEasy::lessThan100(3, 77), true);
	ASSERT_EQ(VeryEasy::lessThan100(25, 80),false);
	ASSERT_EQ(VeryEasy::lessThan100(59, 28),true);
	ASSERT_EQ(VeryEasy::lessThan100(69, 87),false);
	ASSERT_EQ(VeryEasy::lessThan100(10, 45),true);
	ASSERT_EQ(VeryEasy::lessThan100(43, 58),false);
	ASSERT_EQ(VeryEasy::lessThan100(50, 44),true);
	ASSERT_EQ(VeryEasy::lessThan100(74, 89),false);
	ASSERT_EQ(VeryEasy::lessThan100(3, 27), true);
	ASSERT_EQ(VeryEasy::lessThan100(21, 79),false);
}
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
