// Напишите программу, которая динамически выделяет память для массива целых чисел, заполняет его и затем освобождает память.

#include <iostream>
    
//Q// в какои области памяти создается эта переменная? 
int count_number = 4;

int* create()
{
    //Q// в какои области памяти создается эта переменная? на какую область памяти ссылается?
    int *numbers {new int[count_number]};
    
    for (int i = 0 ; i < count_number ; i++)
    {
        numbers[i] = i;
    }

    return numbers;
}

void use(int* numbers)
{
    for (int i = 0 ; i < count_number ; i++)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}

void del(int* numbers)
{
    //Q// как delete понимает размер который надо удалить?
    delete [] numbers;
}


int main()
{
    int* mian_numbers = create();

    use(mian_numbers);

    del(mian_numbers);

    std::cout << "hw\n";
    return 0;
}