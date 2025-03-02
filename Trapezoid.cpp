#include <cmath>
double perimetrTr(double firstSide, double secondSide, double upSide, double downSide)
{
	return firstSide + secondSide + upSide + downSide; //Сумма сторон
}
double squareTr(double firstSide, double secondSide, double upSide, double downSide) 
{
	double p = perimetrTr(firstSide, secondSide, upSide, downSide) / 2; //Полупериметр
	return ((upSide + downSide) / abs(downSide - upSide) * sqrt((p - downSide) * (p - upSide) * (p - downSide - firstSide) * (p - downSide - secondSide))); //Площадь по формуле Герона 
}
double midLineTr(double firstSide, double secondSide, double upSide, double downSide)
{
	return ((upSide + downSide) / 2); //Полусумма оснований
}
