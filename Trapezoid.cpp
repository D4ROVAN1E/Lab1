#include <cmath>
double perimetrTr(double firstSide, double secondSide, double upSide, double downSide)
{
	return firstSide + secondSide + upSide + downSide;
}
double squareTr(double firstSide, double secondSide, double upSide, double downSide)
{
	double p = perimetrTr(firstSide, secondSide, upSide, downSide) / 2;
	return ((upSide + downSide) / abs(downSide - upSide) * sqrt((p - downSide) * (p - upSide) * (p - downSide - firstSide) * (p - downSide - secondSide)));
}
double midLineTr(double firstSide, double secondSide, double upSide, double downSide)
{
	return ((upSide + downSide) / 2);
}