#include <iostream>
#include <list>
#include <string>

std::list<std::string> tasks {
        "первая",
        "вторая",
        "третья"
};

void add_task (std::string task)
{
    tasks.push_front(task);
}

void remove_task ()
{
    tasks.pop_back();
}

void print_tasks ()
{
    for(std::string& task : tasks)
    {
        std::cout << task << "\n";
    }
    std::cout << "\n";
}

int main ()
{
    print_tasks();

    add_task("четвертая");

    remove_task();

    print_tasks();

    return 0;
}