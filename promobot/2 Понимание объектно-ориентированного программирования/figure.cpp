// Напишите программу, демонстрирующую полиморфизм с помощью базового класса Фигура и производных классов Квадрат, Треугольник.

#include <iostream>
#include <cmath>

class Figure
{
    public:
        
        virtual float area()
        {
            return 0;
        }
};

class Square: public Figure
{
    public:
        int x1, x2, x3, x4, y1, y2, y3, y4;

        Square(int p_x1, int p_x2, int p_x3, int p_x4, int p_y1, int p_y2, int p_y3, int p_y4)
        {
            x1 = p_x1;
            x2 = p_x2;
            x3 = p_x3;
            x4 = p_x4;

            y1 = p_y1;
            y2 = p_y2;
            y3 = p_y3;
            y4 = p_y4;
        }

        float area() override
        {
            float side_lengh = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 0.5);

            return pow(side_lengh, 2);
        }
};

class Triangle: public Figure
{
    public:
        int x1, x2, x3, y1, y2, y3;

        Triangle(int p_x1, int p_x2, int p_x3, int p_y1, int p_y2, int p_y3)
        {
            x1 = p_x1;
            x2 = p_x2;
            x3 = p_x3;

            y1 = p_y1;
            y2 = p_y2;
            y3 = p_y3;
        }

        float area() override
        {
            return (((x1-x3)*(y2-y3))-((x2-x3)*(y1-y3)))*0.5;
        }
};

int main()
{
    Square square(0, 0, 2, 2, 0, 2, 2, 0);
    std::cout << square.area() << "\n";

    Triangle triangle(0, 2, 1, 0, 0, 2);
    std::cout << triangle.area() << "\n";
    return 0;
};