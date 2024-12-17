// Напишите пример, где неявное приведение типов приводит к потере данных, и предложите решение.

#include <iostream>
#include <limits>

int main()
{
    long large_value = 3000000000;
    // long large_value = 30000;

    int int_value = large_value;

    std::cout << "long " << large_value << "\n";
    std::cout << "int " << int_value << "\n";

    if (large_value > std::numeric_limits<int>::max() || large_value < std::numeric_limits<int>::min())
    {
        std::cout << "Не пройдена проверка для преобразовнаия" << "\n";
    }
    else
    {
        int_value = static_cast<int>(large_value);
        std::cout << "static_cast int " << int_value << "\n";

    }

    std::cout << "hw\n";
    return 0;
}