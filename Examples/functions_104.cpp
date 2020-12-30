#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

// function prototype
double CircleArea(double radius);
double RectangleArea(double length, double width);

int main() {

    double radius = 5.0;
    double length = 1.0;
    double width = 10.0;

    double cicle_area = CircleArea(radius);
    double rectangle_area = RectangleArea(length, width);

    cout << "Circle : " << cicle_area << std::endl;
    cout << "Rectangle : " << rectangle_area << std::endl;

    return 0;
}

double CircleArea(double radius) {

    double pi_value = M_PI;
    double area = pi_value * radius * radius;

    return area;
}

double RectangleArea(double length, double width) {

    double area = length * width;

    return area;
}