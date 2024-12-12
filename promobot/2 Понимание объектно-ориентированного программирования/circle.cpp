// Создайте класс Круг с полем радиуса и методами для вычисления площади и длины окружности.

#include <iostream>
#include <cmath>

class Student
{
    public:
        

        Student(float p_radius)
        {
            radius_ = p_radius;
        }

        float square()
        {
            return M_PI * pow(radius_, 2);
        }

        float length()
        {
            return 2 * radius_ * M_PI;
        }

        ~Student()
        {}

    protected:
        float radius_;
};

int main()
{
    Student circle(5);

    std::cout << circle.square() << "\n";
    std::cout << circle.length() << "\n";

    return 0;
}