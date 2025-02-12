#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

// Функция для вычисления расстояния между двумя точками
float distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Функция для вычисления периметра треугольника
float perimeter(float a, float b, float c)
{
    return a + b + c;
}

// Функция для вычисления площади треугольника по формуле Герона
float area(float a, float b, float c)
{
    float s = (a + b + c) / 2; // Полупериметр
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    setlocale(LC_ALL, "Russian"); // Устанавливаем русскую локаль

    // Координаты трёх точек
    float x1, y1, x2, y2, x3, y3;

    // Ввод координат точек
    cout << "Введите координаты точки A (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты точки B (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Введите координаты точки C (x3, y3): ";
    cin >> x3 >> y3;

    // Вычисление длин сторон треугольника
    float AB = distance(x1, y1, x2, y2);
    float BC = distance(x2, y2, x3, y3);
    float CA = distance(x3, y3, x1, y1);

    // Вычисление периметра
    float p = perimeter(AB, BC, CA);

    // Вычисление площади
    float s = area(AB, BC, CA);

    // Вывод результатов
    cout << "Периметр треугольника: " << p << endl;
    cout << "Площадь треугольника: " << s << endl;

    // Ждём нажатие клавиши перед закрытием консоли
    cin.get();
    cin.get();

    return 0;
}
