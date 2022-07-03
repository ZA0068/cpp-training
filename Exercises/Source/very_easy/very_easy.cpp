#include <very_easy/very_easy.hpp>

bool VeryEasy::returnTrue()
{
    return true;
}

int VeryEasy::flipIntBool(int boolean)
{
    return !boolean;
}

int VeryEasy::circuitPower(int voltage, int current)
{
    return voltage * current;
}

int VeryEasy::addition(int a, int b)
{
    return a + b;
}

int VeryEasy::animals(int chickens, int cows, int pigs)
{
    return chickens * 2 + cows * 4 + pigs * 4;
}

int VeryEasy::points(int twoPointers, int threePointers)
{
    return twoPointers * 2 + threePointers * 3;
}

int VeryEasy::inchesToFeet(int inches)
{
    return inches / 12;
}

bool VeryEasy::divisibleByFive(int number)
{
    return number % 5 == 0;
}

bool VeryEasy::profitableGamble(float prob, float prize, float pay)
{
    return prob * prize > pay;
}

bool VeryEasy::lessThan100(int a, int b)
{
    return a + b < 100;
}