#include <iostream>
#include "trapezoid.h"
#include "rectangle.h"
#include "triangle.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    bool menuActive = 1; int numOfFigure = 0;
    while (menuActive == 1)
    {
        cout << "Выберите геометрическую фигуру \n1) Прямоугольник \n2) Треугольник \n3) Трапеция \n4) Окружность \n5) Выход из программы \n\n";
        cin >> numOfFigure;
        switch (numOfFigure)
        {
        case 1:
            double a,b;
            cout << "\nПервая сторона прямоугольника = ";
            cin >> a;
            cout << "\nВторая сторона прямоугольника: = ";
            cin >> b;
            cout << "Периметр прямоугольника равен: " << per(a,b) << endl;
            cout << "Площадь прямоугольника равна: " << sq(a,b) << endl;
            cout << "Длина диагонали равна: " << diagonal(a,b) << endl << endl;
            break;
        case 2:
            double firstSide, secondSide, downSide;
            cout << "Введите длины сторон треугольника: ";
            cin >> firstSide >> secondSide >> downSide;
            if ((firstSide + secondSide > downSide) && (firstSide + downSide > secondSide) && (secondSide + downSide > firstSide)) {
                cout << "Периметр треугольника: " << perimeter(firstSide, secondSide, downSide) << endl;
                cout << "Площадь треугольника: " << area_heron(firstSide, secondSide, downSide) << endl;
            if (isosceles(firstSide, secondSide, downSide)) {
                cout << "Треугольник является равнобедренным." << endl;
            }
            else {
                cout << "Треугольник не является равнобедренным." << endl;
            }
            }
            else {
                cout << "Указанные стороны не образуют треугольник." << endl;
            }
            break;
        case 3:
        {
            double firstSide, secondSide, upSide, downSide;
            cout << "\nЛевая грань трапеции = ";
            cin >> firstSide;
            cout << "\nПарвая грань трапеции = ";
            cin >> secondSide;
            cout << "\nВерхняя грань трапеции = ";
            cin >> upSide;
            cout << "\nНижняя грань трапеции = ";
            cin >> downSide;
            cout << "Периметр равен " << perimetrTr(firstSide, secondSide, upSide, downSide) << endl;
            cout << "Площадь равна " << squareTr(firstSide, secondSide, upSide, downSide) << endl;
            cout << "Длинна средней линии равна " << midLineTr(firstSide, secondSide, upSide, downSide) << endl;
            break;
        }
        case 4:
            break;
        case 5:
            menuActive = 0;
            break;
        default:
            cout << "Неверно выбран номер\n\n\n\n\n";
            break;
        }
    }
}
