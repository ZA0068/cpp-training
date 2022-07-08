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

int Medium::spinAround(vector<string> rotate90degrees)
{
    int rotations = 0;
    for(auto direction : rotate90degrees)
        {
        if(direction == "right")
            rotations += 90;
        else
            rotations -= 90;
        }
        rotations /= 360;
        return abs(rotations);
}

vector<string> Medium::pingPong(vector<string> moves, bool has_won)
{
    vector<string> final_moves;
    for(int i = 0; i < moves.size(); i++)
    {
        final_moves.push_back(moves[i]);
        if(i < moves.size()-1)
            final_moves.push_back("Pong!");
    }
    if(has_won)
    {
        final_moves.push_back("Pong!");
    }
    return final_moves;
}

std::pair<int, int> Medium::XOR(int a, int b)
{
    a ^= b;
    b ^= a;
    a ^= b;
    return {a, b};
}

vector<vector<int>> Medium::squarePatch(int n)
{
    vector<vector<int>> square_patch;
    for(int i = 0; i < n; i++)
    {
        vector<int> row;
        for(int j = 0; j < n; j++)
        {
            row.push_back(n);
        }
        square_patch.push_back(row);
    }
    return square_patch;
}

string Medium::reverse(string str)
{
    if(str == "\0")
        return str;
    else
        return reverse(str.substr(1)) + str[0];
}

bool Medium::rectangleInCircle(int rectangle_width, int rectangle_height, int circle_radius)
{
    double rectangle_radius = sqrt((rectangle_width * rectangle_width + rectangle_height * rectangle_height)) / 2;
    return rectangle_radius <= circle_radius;
}

bool Medium::simonSays(vector<int> array1, vector<int> array2)
{
    if(array1.size() != array2.size())
        return false;
    for(int i = 0; i < array1.size()-1; i++)
    {
        if(array1[i] != array2[i+1])
            return false;
    }
    return true;
}

string Medium::calculateArrowhead(vector<string> arrowheads_array)
{
    int direction_count = 0;
    string arrow_direction;
    for(auto& arrowhead : arrowheads_array)
        {
            for(auto& direction : arrowhead)
            {
                if(direction == '<')
                    direction_count++;
                else
                    direction_count--;
            }
        }
    while(direction_count != 0)
    {
        if(direction_count > 0)
        {
            arrow_direction += '<';
            direction_count--;
        }
        else
        {
            arrow_direction += '>';
            direction_count++;
        }
    }
    return arrow_direction;
}

vector<int> Medium::miniPeaks(vector<int> array)
{
    vector<int> peaks;
    for(int i = 1; i < array.size()-1; i++)
    {
        if(array[i] > array[i-1] && array[i] > array[i+1])
            peaks.push_back(array[i]);
    }
    return peaks;
}

string Medium::detectWord(string crowd)
{
    string word;
    for(auto& letter : crowd)
    {
        if(letter >= 97 && letter <= 122)
            word += letter;
    }
    return word;
}

int Medium::doubledPay(int penny)
{
    int returns = 0;
    for(int i = 0; i < penny; i++)
    {
        returns = returns + pow(2, i);
    }
    return returns;
}