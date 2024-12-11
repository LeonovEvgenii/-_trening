#include <iostream>
#include <queue>
#include <string>

int main()
{

    std::cout << "Инициализация\n";
    std::queue<std::string> q_1;

    std::cout << "Проверка на пустоту\n";
    std::cout << q_1.empty() <<"\n";

    std::cout << "Добавление элементов\n";
    q_1.push("первый");
    q_1.push("второй");
    q_1.push("третий");

    std::cout << "Проверка размера\n";
    std::cout << q_1.size() <<"\n";

    std::cout << "Получение первого элемента\n";
    std::cout << q_1.front() <<"\n";
    
    std::cout << "Получение последнего элемента\n";
    std::cout << q_1.back() <<"\n";

    std::cout << "Удаление последнего вошедшего элемента\n";
    q_1.pop();
    std::cout << q_1.front() <<"\n";
    std::cout << q_1.back() <<"\n";

    std::cout << "Инициализация деком\n";
    std::deque<std::string> dq_1 {"четвертый", "пятый", "шестой"};
    std::queue<std::string> q_2 {dq_1};

    while ( ! q_2.empty())
    {
        std::cout << q_2.front() <<"\n";
        q_2.pop();
    }
    
    std::cout << "Обмен элементами\n";
    q_1.swap(q_2);

    // Очередь не предоставляет доступ к любому элементу.
    // Предоставлят только к крайнему.
    // deque предоставляет домтуп по индексу или константный итератор (инфа не проверена).
    // или сипользовать временную структуру даных.

    std::cout << "hw\n";
    return 0;
}