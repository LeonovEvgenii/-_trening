#include <iostream>
#include <thread>
#include <mutex>


std::mutex mtx; // Создаем мьютекс
int sharedResource = 0; // Общий ресурс

void increment(int id) {
    for (int i = 0; i < 100; ++i) {
        std::lock_guard<std::mutex> lock(mtx); // Блокируем мьютекс
        ++sharedResource; // Работа с общим ресурсом
        std::cout << sharedResource << " " << id << "\n"; 
    }
}

int main() {
    std::thread t1(increment, 1);
    std::thread t2(increment, 2);

    t1.join();
    t2.join();

    std::cout << "Final value: " << sharedResource << std::endl; // Ожидаем 2000
    return 0;
}