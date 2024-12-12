// Реализуйте программу, которая вычисляет факториал числа с помощью цикла for.

#include <iostream>

int main()
{
    int input_factorial = 5;
    int rez = 1;
    for (int i = 1; i < input_factorial; i++)
    {
        rez = rez * (i+1);
    }

    std::cout<< rez << "\n";
    return 0;
}