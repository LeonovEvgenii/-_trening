// Создайте шаблон функции, который находит максимальное из двух значений любого типа.

#include <iostream>


template <typename T> T my_max(T a, T b)
{
    if (a>b)
        return a;
    else
        return b;
}

int main()
{
    std::cout<<my_max(5.2, 4.3)<< "\n";
    return 0;
}