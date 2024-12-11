#include <iostream>
#include <stack>
#include <string>

int main()
{

    std::cout << "Инициализация\n";
    std::stack<std::string> stack_1;

    std::cout << "Проверка на пустоту\n";
    std::cout << stack_1.empty() <<"\n";

    std::cout << "Добавление элементов\n";
    stack_1.push("первый");
    stack_1.push("второй");
    stack_1.push("третий");

    std::cout << "Проверка на пустоту\n";
    std::cout << stack_1.empty() <<"\n";

    std::cout << "Узнавание размеров\n";
    std::cout << stack_1.size() <<"\n";

    std::cout << "Получить верхний элемент\n";
    std::cout << stack_1.top() <<"\n";

    std::cout << "Удаление самого поверхностного элемента\n";
    stack_1.pop();
    std::cout << stack_1.top() <<"\n";
    
    std::cout << "Инициализация с помощью двусторонней очереди\n";
    std::deque<std::string> deque_1 {"первый", "второй", "третий"};
    std::stack<std::string> stack_2 {deque_1};

    while ( ! stack_2.empty())
    {
        std::cout << stack_2.top() <<"\n";
        stack_2.pop();
    }

    std::cout << "Инициализация с помощью другого стека\n";
    std::stack<std::string> stack_3 {stack_1};

    while ( ! stack_3.empty())
    {
        std::cout << stack_3.top() <<"\n";
        stack_3.pop();
    }

    std::cout << "hw\n";
    return 0;
}