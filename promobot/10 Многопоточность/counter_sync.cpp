// Исправьте программу, добавив мьютекс или атомарные операции для синхронизации доступа к счетчику.

#include <iostream>
#include <thread>
#include <mutex>

int shared_counter = 0;
std::mutex mtx;

void func_thread(int id)
{
    for (int i = 0 ; i < 100 ; ++i)
    {
        mtx.lock();

        if (shared_counter < 10000)
        {
            shared_counter++;
        }

        std::cout << shared_counter << " " << id <<"\n";
        mtx.unlock();

    }
}

int main()
{
    std::thread thread_1(func_thread, 1);
    std::thread thread_2(func_thread, 2);

    thread_1.join();
    thread_2.join();

    std::cout << "hw\n";
    return 0;
}