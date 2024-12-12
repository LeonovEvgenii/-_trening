#include <iostream>
#include "student.hpp"

Student::Student(std::string p_name, int p_age, float p_average_rating):Human(p_name, p_age)
{
    average_rating = p_average_rating;
    std::cout<<"hw\n";
}


