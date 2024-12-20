// https://metanit.com/cpp/tutorial/15.3.php

#include <iostream>

int main()
{
    std::cout << "Передача всех переменных по значению в лямбду\n";
    int n {10};
    auto add = [=] (int x) {return x+n;};
    std::cout << add(3) << "\n";

    std::cout << "Передача изменение переменной через указатель внутри лямбды\n";
    int* n_ptr {&n};
    auto add_2 = [n_ptr] (int x) {return (*n_ptr)=x;};
    add_2(4);
    std::cout << n << "\n";


    std::cout << "hw\n";
    return 0;
}