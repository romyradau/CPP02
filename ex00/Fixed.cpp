#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): _val(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed( const Fixed & AlreadyExistingObject )
{
	std::cout << "A copy constructor is called." << std::endl;
	this->_val = AlreadyExistingObject._val;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "A destructor is called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "A copy assignment operator is called." << std::endl;
	if (this == &rhs){
		return *this;
	}
	return *this;
}
//das verstehe ich noch nicht!

// std::ostream &			operator<<( std::ostream & o, Fixed const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int	Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

int	Fixed::setRawBits( int const raw ){

	this->_val = raw;
	return (this->_val);
}

/* ************************************************************************** */