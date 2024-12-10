#include <iostream>

class Person
{
    public:
        std::string name = "rrr";
        // std::string name{"rrr"}; // можно так инициализировать
        void print ()
        {
            std::cout<<name<<"\n";
        }
};

int main()
{
    Person p;
    Person *ptr = &p;
    p.print();
    ptr->print();
    return 0;
}