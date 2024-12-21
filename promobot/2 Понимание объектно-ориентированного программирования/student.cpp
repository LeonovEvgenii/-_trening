// Реализуйте класс Студент, наследующий от класса Человек, добавьте поля для имени, возраста и средней оценки.

#include <iostream>

class Human
{
    public:
        std::string name;
        int age;

        Human(std::string param_name, int param_age)//Q// p - означает pointer и обычно используется в переменных, которые являются указателем (native, smart_pointer и т.д.) - прочитать венгерская нотация 
        {
            name = param_name;
            age = param_age;
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
        Student(std::string param_name, int param_age, float param_average_rating): Human(param_name, param_age)
        {
            average_rating = param_average_rating;
            std::cout<<"hw\n";
        }

};

int main()
{
    Student student("вася", 16, 3.4);

    return 0;
}