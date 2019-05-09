#ifndef SPHERE_H
#define SPHERE_H

#include"threeDimensionalShape.h"

class Sphere : public ThreeDimensionalShape
{
private:
    double radius;                              // Radius of sphere
public:
    Sphere(double, double, double, double = 0); // Constructor
    double getRadius() const {return radius;};
    double area() const;                        // Return area of sphere
    double volume() const;                      // Return volume of sphere
    void print(std::ostream&) const;
    //~Sphere();
};

#endif