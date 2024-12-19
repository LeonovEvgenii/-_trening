// Напишите программу, в которой создается несколько потоков для вычисления элементов массива.

#include <iostream>
#include <vector>
#include <thread>
#include <functional>

void sum(std::vector<int>& vec, int id)
{
    for (int i = 0 ; i < 100 ; ++i)
    {
        if (vec[i] != i * 2)
        {
            vec[i] = vec[i] * 2;
            std::cout << vec[i] << " " << id << "\n";
        }
        else
        {
            continue;
        }
    }
}


int main()
{

    std::vector<int> vec;

    for (int i = 0; i < 100; ++i) {
        vec.push_back(i);
    }

    std::thread thread_1(sum, std::ref(vec), 1);
    std::thread thread_2(sum, std::ref(vec), 2);

    thread_1.join();
    thread_2.join();

    std::cout << "hw\n";
    return 0;
}