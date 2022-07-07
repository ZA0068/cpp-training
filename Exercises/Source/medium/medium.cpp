#include <medium/medium.hpp>

int Medium::quadraticEquation(int a, int b, int c)
{
    int d = b * b - 4 * a * c;
    if (d < 0)
        return -1;
    else if (d == 0)
        return -b / (2 * a);
    else
        return (-b + sqrt(d)) / (2 * a);
}