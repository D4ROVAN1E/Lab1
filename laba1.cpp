#include <iostream>
#include "rectangle.h"
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"RU");
    
    int x , j;
    double a,b;
    while( j != 0){
        cout << "Введите значения которвые вы хотите вывести" << endl;
        cout << "1. Вычисление периметра прямоугольника" << endl << "2. Вычисление площади прямоугольника" <<  endl <<"3. Вычисление диагонали прямоугольника" << endl << "4. Выход" << endl;
        cin >> x; 
    switch(x){
        
        case 1: 
        cout << "Укажите стороны прямоугольника: " << endl;
        cin >> a >> b;
            cout << "Периметр прямоугольника равен:  " << per(a,b) << endl << endl << endl << endl << endl << endl << endl;
            break;
        
        case 2:
        cout << "Укажите стороны прямоугольника: " << endl;
        cin >> a >> b;
            cout << "Площадь прямоугольника равна: " << sq(a,b) << endl << endl << endl << endl << endl << endl << endl;
            break;
        case 3:
        cout << "Укажите стороны прямоугольника: " << endl;
        cin >> a >> b;
            cout << "Длина диагонали равна:  " << diagonal(a,b) << endl << endl << endl << endl << endl << endl;
            break;
        case 4:
            j=0;
            break;
        default:
            cout << "Ошибка" << endl;
            j=0;
    }
}
    return 0;
}