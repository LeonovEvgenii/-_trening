// Напишите программу, которая выводит все чётные числа от 1 до 100.

#include <iostream>

int main()
{
    for (int i=1; i<100; i++)
    {
        if (i%2==0)
        {
        std::cout<<i<< "\n";
        }
    }
    return 0;
}