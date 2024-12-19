// Используйте std::condition_variable для реализации потокобезопасной очереди

#include <iostream>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <thread>

std::mutex mtx;
std::queue<int> qu;
std::condition_variable cv;

void producer_f(int id)
{
    for(int i = 0 ; i < 100 ; ++i)
    {
        mtx.lock();
        std::cout << "Заблокировал " << id << "\n";
        
        qu.push(i);
        std::cout << "Положил элемент " << i << "\n";

        std::cout << "Разблокировал " << id << "\n";

        cv.notify_one();
        mtx.unlock();
    }
}   

void consumer_f(int id)
{
    for(int i = 0 ; i < 100 ; ++i)
    {

        std::unique_lock<std::mutex> lock(mtx);
        std::cout << "Заблокировал " << id << "\n";

        cv.wait(lock, [] { return !qu.empty(); });

        std::cout << "Взял элемент " << qu.front() << "\n";
        qu.pop();

        std::cout << "Разблокировал " << id << "\n";
    }
}

int main()
{
    std::thread producer(producer_f, 1);
    std::thread consumer(consumer_f, 2);

    producer.join();
    consumer.join();


    std::cout << "hw\n";
    return 0;
}