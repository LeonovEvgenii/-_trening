#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::vector<int> input_vec;

  // Синтаксис не соотвествует стандартам кода  i = 0; i < 5

  // Добавил файл для форматирования

  for (int i = 0; i < 5; i++)
  {
    int input_val;
    std::cin >> input_val;
    input_vec.push_back(input_val);
  }

  std::cout << "\nотсортированный\n";

  std::sort(input_vec.begin(), input_vec.end());

  // Чем отличается запись i++ от ++i - какую лучше использовать в цикле и почему?

  // Логически разницы нет, т к все действия происходят после итерации.
  // В одном из источников указан незначительный выигрыш в скорости.
  // Так же code style.

  // Сколько копирований происходит в каждом итераций цикла? как это уменьшить?

  // Думаю, что копирований в итерациях не происходит.

  for (std::vector<int>::iterator iter = input_vec.begin(); iter != input_vec.end(); iter++)
  {
    std::cout << *iter << "\n";
  }

  return 0;
}