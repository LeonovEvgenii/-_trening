// Реализуйте класс с конструктором преобразования и покажите, как использование ключевого слова explicit 
// влияет на неявные преобразования.

#include <iostream>

class A 
{
    public:
        A(int value) 
        {
            std::cout << "value " << value << "\n";
        }
};

void func_A(A obj) 
{

}

class B 
{
    public:
        explicit B(int value) 
        {
            std::cout << "value " << value << "\n";
        }
};

void func_B(B obj) 
{

}

int main() {
    A a(5);
    func_A(a);

    func_A(10);

    B b(3);
    func_B(b);

    // func_B(9); // ошибка кмпиляции, невозможна конвертация

    std::cout << "hw" << "\n";

    return 0;
}