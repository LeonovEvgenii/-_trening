#include <iostream>

int main()
{
    std::cout << "Создание\n";
    int *numbers {new int[4]};

    std::cout << "Можно так после с++ 20\n";
    int *numbers2 {new int[]{1,2,3,4}};
    
    std::cout << "Все это можно в циклах применить\n";
    std::cout << "Получение элемента через синтаксис массивов\n";
    std::cout << numbers2[2] << "\n";
    std::cout << "Получение элемента через указатели\n";
    std::cout << *(numbers2 + 1) << "\n";
    std::cout << "Создание другого указателя и доступ уже через него\n";
    int *p_tmp {numbers2};
    std::cout << *(p_tmp + 1) << "\n";

    std::cout << "Удаление\n";
    delete [] numbers;
    
    // Многомерные массивы не смотрел !!!!

    std::cout << "hw\n";
    return 0;
}