#include <iostream>

#include"shape.h"
#include"twoDimensionalShape.h"
#include"threeDimensionalShape.h"
#include "circle.h"
#include "square.h"
#include "sphere.h"
#include "cube.h"
#include "point.h"

int main()
{
    Square sqr{12,2,2};
	//sq.print(std::cout);
    Circle cir( 3.5, 6, 9 );
	//cir.print(std::cout);
	Sphere sph( 5, 1.5, 4.5 );
	//sph.print(std::cout);
	Cube cub( 2.2 );
	//cub.print(std::cout);
	std::cout << cub;
    
	Shape *ptr[ 4 ] = { &cir, &sqr, &sph, &cub };

	for ( int x = 0; x < 4; ++x )
		std::cout << *( ptr[ x ] ) << '\n';
    
	/* Operator + */
	Point p1(1, 1);
	*ptr[0] + p1;
  	std::cout << *ptr[0] << "\n";

	return 0;
}


