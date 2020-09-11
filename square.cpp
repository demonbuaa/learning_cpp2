#include <iostream>
#include "square.h"

square::square(double _x=0.0, double _y=0.0, double _h=1.0)
{
    x = _x;
    y = _y;
    h = _h;
}

void square::draw()const
{ 
     std::cout << "square:" << std::endl;
     std::cout << "corner is: (" << x << "," << y << ")" << std::endl;
     std::cout << "height is:" << h << std::endl;  
}

double square::area()const
{
    return h * h;
}