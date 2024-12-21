#include <iostream>
#include <cmath> // Для функции sqrt

// Определение структуры Point
struct Point {
    double x; // Координата x
    double y; // Координата y

    // Метод для вычисления расстояния до другой точки
    double distanceTo(const Point& other) const {
        return sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
    }
};

int main() {
    // Создание двух точек
    Point p1 = {3.0, 4.0};
    Point p2 = {0.0, 0.0};

    // Вычисление расстояния между точками
    double distance = p1.distanceTo(p2);

    // Вывод результата
    std::cout << "Расстояние между точками: " << distance << std::endl;

    return 0;
}