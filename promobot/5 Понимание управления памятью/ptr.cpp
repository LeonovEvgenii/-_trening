#include <iostream>
#include <memory>

int* create2()
{
    int number = 120;
    int* ptr {&number};
    return ptr;
}

void use2(int* ptr)
{
    std::cout << *ptr << "\n";
    *ptr = 240;
    std::cout << *ptr << "\n";
}

void del2(int* ptr)
{
    // ptr.reset();
}

int main()
{
    int* ptr_main = create2();

    use2(ptr_main);

    del2(ptr_main);

    std::cout << "hw\n";
    return 0;
}