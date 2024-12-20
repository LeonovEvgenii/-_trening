// https://metanit.com/cpp/tutorial/15.1.php

#include <iostream>

class Print
{
    public:
        void operator()(const std::string& m) const // консты походу обязательны
        {
            std::cout << m << "\n";
        }
};

class Sum
{
    public:
        int operator()(int a, int b) const // консты походу обязательны
        {
            return a+b;
        }
};

int main()
{
    std::cout << "Объект вызывается как функция через оператор ()\n";
    Print print;

    print("hello");

    std::cout << "Возвращаем результат\n";
    Sum sum;
    std::cout << sum(2,3) << "\n";

    std::cout << "hw\n";
    return 0;
}