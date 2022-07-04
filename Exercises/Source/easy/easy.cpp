#include <easy/easy.hpp>

int Easy::getAbsSum(std::vector<int> arr)
{
    int sum = 0;
    for (auto& i : arr)
    {
        sum += std::abs(i);
    }
    return sum;
}

int Easy::numberSyllables(std::string word)
{
    int syllables = 1;
    for (auto& i : word)
    {
        if (i == '-')
        {
            syllables++;
        }
    }
    return syllables;
}

std::string Easy::longBurp(int times)
{
    std::string burp = "Bu";
    for (int i = 0; i < times; i++)
    {
        burp += "r";
    }
    return burp + "p";
}

bool Easy::isSafeBridge(std::string bridge)
{
    for (auto& i : bridge)
    {
        if (i == ' ')
        {
            return false;
        }
    }
    return true;
}

int Easy::triangle(int n)
{
    return n * (n + 1) / 2;
}