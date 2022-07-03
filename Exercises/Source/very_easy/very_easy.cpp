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

int VeryEasy::addition(int a)
{
    return a + 1;
}

int VeryEasy::convert(int minutes)
{
    return minutes * 60;
}

int VeryEasy::triArea(int base, int height)
{
    return base * height / 2;
}

int VeryEasy::howManySeconds(int hours)
{
    return hours * 3600;
}

int VeryEasy::nextEdge(int side1, int side2)
{
    return side1 + side2 - 1;
}

int VeryEasy::remainder(int a, int b)
{
    return a % b;
}

int VeryEasy::squared(int a)
{
    return a * a;
}

int VeryEasy::findPerimeter(int side1, int side2)
{
    return side1 * 2 + side2 * 2;
}

bool VeryEasy::isEqual(int a, int b)
{
    return a == b;
}

bool VeryEasy::lessThanOrEqualToZero(int number)
{
    return number <= 0;
}

int VeryEasy::convert(int hours, int minutes)
{
    return hours * 3600 + minutes * 60;
}