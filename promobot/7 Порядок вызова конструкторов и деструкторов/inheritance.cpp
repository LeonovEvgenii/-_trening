// Создайте базовый класс и несколько производных классов, продемонстрируйте порядок вызова их конструкторов 
// и деструкторов.

#include <iostream>

class A
{
    public:
        A()
        {
            std::cout << "Конструктор класса А\n";
        }

        ~A()
        {
            std::cout << "Деструктор класса А\n";
        }
};

class B: public A
{
    public:
        B(): A()
        {
            std::cout << "Конструктор класса B\n";
        }

        ~B()
        {
            std::cout << "Деструктор класса B\n";
        }
};

class C: public B
{
    public:

        int field;

        C(int p): B()
        {
            field = p;
            std::cout << "Конструктор класса C\n";
        }

        ~C()
        {
            std::cout << "Деструктор класса C\n";
        }

        void print()
        {
            std::cout << field << "\n";
        }
        
};

int main()
{
    C c(4);

    std::cout << "hw\n";
    return 0;
}