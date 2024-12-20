// Создайте класс Круг с полем радиуса и методами для вычисления площади и длины окружности.

#include <iostream>
#include <cmath>

class Circle //Q// я понимаю что Rush! и заданий очень много, но  класс наверно называется Circle =)
{
    public:

        Circle(float p_radius)
        {
            _radius = p_radius;
        }

        float square()
        {
            return M_PI * pow(_radius, 2);
        }

        float length()
        {   
            return 2 * _radius * M_PI;
        }

        ~Circle()
        {}

    protected:
        float _radius; //Q// еще раз напоминаю, что данные задания лучше делать в рамках код стиля компании Промобот
};

int main()
{
    Circle circle(5);

    std::cout << circle.square() << "\n";
    std::cout << circle.length() << "\n";

    return 0;
}