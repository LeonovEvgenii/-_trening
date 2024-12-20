// Реализуйте класс Студент, наследующий от класса Человек, добавьте поля для имени, возраста и средней оценки.

#include <iostream>

class Human
{
    public:
        std::string name;
        int age;

        Human(std::string p_name, int p_age)//Q// p - означает pointer и обычно используется в переменных, которые являются указателем (native, smart_pointer и т.д.) - прочитать венгерская нотация 
        {
            name = p_name;
            age = p_age;
        }

};

//Q// что будет, если public поменять на другие модификаторы доступа?
// какие изменения в коде нужно сделать, чтобы задача была выполнена? 
class Student: public Human
{
    public:
        
        float average_rating;

        //Q// сколько копирований будет при передачи std::string таким образом - как это оптимизировать?
        // почему данный способ оптимизации не подходит для инт и флоат? 
        Student(std::string p_name, int p_age, float p_average_rating): Human(p_name, p_age)
        {
            average_rating = p_average_rating;
            std::cout<<"hw\n";
        }

};

int main()
{
    Student student("вася", 16, 3.4);

    return 0;
}