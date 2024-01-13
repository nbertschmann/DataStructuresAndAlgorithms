#include <iostream>

int main()
{
    char numbers[][10] = {
        "one",
        "two",
        "three",
        "forty",
        "eight",
        "hundo",
    };

    for(int i = 0; i < 6; i++)
    {
        std::cout << numbers[i] << std::endl;
    }
}