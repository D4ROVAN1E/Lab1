#include <iostream>
#include "trapezoid.h"
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
            break;
        case 2:
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
