#include "Fixed.h"
#include <iostream>

int main( void )
{
	Fixed a;
	
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	bool e = a <= b;
	
	std::cout << e << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;

	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}