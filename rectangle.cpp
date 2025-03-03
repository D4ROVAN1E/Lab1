#include <cmath>
double per(double Fside, double Sside){
    return (Fside+Sside)*2;
}

double sq(double Fside, double Sside)
{
    return Fside*Sside;
}

double diagonal(double Fside, double Sside)
{
    double v = sqrt(pow(Fside,2)+pow(Sside,2));
    return v;
}
