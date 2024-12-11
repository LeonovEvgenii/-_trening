#include <iostream>
#include <memory>

int main()
{
    std::cout << "Инициализация одного указателя с помощью другого\n";
    std::shared_ptr<int> ptr1 { std::make_shared<int>(22) };
    std::shared_ptr<int> ptr2 = ptr1;

    std::cout << ptr1 << "\n";
    std::cout << *ptr1 << "\n";
    std::cout << ptr2 << "\n";
    std::cout << *ptr2 << "\n";

    std::cout << "hw\n";
    return 0;
}