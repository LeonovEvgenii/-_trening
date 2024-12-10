// Используйте std::unique_ptr для управления динамически выделяемым объектом.

#include <iostream>
#include <memory>

std::unique_ptr<int> create()
{
    int number = 120;
    std::unique_ptr<int> ptr { std::make_unique<int>(number) };
    return ptr;
}

void use(std::unique_ptr<int>& ptr)
{
    std::cout << *ptr << "\n";
    *ptr = 240;
    std::cout << *ptr << "\n";
}

void del(std::unique_ptr<int>& ptr)
{
    ptr.reset();
}


int main()
{
    std::unique_ptr<int> ptr_main = create();

    use(ptr_main);
    
    del(ptr_main);

    std::cout << "hw\n";
    return 0;
}