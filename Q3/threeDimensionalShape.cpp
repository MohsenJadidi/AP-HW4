#include"threeDimensionalShape.h"

ThreeDimensionalShape::ThreeDimensionalShape(double x, double y, double z):Shape(x, y)
{
    //std::cout << "## ThreeDimensionalShape constructor ##\n";
    this->zCenter = z;
}