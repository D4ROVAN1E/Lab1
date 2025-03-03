#include <cmath>
double per(double Fside, double Sside){
    return (Fside+Sside)*2; //perimetr func
}

double sq(double Fside, double Sside)
{
    return Fside*Sside; //square func
}

double diagonal(double Fside, double Sside)
{
    double v = sqrt(pow(Fside,2)+pow(Sside,2));
    return v; //diagonal func
}
