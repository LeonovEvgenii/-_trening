//https://metanit.com/cpp/tutorial/2.14.php

#include <iostream>

int main()
{
    std::cout << "Демонстрация работы ссылки\n";
    int number {5};
    int &refNumber {number};
    std::cout << number << "\n";
    refNumber = 10;
    std::cout << refNumber << "\n";

    std::cout << "Работа с константами\n";
    const int number_const {3};
    const int &ref_number_const {number_const};
    std::cout << number_const << "\n";
    std::cout << ref_number_const << "\n";

    std::cout << "Работа с констаными ссылками\n";
    std::cout << "В остновном нужны для защиты переменной от изменения, \
    т к через сылку нельзя поменять.\n";
    std::cout << "(саму переменную можно)\n";
    const int &ref_number_const_2 {number};
    std::cout << ref_number_const_2 << "\n";
    number = 20;
    std::cout << ref_number_const_2 << "\n";

    std::cout << "Использование ссылок для защиты переменной в форыче\n";

    int num_array[] {1,2,3,4,5};

    for (int n : num_array)
    {
        n = n * 2;
    }

    std::cout << "Значения не поменялись\n";
    for (int n : num_array)
    {
        std::cout << n << ", ";
    }
    std::cout << "\n";

    for (int &n : num_array)
    {
        n = n * 2;
    }

    std::cout << "Теперь поменялись, т к операции производились не с копией из структуры, а с оригинальным элементом структуры\n";
    for (int n : num_array)
    {
        std::cout << n << ", ";
    }
    std::cout << "\n";

    std::cout << "Так только просмотр. Защита от изменения\n";
    for (const int &n : num_array)
    {
        std::cout << n << ", ";
    }
    std::cout << "\n";

    return 0;
}