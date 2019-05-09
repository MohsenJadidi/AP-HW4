#ifndef THREEDIMENSIONALSHAPE_H
#define THREEDIMENSIONALSHAPE_H

#include"shape.h"

class ThreeDimensionalShape:public Shape
{
protected:
    double zCenter;
public:
    ThreeDimensionalShape(double = 0, double = 0, double = 0);
    virtual double area() const = 0;
    virtual double volume() const = 0;
    //~ThreeDimensionalShape();
};

#endif



