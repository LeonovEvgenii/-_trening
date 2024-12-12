// Создайте программу, демонстрирующую утечку памяти, и исправьте ее с помощью умных указателей.

#include <iostream>

class A
{
    public:
        A()
        {
            std::cout << "объект создан\n";
        }

        ~A()
        {
            std::cout << "объект удален\n";
        };
};


int main()
{
    for (int i = 0 ; i < 5 ; i++)
    {
        A* a = new A();
    }

    std::cout << "hw\n";
    return 0;
}