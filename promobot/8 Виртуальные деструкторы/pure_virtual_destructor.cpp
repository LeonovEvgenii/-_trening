// Создайте абстрактный класс с чисто виртуальным деструктором и объясните, как это влияет на 
// создание экземпляров класса.

// Объекты абстрактного класса нельзя создать.
// В производном классе обязательно придётся реализовать деструктор.

#include <iostream>
#include <memory>

class Base
{
    public:
        virtual ~Base() = 0;
};

Base::~Base()
{
    std::cout << "Вызов базового деструктора\n";
}

class Derivate: public Base
{
    public:
        int *ptr;

        Derivate(int p1)
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