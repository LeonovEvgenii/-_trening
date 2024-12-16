// Измените деструктор базового класса на виртуальный и покажите, как это решает проблему.

#include <iostream>
#include <memory>

class Base
{
    public:
        Base()
        {

        }

        virtual ~Base()
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

        ~Derivate() override
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