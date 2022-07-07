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

vector<int> Medium::evenOddTransform(vector<int> array, int n)
{
    for(int i = 0; i < n; i++)
        for(int index = 0; index < array.size(); index++)
            {
                if(array[index] % 2 == 0)
                    array[index] = array[index] - 2;
                else
                    array[index] = array[index] + 2;
            }
    return array;
}

int Medium::cars(int wheels, int car_body, int people)
{
    for(int cars = 0; ; cars++)
        {
            if(wheels < 4 || car_body == 0 || people < 2)
            {
                return cars;
            }
            wheels -= 4;
            car_body--;
            people -= 2;
        }
}

string Medium::doubleSwap(string str, char a, char b)
{
    for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == a)
                str[i] = b;
            else if(str[i] == b)
                str[i] = a;
        }
    return str;
}

string Medium::uncensor(string censored_sentence, string vowels)
{
    string uncensored_sentence;
    int vowel_index = 0;
    for(auto censored_letter : censored_sentence)
    {
        if(censored_letter =='*')
        {
            uncensored_sentence += vowels[vowel_index];
            vowel_index++;
        }
        else
        {
            uncensored_sentence += censored_letter;
        }
    }
    return uncensored_sentence;
}

int Medium::letterCounter(vector<vector<char>> letter_matrix, char letter)
{
    int counter = 0;
    for(auto row : letter_matrix)
    {
        for(auto column : row)
        {
            if(column == letter)
                counter++;
        }
    }
    return counter;
}

string Medium::rps(string player_1, string player_2)
{
    if(player_1 == "rock" && player_2 == "scissors")
        return "Player 1 wins";
    else if(player_1 == "rock" && player_2 == "paper")
        return "Player 2 wins";
    else if(player_1 == "paper" && player_2 == "rock")
        return "Player 1 wins";
    else if(player_1 == "paper" && player_2 == "scissors")
        return "Player 2 wins";
    else if(player_1 == "scissors" && player_2 == "paper")
        return "Player 1 wins";
    else if(player_1 == "scissors" && player_2 == "rock")
        return "Player 2 wins";
    else
        return "TIE";   
}

double Medium::dis(int price, int discount)
{
    double reduction = static_cast<double>(price * discount) / 100;
    double discounted_price = price - reduction;
    return round(discounted_price*100)/100;
}

vector<int> Medium::sumOddAndEven(vector<int> array)
{
    int odd_sum = 0;
    int even_sum = 0;
    for(auto number : array)
    {
        if(number % 2 == 0)
            even_sum += number;
        else
            odd_sum += number;
    }
    return {even_sum, odd_sum};
}