#include <iostream>

int main()
{
    short a = 1;
    int b = 1;
    long c = 1;
    unsigned int bb = 1;
    signed int bbb = 1;
    char d = 'q'; // важно именно одинарные кавычки
    int number_system_16 = 0x1A;
    int number_system_8 = 034;
    int number_system_2 = 0b1010;
    unsigned long example_unsigned_long = 0b1010;
    double e = 5E3;
    double f = 3.5e-3;
    auto g = 42; // auto обязательно с инициализацией
    std::cout << sizeof(f)<<"\n";//размер в байтах
    return 0;
}