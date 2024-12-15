// Напишите класс, содержащий другие объекты в качестве членов, и проследите порядок их инициализации и разрушения.

#include <iostream>

class A
{
    public:
        A(int p)
        {
            std::cout << "Использование параметра " << p <<"\n";
            std::cout << "Конструктор класса А\n";
        }

        ~A()
        {
            std::cout << "Деструктор класса А\n";
        }
};

class A_2
{
    public:
        A_2(int p)
        {
            std::cout << "Использование параметра " << p <<"\n";
            std::cout << "Конструктор класса А_2\n";
        }

        ~A_2()
        {
            std::cout << "Деструктор класса А_2\n";
        }
};

class B
{
    public:
        A a;
        A_2 a_2;

        B(int p): a_2(p), a(p)
        {
            std::cout << "Конструктор класса B\n";
        }

        ~B()
        {
            std::cout << "Деструктор класса B\n";
        }

};



int main()
{
    B b(10);

    std::cout << "hw\n";
    return 0;
}