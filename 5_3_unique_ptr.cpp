#include <iostream>
#include <memory>

int main()
{
    // инициализация, всегда nullptr
    std::unique_ptr<int> ptr;
    
    std::cout << "указание на какую переменную ссылаться\n";
    int number = 120;
    std::unique_ptr<int> ptr2 { std::make_unique<int>(number) };

    // получение стандартного указателя из unique_ptr
    int* pointer = ptr2.get();

    std::cout << "работа как с обычным указателем\n";
    std::cout << *ptr2 << "\n";
    *ptr2 = 254;
    std::cout << *ptr2 << "\n";

    std::cout << "работа с массивом\n";
    unsigned n {5};
    std::unique_ptr<int[]> p_array { std::make_unique<int[]>(n) }; // создали указатель на массив
    p_array[2] = 56; // записали
    std::cout << p_array[2] << "\n"; // считали

    std::cout << "Удаление\n";
    ptr.reset();

    std::cout << "Удаление с переназначением\n";
    std::cout << *ptr2 << "\n";
    ptr2.reset(new int (77));
    std::cout << *ptr2 << "\n";



    std::cout << "hw\n";
    return 0;
}