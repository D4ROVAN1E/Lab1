#include <cmath>
double perimetrTr(double FirstSide, double SecondSide, double UpSide, double DownSide)
{
	return FirstSide + SecondSide + UpSide + DownSide;
}
double squareTr(double FirstSide, double SecondSide, double UpSide, double DownSide)
{
	double p = perimetrTr(FirstSide, SecondSide, UpSide, DownSide) / 2;
	return ((UpSide + DownSide) / fabs(DownSide - UpSide) * sqrt((p - DownSide) * (p - UpSide) * (p - DownSide - FirstSide) * (p - DownSide - SecondSide)));
}
double midLineTr(double FirstSide, double SecondSide, double UpSide, double DownSide)
{
	return ((UpSide + DownSide) / 2);
}
