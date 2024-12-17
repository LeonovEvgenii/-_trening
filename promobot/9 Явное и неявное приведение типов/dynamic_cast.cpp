// Используйте dynamic_cast для безопасного приведения указателей в иерархии классов и обработайте случай 
// неудачного приведения.

#include <iostream>

class A
{
    public:
        virtual ~A() // причем обязателен виртуальный метод для dynamic_cast
        {

        }
};

class B: public A
{
    public:
        B()
        {

        }

};

class C: public A
{
    public:
        C()
        {

        }

};


int main()
{
    A *ptr_A = new B();

    B *ptr_B = dynamic_cast<B*>(ptr_A);

    if (ptr_B == nullptr)
    {
        std::cout << "приведение в указатель на B не удалось\n";
    }

    C *ptr_C = dynamic_cast<C*>(ptr_A);

    if (ptr_C == nullptr)
    {
        std::cout << "приведение в указатель на C не удалось\n";
    }

    std::cout << "hw\n";
    return 0;
}