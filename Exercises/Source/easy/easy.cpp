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

std::vector<int> Easy::noOdds(std::vector<int> array) {
    std::vector<int> noOdds;
    for (int i = 0; i < array.size(); i++)
        if (array[i] % 2 == 0)
            noOdds.push_back(array[i]);
    return noOdds;
}

int Easy::countWords(std::string sentence)
{
    int words = 1;
    for (auto& i : sentence)
    {
        if (i == ' ')
        {
            words++;
        }
    }
    return words;
}  

int Easy::solutions(int a, int b, int c)
{
    auto first_solution = (-b + sqrt(b*b-4*a*c))/ (2 * a);
    auto second_solution = (-b - sqrt(b*b-4*a*c))/ (2 * a);
    if(isnan(first_solution) || isnan(second_solution))
        return 0;
    if(first_solution == second_solution)
        return 1;
    return 2;
}

int Easy::countVowels(std::string word)
{
    int wovels = 0;
    auto isVowel = [&](auto letter) -> bool{
        std::string vowels = "aeiouAEIOU";
        for(const auto& vowel : vowels)
            if(letter == vowel)
                return true;
        return false;
    };
    for (auto& i : word)
    {
        if (isVowel(i))
        {
            wovels++;
        }
    }
    return wovels;
}

int Easy::squareAreaDifference(int radius){
    return radius*radius*4-radius*radius*2;; 
}

std::string Easy::doubleChar(std::string str)
{
    std::string doubled = "";
    for (auto& i : str)
    {
        doubled += i;
        doubled += i;
    }
    return doubled;
}

std::string Easy::alphabetSoup(std::string word)
{
    std::sort(word.begin(), word.end());
    return word;
}

std::vector<int> Easy::colorInvert(std::vector<int> rgb_color)
{
    std::vector<int> inverted;
    for (auto& i : rgb_color)
    {
        inverted.push_back(255 - i);
    }
    return inverted;
}

std::vector<int> Easy::amplify(int number)
{
    std::vector<int> amplified;
    for (int i = 1; i <= number; i++)
    {
        if(i%4 == 0)
            amplified.push_back(i*10);
        else
            amplified.push_back(i);
    }
    return amplified;
}

bool Easy::changeEnough(std::vector<int> changes, float dollars)
{
    float quarter = static_cast<float>(changes[0]*25)/100;
    float dime = static_cast<float>(changes[1]*10)/100;
    float nickel = static_cast<float>(changes[2]*5)/100;
    float penny = static_cast<float>(changes[3])/100;
    return quarter + dime + nickel + penny >= dollars;
}