#ifndef CIRCLE_H
#define CIRCLE_H

#include"twoDimensionalShape.h"

class Circle : public TwoDimensionalShape
{
private:
    double radius;                  // Radius of Circle
public:
    Circle(double, double, double); // Constructor
    double getRadius() const{return radius;};
    double area() const;            // Return area of circle
    void print(std::ostream&) const;
    //~Square();
};

#endif