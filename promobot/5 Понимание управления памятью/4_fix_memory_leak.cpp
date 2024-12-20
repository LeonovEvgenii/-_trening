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
        //Q// что происходит за одну итерацию цикла?
        std::unique_ptr<A> ptr_a = std::make_unique<A>();
    }
    
    //Q// как проверить что память в этом случае не течет? 
    std::cout << "hw\n";
    return 0;
}