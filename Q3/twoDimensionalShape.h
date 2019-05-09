#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H

#include"shape.h"

class TwoDimensionalShape : public Shape
{
private:
    /* data */
public:
    TwoDimensionalShape(double, double);
    virtual double area() const = 0;
    //~TwoDimensionalShape();
};

#endif



