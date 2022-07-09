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