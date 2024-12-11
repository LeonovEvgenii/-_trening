#include <iostream>
#include <list>
#include <string>

std::list<std::string> tasks{ "первая", "вторая", "третья" };

// Сколько операций копирований происходит при выполнении функций ?

// Думаю, что одно копирование task, т к оно передается по значению.

void add_task(std::string task)
{
  tasks.push_front(task);
}

void remove_task()
{
  tasks.pop_back();
}

void print_tasks()
{
  // Что означает & ?

  // Создание ссылки, для отсутсвия возможности изменият объект
  // коллекции.

  for (std::string& task : tasks)
  {
    std::cout << task << "\n";
  }
  std::cout << "\n";
}

int main()
{
  print_tasks();

  // Код компилируется?

  // Да, компилируется

  // Как работает компилятор для указанной функции и входящего значения ? 

  // Создается временный объект std::string со значением "четвертая"
  // и передается в функцию.

  add_task("четвертая");

  remove_task();

  // print_tasks(); - с т.з. задания необходимо добавить печать

  // Не понял, как именно должна выглядеть печать

  print_tasks();

  return 0;
}