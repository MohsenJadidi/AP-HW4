#ifndef SQUARE_H
#define SQUARE_H

#include"twoDimensionalShape.h"

class Square : public TwoDimensionalShape
{
private:
    double len;                             // Side lenght of square
public:
    Square(double, double, double);         // Constructor
    double getLen() const {return len;};
    double area() const;                    // Return area of square
    void print(std::ostream&) const;
    //~Square();
};

#endif
