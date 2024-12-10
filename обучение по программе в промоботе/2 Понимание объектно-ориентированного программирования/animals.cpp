#include <iostream>

class Animals
{
    virtual void make_sound() = 0;
};

class Dog: public Animals
{
    public:

        void make_sound() override
        {
            std::cout << "gau gau\n";
        }

};

class Cat: public Animals
{
    public:
    
        void make_sound() override
        {
            std::cout << "mau mau\n";
        }
};

int main()
{
    Dog dog;
    dog.make_sound();

    Cat cat;
    cat.make_sound();

    return 0;
}