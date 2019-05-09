#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
#include"point.h"

class Shape
{
protected:
    double xCenter,yCenter;
public:
    Shape(double, double);                          // Constructor
    double getXCenter() const {return xCenter;};    // retuen xCenter
    double getYCenter() const {return yCenter;};    // retuen yCenter
    virtual void print(std::ostream&) const = 0;
    friend std::ostream& operator<<(std::ostream&, Shape&);
    void operator+(Point& a);                       // Operator +
    //~Shape();
};

#endif
