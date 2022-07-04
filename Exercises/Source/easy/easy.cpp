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

bool Easy::lastDig(int a, int b, int c)
{
    return (a * b % 10) == (c % 10);
}

std::vector<int> Easy::pairs(std::pair<int, int> numpair)
{
    return std::vector<int>(numpair.first, numpair.second);
}

bool Easy::checkEquals(std::vector<int> arr1, std::vector<int> arr2) {
	for (int i = 0; i < arr1.size(); i++)
		if (arr1[i]!=arr2[i])
            return false;
    return true;
}

std::string Easy::maskify(std::string str)
{
    std::string masked = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (i < static_cast<int>(str.size() - 4))
        {
            masked += "#";
        }
        else
        {
            masked += str[i];
        }
    }
    return masked;
}