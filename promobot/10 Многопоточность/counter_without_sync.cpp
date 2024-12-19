// Реализуйте пример, где несколько потоков увеличивают общий счетчик без синхронизации, 
// и продемонстрируйте некорректность результата.

#include <iostream>
#include <thread>

int shared_counter = 0;

void func_thread(int id)
{
    for (int i = 0 ; i < 100 ; ++i)
    {
        if (shared_counter < 10000)
        {
            shared_counter++;
        }
        std::cout << shared_counter << " " << id <<"\n";
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