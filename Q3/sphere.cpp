#include"sphere.h"

Sphere::Sphere(double radius, double x, double y, double z):ThreeDimensionalShape(x, y, z)
{
    if(radius > 0)
        this->radius = radius;
    else
    {
        std::cout << "ERROR : Radius must be greater than 0!\n";
        this->radius = 0;
    }
}

double Sphere::area() const
{
    return (4 * 3.14159 * radius * radius);
}

double Sphere::volume() const
{
    return ( (4.0/3)* 3.14159 * radius * radius * radius);
}

void Sphere::print(std::ostream&) const
{
    std::cout << "\nSphere Radius : " << radius << "\nCenter --> (" << xCenter << ", " << yCenter << ", " << zCenter << ")\n"
              << "Area : " << area() << " & Volume : " << volume() << std::endl;
}