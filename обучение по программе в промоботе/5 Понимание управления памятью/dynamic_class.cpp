// Реализуйте класс с динамическим выделением памяти в конструкторе и правильным освобождением в деструкторе.

#include <iostream>

class A
{
    int* ptr;

    A()
    {
        ptr = new int(5);
    };

    ~A()
    {
        delete ptr;
    }
};

int main()
{
    A a();

    std::cout << "hw\n";
    return 0;
}