// Реализуйте базовый класс с невиртуальным деструктором и производный класс с динамическими ресурсами. 
// Продемонстрируйте проблему при удалении через указатель на базовый класс.

#include <iostream>
#include <memory>

class Base
{
    public:
        Base()
        {

        }

        ~Base()
        {
            std::cout << "Вызов базового деструктора\n";
        }
};

class Derivate: public Base
{
    public:
        int *ptr;

        Derivate(int p1): Base()
        {
            ptr = new int(p1);
        }

        ~Derivate()
        {
            delete ptr;
            std::cout << "Вызов производного деструктора\n";
        }
};


int main()
{
    Base *ptr_d = new Derivate(5);
    delete ptr_d;

    std::unique_ptr<Base> u_ptr {std::make_unique<Derivate>(5)};

    std::cout << "hw\n";
    return 0;
}