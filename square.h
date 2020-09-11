#ifndef SQUARE_H_
#define SQUARE_H

#include "base.h"

class square : public base
{
public:
    square(double, double, double);
    void draw()const;
    double area()const;
private:
    //center  
    double x;
    double y;   
    //
    double h;

};

#endif