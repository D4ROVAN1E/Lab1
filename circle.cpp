#include <cmath>
#define _USE_MATH_DEFINES
double lengthCir(double radius){
    return (2 * M_PI * radius);
}
double squareCir(double radius){
    return (M_PI * pow(radius, 2));
}
double squareCirSectr(double corner, double radius){
    
    return (corner / 360 * M_PI * pow(radius, 2));
}
