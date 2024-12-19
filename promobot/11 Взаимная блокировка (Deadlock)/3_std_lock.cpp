// Реализуйте функцию, использующую std::lock для одновременного захвата нескольких мьютексов 
// без риска deadlock.

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex m1;
std::mutex m2;

void t1_f()
{
    std::cout << "Запуск 1 потока\n";

    std::cout << "Поток 1 жду 1 мьютекс\n";
    std::cout << "Поток 1 жду 2 мьютекс\n";

    std::lock(m1, m2);

    std::lock_guard<std::mutex> l_1(m1, std::adopt_lock);
    std::lock_guard<std::mutex> l_2(m2, std::adopt_lock);

    std::cout << "Поток 1 мьютекс 1 захвачен\n";
    std::cout << "Поток 1 мьютекс 2 захвачен\n";

    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    std::cout << "Окончание 1 потока\n";

}

void t2_f()
{   
    std::cout << "Запуск 2 потока\n";

    std::cout << "Поток 2 жду 2 мьютекс\n";
    std::cout << "Поток 2 жду 1 мьютекс\n";

    std::lock(m1, m2);

    std::lock_guard<std::mutex> l_1(m2, std::adopt_lock);
    std::lock_guard<std::mutex> l_2(m1, std::adopt_lock);

    std::cout << "Поток 2 мьютекс 2 захвачен\n";
    std::cout << "Поток 2 мьютекс 1 захвачен\n";

    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    std::cout << "Окончание 2 потока\n";
}


int main()
{
    std::thread t1(t1_f);
    std::thread t2(t2_f);

    t1.join();
    t2.join();

    std::cout << "hw\n";
    return 0;
}