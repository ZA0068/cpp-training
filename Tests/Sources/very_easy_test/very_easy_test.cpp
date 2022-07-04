#include <very_easy/very_easy.hpp>
#include <gtest/gtest.h>

TEST(VeryEasyTests, HowEdabitWorks)
{
    ASSERT_EQ(VeryEasy::returnTrue(), true);
}
TEST(VeryEasyTests, ReturnTheSumOfTwoNumbers)
{
    ASSERT_EQ(VeryEasy::addition(3, 2), 5);
    ASSERT_EQ(VeryEasy::addition(-3, -6), -9);
    ASSERT_EQ(VeryEasy::addition(7, 3), 10);
}
TEST(VeryEasyTests, ReturnTheNextNumberFromTheIntegerPassed)
{
    ASSERT_EQ(VeryEasy::addition(2), 3);
    ASSERT_EQ(VeryEasy::addition(-9), -8);
    ASSERT_EQ(VeryEasy::addition(0), 1);
    ASSERT_EQ(VeryEasy::addition(999), 1000);
    ASSERT_EQ(VeryEasy::addition(73), 74);
}
TEST(VeryEasyTests, ConvertMinutesIntoSeconds)
{
    ASSERT_EQ(VeryEasy::convert(6), 360);
    ASSERT_EQ(VeryEasy::convert(4), 240);
    ASSERT_EQ(VeryEasy::convert(8), 480);
    ASSERT_EQ(VeryEasy::convert(60), 3600);
}
TEST(VeryEasyTests, AreaOfATriangle)
{
    ASSERT_EQ(VeryEasy::triArea(3, 2), 3);
    ASSERT_EQ(VeryEasy::triArea(5, 4), 10);
    ASSERT_EQ(VeryEasy::triArea(10, 10), 50);
    ASSERT_EQ(VeryEasy::triArea(0, 60), 0);
    ASSERT_EQ(VeryEasy::triArea(12, 11), 66);
    ASSERT_EQ(VeryEasy::triArea(10, 10), 50);
}
TEST(VeryEasyTests, PowerCalculator)
{
    ASSERT_EQ(VeryEasy::circuitPower(230, 10), 2300);
    ASSERT_EQ(VeryEasy::circuitPower(480, 20), 9600);
    ASSERT_EQ(VeryEasy::circuitPower(110, 3), 330);
    ASSERT_EQ(VeryEasy::circuitPower(13800, 276), 3808800);
}
TEST(VeryEasyTests, ConvertHoursInotSeconds)
{
    ASSERT_EQ(VeryEasy::howManySeconds(2), 7200);
    ASSERT_EQ(VeryEasy::howManySeconds(10), 36000);
    ASSERT_EQ(VeryEasy::howManySeconds(24), 86400);
    ASSERT_EQ(VeryEasy::howManySeconds(36), 129600);
}
TEST(VeryEasyTests, MaximumEdgeOfATriangle)
{
    ASSERT_EQ(VeryEasy::nextEdge(5, 4), 8);
    ASSERT_EQ(VeryEasy::nextEdge(8, 3), 10);
    ASSERT_EQ(VeryEasy::nextEdge(7, 9), 15);
    ASSERT_EQ(VeryEasy::nextEdge(10, 4), 13);
    ASSERT_EQ(VeryEasy::nextEdge(7, 2), 8);
}
TEST(VeryEasyTests, ReturnTheRemainderFromTwoNumbers) {
     ASSERT_EQ(VeryEasy::remainder(1, 3), 1);
     ASSERT_EQ(VeryEasy::remainder(3, 4), 3);
     ASSERT_EQ(VeryEasy::remainder(-9, 45),-9);
     ASSERT_EQ(VeryEasy::remainder(5, 5), 0);
    
}
TEST(VeryEasyTests, CorrectTheMistakes) {
     ASSERT_EQ(VeryEasy::squared(5), 25);
     ASSERT_EQ(VeryEasy::squared(10), 100);
     ASSERT_EQ(VeryEasy::squared(69), 4761);
     ASSERT_EQ(VeryEasy::squared(666), 443556);
     ASSERT_EQ(VeryEasy::squared(-21), 441);
     ASSERT_EQ(VeryEasy::squared(21), 441);
}
TEST(VeryEasyTests, FindThePerimeterOfARectangle) {
     ASSERT_EQ(VeryEasy::findPerimeter(6, 7), 26);
     ASSERT_EQ(VeryEasy::findPerimeter(20, 10), 60);
     ASSERT_EQ(VeryEasy::findPerimeter(2, 9), 22);
}
TEST(VeryEasyTests, AreTheNumbersEqual) {
     ASSERT_EQ(VeryEasy::isEqual(2, 2), true);
     ASSERT_EQ(VeryEasy::isEqual(85, 85), true);
     ASSERT_EQ(VeryEasy::isEqual(36, 35), false);
     ASSERT_EQ(VeryEasy::isEqual(1, 1), true);
     ASSERT_EQ(VeryEasy::isEqual(5, 6), false);
}
TEST(VeryEasyTests, IsTheNumberLessThanOrEqualToZero) {
     ASSERT_EQ(VeryEasy::lessThanOrEqualToZero(5), false);
     ASSERT_EQ(VeryEasy::lessThanOrEqualToZero(0), true);
     ASSERT_EQ(VeryEasy::lessThanOrEqualToZero(-5), true);
     ASSERT_EQ(VeryEasy::lessThanOrEqualToZero(1), false);
     ASSERT_EQ(VeryEasy::lessThanOrEqualToZero(2), false);
     ASSERT_EQ(VeryEasy::lessThanOrEqualToZero(10000), false);
     ASSERT_EQ(VeryEasy::lessThanOrEqualToZero(1), false);
}
TEST(VeryEasyTests, TheFarmProblems)
{
    ASSERT_EQ(VeryEasy::animals(5, 2, 8), 50);
}
TEST(VeryEasyTests, FlipBoolean)
{
    ASSERT_EQ(VeryEasy::flipIntBool(1), false);
    ASSERT_EQ(VeryEasy::flipIntBool(0), true);
}
TEST(VeryEasyTests, LessThan100)
{
    ASSERT_EQ(VeryEasy::lessThan100(5, 57), true);
    ASSERT_EQ(VeryEasy::lessThan100(77, 30), false);
    ASSERT_EQ(VeryEasy::lessThan100(0, 59), true);
    ASSERT_EQ(VeryEasy::lessThan100(78, 35), false);
    ASSERT_EQ(VeryEasy::lessThan100(63, 11), true);
    ASSERT_EQ(VeryEasy::lessThan100(37, 99), false);
    ASSERT_EQ(VeryEasy::lessThan100(52, 11), true);
    ASSERT_EQ(VeryEasy::lessThan100(82, 95), false);
    ASSERT_EQ(VeryEasy::lessThan100(17, 44), true);
    ASSERT_EQ(VeryEasy::lessThan100(74, 53), false);
    ASSERT_EQ(VeryEasy::lessThan100(3, 77), true);
    ASSERT_EQ(VeryEasy::lessThan100(25, 80), false);
    ASSERT_EQ(VeryEasy::lessThan100(59, 28), true);
    ASSERT_EQ(VeryEasy::lessThan100(69, 87), false);
    ASSERT_EQ(VeryEasy::lessThan100(10, 45), true);
    ASSERT_EQ(VeryEasy::lessThan100(43, 58), false);
    ASSERT_EQ(VeryEasy::lessThan100(50, 44), true);
    ASSERT_EQ(VeryEasy::lessThan100(74, 89), false);
    ASSERT_EQ(VeryEasy::lessThan100(3, 27), true);
    ASSERT_EQ(VeryEasy::lessThan100(21, 79), false);
}
TEST(VeryEasyTests, ConvertHoursAndMinutesIntoSeconds)
{
     ASSERT_EQ(VeryEasy::convert(1, 3), 3780);
     ASSERT_EQ(VeryEasy::convert(2, 0), 7200);
     ASSERT_EQ(VeryEasy::convert(0, 0), 0);
     ASSERT_EQ(VeryEasy::convert(1, 0), 3600);
     ASSERT_EQ(VeryEasy::convert(0, 30), 1800);
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
    ASSERT_EQ(VeryEasy::profitableGamble(0.33, 10, 3.3), true);
    ASSERT_EQ(VeryEasy::profitableGamble(0, 1000, 0.01), false);
    ASSERT_EQ(VeryEasy::profitableGamble(0.1, 1000, 7), true);
    ASSERT_EQ(VeryEasy::profitableGamble(0, 0, 0), false);
}