// Реализуйте алгоритм сортировки пузырьком для массива чисел.

#include <iostream>
#include <vector>

void print_mas(int* mas, int len)
{
    for (int i = 0 ; i < len ; ++i)
    {
        std::cout << mas[i] << ", ";
    }
    std::cout << "\n";
}

int main()
{
    int mas[] {2,5,8,2,3,33,6,7,67,1};

    int size_mas = std::size(mas);

    print_mas(mas, size_mas);

    for (int j = 0 ; j < size_mas - 1 ; ++j)
    {
        for (int i = 0 ; i < size_mas - 1 ; ++i)
        {
            if (mas[i] > mas[i+1])
            {
                int tmp = mas[i+1];
                mas[i+1] = mas[i];
                mas[i] = tmp;
            }
        }
    }

    print_mas(mas, size_mas);

    std::cout << "hw\n";
    return 0;
}