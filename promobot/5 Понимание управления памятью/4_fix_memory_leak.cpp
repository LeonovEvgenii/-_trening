#include <iostream>
#include <memory>

class A
{
    public:
        A()
        {
            std::cout << "объект создан\n";
        }

        ~A()
        {
            std::cout << "объект удален\n";
        };
};


int main()
{
    for (int i = 0 ; i < 5 ; i++)
    {
        std::unique_ptr<A> ptr_a = std::make_unique<A>();
    }

    std::cout << "hw\n";
    return 0;
}