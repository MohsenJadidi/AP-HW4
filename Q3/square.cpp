#include"square.h"

/* Constructor */
Square::Square(double len, double x, double y):TwoDimensionalShape(x, y)
{
    //std::cout << "### Square constructor ###\n";
    if(len > 0)
    {
        this->len = len;
    }
    else
    {
        std::cout << "ERROR : Side lengh must be greater than 0!\n";
        this->len = 0;
    }
    
}

/* Area */
double Square::area() const
{
  return len * len;
}


void Square::print(std::ostream& a) const
{
  std::cout << "\nSquare Length : " << len << "\nCenter --> (" << xCenter << ", " 
            << yCenter << ")\n" << "Area : " << area() << std:: endl;
}