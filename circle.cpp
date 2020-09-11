#include <iostream>
#include "circle.h"

const double PI = 3.1415926;

circle::circle(double _x = 0.0, double _y = 0.0, double _r = 1.0)
{
    x = _x;
    y = _y;
    r = _r;
}

void circle::draw()const
{
    std::cout << "circle:" << std::endl;
    std::cout << "center:(" << x << "," << y << ")" <<std::endl;
    std::cout << "r: " << r << std::endl;
}

double circle::area()const
{
    return PI * r * r;
}

