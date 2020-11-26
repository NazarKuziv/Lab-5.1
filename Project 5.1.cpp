// Lab_05_1.cpp
// < Кузів Назар >
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз
// Варіант 6

#include <iostream>
#include <cmath>

using namespace std;

double h(const double x, const double y)
{
    return x * y / (1 + x * x * y * y);
    
}

int main()
{
    double s, t;

    cout << " s = "; cin >> s;
    cout << " t = "; cin >> t;

    double v = (h(s * s, t * t) + pow(h(s + t, 1), 2)) / (1 + pow(h(s * t, 2), 2));

    cout << " v = " << v << endl;

    return 0;
}