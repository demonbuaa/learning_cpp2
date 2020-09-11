#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "base.h"

class circle : public base
{
public:
    circle(double, double, double);
    
    void draw()const;
    double area()const;
private:
    double x;
    double y;
    double r;
};

#endif