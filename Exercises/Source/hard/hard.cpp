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