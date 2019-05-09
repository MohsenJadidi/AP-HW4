#include"cube.h"

Cube::Cube(double len, double x, double y, double z):ThreeDimensionalShape(x, y, z)
{
    if(len > 0)
        this->len = len;
    else
    {
        std::cout << "ERROR : Side lengh must be greater than 0!\n";
        this->len = 0;
    }
}

double Cube::area() const
{
  return 6 * len * len;
}

double Cube::volume() const
{
  return len * len * len;
}

void Cube::print(std::ostream&) const
{
  std::cout << "\nCube Side Length : " << len << "\nCenter --> (" 
            << xCenter << ", " << yCenter << ", " << zCenter << ")\n" 
            << "Area : " << area() << " & Volume : " << volume() << std::endl;
}