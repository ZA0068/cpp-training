#include <easy/easy.hpp>
#include <gtest/gtest.h>

TEST(EasyTests, AbsoluteSum)
{
    ASSERT_EQ(Easy::getAbsSum({2, -1, -3, 4, 8}), 18);
    ASSERT_EQ(Easy::getAbsSum({-1}), 1);
    ASSERT_EQ(Easy::getAbsSum({-1, -3, -5, -4, -10, 0}), 23);
    ASSERT_EQ(Easy::getAbsSum({8, 9, 10, 32, 101, -10}), 170);
    ASSERT_EQ(Easy::getAbsSum({500}), 500);
}
TEST(EasyTests, CountSyllables)
{
    ASSERT_EQ(Easy::numberSyllables("buf-fet"), 2);
    ASSERT_EQ(Easy::numberSyllables("beau-ti-ful"), 3);
    ASSERT_EQ(Easy::numberSyllables("mon-u-men-tal"), 4);
    ASSERT_EQ(Easy::numberSyllables("on-o-mat-o-poe-ia"), 6);
    ASSERT_EQ(Easy::numberSyllables("o-ver-ly"), 3);
    ASSERT_EQ(Easy::numberSyllables("pas-try"), 2);
    ASSERT_EQ(Easy::numberSyllables("flu-id"), 2);
    ASSERT_EQ(Easy::numberSyllables("syl-la-ble"), 3);
}
TEST(EasyTests, Burrrrrrrp)
{
    ASSERT_EQ(Easy::longBurp(3), "Burrrp");
    ASSERT_EQ(Easy::longBurp(9), "Burrrrrrrrrp");
    ASSERT_EQ(Easy::longBurp(10), "Burrrrrrrrrrp");
    ASSERT_EQ(Easy::longBurp(13), "Burrrrrrrrrrrrrp");
    ASSERT_EQ(Easy::longBurp(18), "Burrrrrrrrrrrrrrrrrrp");
    ASSERT_EQ(Easy::longBurp(1), "Burp");
}
TEST(EasyTests, BrokenBridge)
{
    ASSERT_EQ(Easy::isSafeBridge("####"), true);
    ASSERT_EQ(Easy::isSafeBridge("## ####"), false);
    ASSERT_EQ(Easy::isSafeBridge("#"), true);
    ASSERT_EQ(Easy::isSafeBridge("# #"), false);
}
TEST(EasyTests, TriangularNumberSequence) {
    ASSERT_EQ(Easy::triangle(1), 1);
    ASSERT_EQ(Easy::triangle(2), 3);
    ASSERT_EQ(Easy::triangle(3), 6);
    ASSERT_EQ(Easy::triangle(8), 36);
    ASSERT_EQ(Easy::triangle(2153), 2318781);
}
TEST(EasyTests, LastDigitUltimate)
{
    ASSERT_EQ(Easy::lastDig(25, 21, 125), true);
    ASSERT_EQ(Easy::lastDig(1, 1, 1), true);
    ASSERT_EQ(Easy::lastDig(12, 15, 10), true);
    ASSERT_EQ(Easy::lastDig(15228, 9209, 72162), true);
    ASSERT_EQ(Easy::lastDig(15, 1, 1), false);
    ASSERT_EQ(Easy::lastDig(123, 15, 10), false);
    ASSERT_EQ(Easy::lastDig(5213, 99219, 6165), false);
    ASSERT_EQ(Easy::lastDig(1523, 513, 512), false);
    ASSERT_EQ(Easy::lastDig(-15, 1, 1), false);
    ASSERT_EQ(Easy::lastDig(123, -15, 10), false);
    ASSERT_EQ(Easy::lastDig(-12, 15, -10), true);
    ASSERT_EQ(Easy::lastDig(15228, -9209, -72162), true);
}
TEST(EasyTests, PairManagement) {
    ASSERT_EQ(Easy::pairs(std::make_pair(1, 2)), std::vector<int>(1, 2));
    ASSERT_EQ(Easy::pairs(std::make_pair(21, 82)), std::vector<int>(21, 82));
    ASSERT_EQ(Easy::pairs(std::make_pair(4213, 526)), std::vector<int>(4213, 526));
}
TEST(EasyTests, FixTheError) {
    ASSERT_EQ(Easy::checkEquals({1, 3}, {1, 2}), false);
    ASSERT_EQ(Easy::checkEquals({1, 2}, {1, 2}), true);
    ASSERT_EQ(Easy::checkEquals({4, 5, 6}, {4, 5, 6}), true);
    ASSERT_EQ(Easy::checkEquals({4, 7, 6}, {4, 5, 6}), false);
 }
TEST(EasyTests, MaskifyTheString) {
    ASSERT_EQ(Easy::maskify("4556364607935616"), "############5616");
    ASSERT_EQ(Easy::maskify("64607935616"), "#######5616");
    ASSERT_EQ(Easy::maskify("1"), "1");
    ASSERT_EQ(Easy::maskify(""), "");
    ASSERT_EQ(Easy::maskify("tBy>L/cMe+?<j:6n;C~H"), "################;C~H");
    ASSERT_EQ(Easy::maskify("12"), "12");
    ASSERT_EQ(Easy::maskify("123"), "123");
    ASSERT_EQ(Easy::maskify(")E$aCU=e\"_"), "######=e\"_");
}










