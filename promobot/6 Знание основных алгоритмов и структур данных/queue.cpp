// Создайте реализацию очереди с помощью связного списка.

#include <iostream>
#include <list>

class My_queue
{
//Q// хотелось бы видеть инкапсуляцию как принци ООП, т.к. урок пройден
//как минимум для этого необходимо убрать публичный доступ у члена класса дата
public:
  std::list<int> data;
  //Q// думаю задача намного "сложнее"
  // предлагаю использовать класс { int value; void* pnext } как основу для создания
  // собственного списка - в использовании std::list нет практического смысла обучения.

  void push(int val)
  {
    data.push_back(val);
  }

  int front()
  {
    return data.front();
  }

  int back()
  {
    return data.back();
  }

  void pop()
  {
    data.pop_front();
  }
};

int main()
{
  My_queue my_queue;

  my_queue.push(1);
  my_queue.push(2);
  my_queue.push(3);
  my_queue.push(4);

  std::cout << "front " << my_queue.front() << "\n";
  std::cout << "back " << my_queue.back() << "\n";

  my_queue.pop();

  std::cout << "front " << my_queue.front() << "\n";

  std::cout << "hw\n";
  return 0;
}