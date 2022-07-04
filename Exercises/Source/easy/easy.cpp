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