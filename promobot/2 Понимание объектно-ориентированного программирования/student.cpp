// Реализуйте класс Студент, наследующий от класса Человек, добавьте поля для имени, возраста и средней оценки.

#include <iostream>

class Human
{
    public:
        std::string name;
        int age;

        Human(std::string p_name, int p_age)
        {
            name = p_name;
            age = p_age;
        }

};

class Student: public Human
{
    public:
        
        float average_rating;

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