#include <iostream>
#include "circle.h"
#include "square.h"
#include <vector>

using namespace std;

int main()
{
    circle c1(0.1, 0.2, 10.0);
    square s1(0.0, 0.3, 12.0);

    vector<base*>shape;
    // c1.draw();
    // s1.draw();
    // cout << "area of c1:" << c1.area() << endl;
    // cout << "area of s1:" << s1.area() << endl;
    
    shape.push_back(&c1);
    shape.push_back(&s1);

    for(size_t i =0; i < shape.size(); i ++)
    {
        shape[i]->draw();
        cout << "area of the shape:" << shape[i]->area() << endl;
        
    }
    return 0;
}