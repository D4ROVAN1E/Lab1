#include <iostream>
#include "trapezoid.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
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
            cout << "\nВторая сторона прямоугольника = ";
            cin >> b;
            if(a>0 && b>0){
            cout << "Периметр прямоугольника равен: " << per(a,b) << endl;
            cout << "Площадь прямоугольника равна: " << sq(a,b) << endl;
            cout << "Длина диагонали равна: " << diagonal(a,b) << endl << endl;
            }
            else 
            cout<<"error"<<endl;
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
            double FirstSide, SecondSide, UpSide, DownSide;
            cout << "\nЛевая грань трапеции = ";
            cin >> FirstSide;
            cout << "\nПарвая грань трапеции = ";
            cin >> SecondSide;
            cout << "\nВерхняя грань трапеции = ";
            cin >> UpSide;
            cout << "\nНижняя грань трапеции = ";
            cin >> DownSide;
            if (((FirstSide + SecondSide > (DownSide - UpSide)) && (FirstSide + (DownSide - UpSide) > SecondSide) && ((DownSide - UpSide) + SecondSide > FirstSide)) && (FirstSide > 0 && SecondSide > 0 && UpSide > 0 && DownSide > 0) ) {
            cout << "Периметр равен " << perimetrTr(FirstSide, SecondSide, UpSide, DownSide) << endl;
            cout << "Площадь равна " << squareTr(FirstSide, SecondSide, UpSide, DownSide) << endl;
            cout << "Длина средней линии равна " << midLineTr(FirstSide, SecondSide, UpSide, DownSide) << endl;
            } else {
                cout << "Трапеция не существует";
            }
            break;
        case 4:
            double radius, corner;
            cout << "\nРадиус окружности = ";
            cin >> radius;
            cout << "\nУгол сектора = ";
            cin >> corner;
            if (radius>0 && (corner>0 && corner <=360)){
            cout << "Длина окружности равна " << lengthCir(radius) << endl;
            cout << "Площадь окружности равна " << squareCir(radius) << endl;
            cout << "Площадь сектора окружности равна " << squareCirSectr(corner, radius) << endl;
            }
            else{
            cout << "error"<<endl;
            }
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
