#include <cmath>
double perimeter(double firstSide, double secondSide, double downSide) {
    return firstSide + secondSide + downSide;//perimetr
}
double area_heron(double firstSide, double secondSide, double downSide) {
    double polperimetr = (firstSide + secondSide + downSide) / 2;
    return sqrt(polperimetr * (polperimetr - firstSide) * (polperimetr - secondSide) * (polperimetr - downSide));//area_heron
}
double isosceles(double firstSide, double secondSide, double downSide){//proverka
    if ((firstSide == secondSide) || (secondSide == downSide) || (firstSide == downSide)) {
        return true;
    }
    return false;
}
