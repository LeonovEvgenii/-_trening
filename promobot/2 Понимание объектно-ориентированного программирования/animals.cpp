// Создайте абстрактный класс Животное с чисто виртуальной функцией издатьЗвук(), 
// и реализуйте производные классы Собака и Кошка.

#include <iostream>

class Animal //Q// Animal - животное (т.е. любое асбтрактное животное) - множественное число недопустимо
{
    virtual void make_sound() = 0;
};

class Dog: public Animal
{
    public:

        void make_sound() override
        {
            std::cout << "gau gau\n";
        }

};

class Cat: public Animal
{
    public:
    
        void make_sound() override
        {
            std::cout << "mau mau\n";
        }
};

//Q// давай изменим код так, что бы здесь не было переменных типа Dog, Cat
// а был только Animal, при этом в логе я хочу видеть гав - гав и мяу мяу
int main()
{
    Dog dog;
    dog.make_sound();

    Cat cat;
    cat.make_sound();

    return 0;
}