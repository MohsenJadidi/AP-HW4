#ifndef CUBE_H
#define CUBE_H

#include"threeDimensionalShape.h"

class Cube : public ThreeDimensionalShape
{
private:
    double len;
public:
    Cube(double, double = 0, double = 0, double = 0);
    double getLen() const {return len;};
    double area() const;
    double volume() const;
    void print(std::ostream&) const;
    //~Cube();
};

#endif