#include "Fixed.hpp"


int main( void ) {
	Fixed a;


	std::cout << a << std::endl;
	std::cout << a.operator++() << std::endl;
	std::cout << a.operator++(1) << std::endl;
	std::cout << a << std::endl;

	return (0);
}