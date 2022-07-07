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