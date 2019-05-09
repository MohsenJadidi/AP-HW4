#include"circle.h"

/* Constructor */
Circle::Circle(double radius, double x, double y):TwoDimensionalShape(x, y)
{
    //std::cout << "### Circle constructor ###\n";
    if(radius > 0)
    {
        this->radius = radius;
    }
    else
    {
        std::cout << "ERROR : Radius must be greater than 0!\n";
        this->radius = 0;
    }
    
}


double Circle::area() const
{
  return 3.14159*radius*radius;
}


void Circle::print(std::ostream& a) const
{
  std::cout << "\nCircle Radius : " << radius << "\nCenter --> (" << xCenter << ", " 
            << yCenter << ")\n" << "Area : " << area() << std:: endl;
}