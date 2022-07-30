#include <hard/hard.hpp>

char Hard::firstRepeat(string word)
{
    for(int i = 0; i < word.size(); i++)
    {
        for(int j = i + 1; j < word.size(); j++)
        {
            if(word[i] == word[j])
            {
                return word[i];
            }
        }
    }
    return '0';
}

string Hard::tweakLetters(string word, vector<int> array)
{
    string newWord = "";
    for(int i = 0; i < word.size(); i++)
    {
        if(word[i] + array[i] > 'z')
        {
            newWord += static_cast<char>('a');
        }
        else if(word[i] + array[i] < 'a')
        {
            newWord += static_cast<char>('z');
        }
        else
        {
            newWord += static_cast<char>(word[i] + array[i]);
        }
    }
    return newWord;
}

int Hard::findOdd(vector<int> array)
{
    int cnt;
    for(int i = 0; i < array.size(); i++)
    {
        cnt = 1;
        for(int j = 0; j < array.size(); j++)
        {
            if(i == j)
            {
                continue;
            }
            if(array[j] == array[i])
            {
                cnt++;
            }
        }
        if(cnt % 2 == 1)
        {
            return array[i];
        }
    }
}

int Hard::letterDistance(string word1, string word2)
{
    int distance = 0;
    int string_length = word1.size() > word2.size() ? word2.size() : word1.size();
    for(int i = 0; i < string_length; i++)
    {
        distance += abs(static_cast<int>(word1[i] - word2[i] + '\0'));
    }
    distance += abs(static_cast<int>(word1.size() - word2.size()));
    return distance;
}

vector<string> Hard::makeBox(int n)
{
    vector<string> box;
    string line;
    for(int i = 0; i < n; i++)
    {
        line = "";
        for(int j = 0; j < n; j++)
        {
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                line += "#";
            }
            else
            {
                line += " ";
            }
        }
        box.push_back(line);
    }
    return box;
}

int Hard::primeNumbers(int n)
{
    int cnt = 0;
    for(int i = 2; i < n; i++)
    {
        bool isPrime = true;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            cnt++;
        }
    }
    return cnt;
}

string Hard::mysteryFunc(string str)
{
    string newStr = "", prevstr;
    int cnt = 0;
    for(auto string_character : str)
    {
        int str_int = static_cast<int>(string_character - '0');
        if( str_int > 0 && str_int  < 10)
        {
            cnt = str_int;
        }
        else
        {
            newStr += prevstr = string_character;
        }
        while(cnt > 1)
        {
            newStr += prevstr;
            cnt--;
        }
    }
    return newStr;
}

bool Hard::cons(vector<int> array)
{
    std::sort(array.begin(), array.end());
    for(int i = 0; i < array.size() - 1; i++)
    {
        if(array[i] + 1 != array[i + 1])
        {
            return false;
        }
    }
    return true;
}

bool Hard::isValidHexCode(string str)
{
    if(str.length() > 7)
    {
        return false;
    }
    if(str[0] == '#')
    {
        str = str.substr(1);
    }
    else
    {
        return false;
    }
    for(auto string_character : str)
    {
        if(string_character >= '0' && string_character <= '9')
        {
            continue;
        }
        else if (string_character >= 'a' && string_character <= 'f')
        {
            continue;
        }
        else if (string_character >= 'A' && string_character <= 'F')
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int Hard::countOnes(vector<int> array)
{
    bool ones = false;
    int cnt = 0;
    int cnt2 = 0;
   for(int i = 0; i < array.size(); i++)
   {
      
       if(array[i] == 1)
       {
            cnt++;
       }
       else
       {
            cnt = 0;
            ones = false;
       }
       if (cnt > 1 && !ones)
       {
            cnt2++;
            ones = true;
       }
   }
    return cnt2;
}