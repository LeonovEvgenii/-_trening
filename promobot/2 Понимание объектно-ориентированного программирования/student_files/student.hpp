#include "human.hpp"

class Student: public Human
{
    public:
        
        float average_rating;

        Student(std::string p_name, int p_age, float p_average_rating);
};