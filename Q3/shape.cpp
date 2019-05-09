#include"shape.h"

/* Constructor */
Shape::Shape(double x, double y)
{
    //std::cout << "# Shape constructor #\n";
    this->xCenter = x;
    this->yCenter = y; 
}

std::ostream& operator<<(std::ostream& os, Shape& shp)
{
  shp.print(os);
  return os;
}


void Shape::operator+(Point& pt)
{
  xCenter = pt.getX() + xCenter;
  yCenter = pt.getY() + yCenter;
}