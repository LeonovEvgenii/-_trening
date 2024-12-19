#include <iostream>
#include <thread>
#include <chrono>

// Функция, которая будет выполняться в новом потоке
void threadFunction(int id) {

    std::this_thread::sleep_for(std::chrono::seconds(id));
    
    std::cout << "Поток " << id << " запущен." << std::endl;
    // Здесь можно выполнять какие-либо действия
}

int main() {
    // Создаем новый поток и передаем ему функцию и аргументы
    std::thread t1(threadFunction, 1);
    std::thread t2(threadFunction, 2);


    // Проверяем, запущены ли потоки
    if (t1.joinable()) {
        std::cout << "1" << std::endl;
        t1.join(); // Ожидаем завершения потока t1
        std::cout << "11" << std::endl;


    }
    if (t2.joinable()) {
        std::cout << "2" << std::endl;
        t2.join(); // Ожидаем завершения потока t2
        std::cout << "22" << std::endl;
    }

    std::cout << "Все потоки завершены." << std::endl;
    return 0;
}