#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): _fpvalue(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed( const Fixed & AlreadyExistingObject )
{

	std::cout << "Copy constructor is called." << std::endl;
	*this = AlreadyExistingObject;
}
/*
A copy constructor is a member function that initializes an object using another object of the same class.
Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
copy initialization
*/

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor is called." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator is called." << std::endl;
	this->_fpvalue = rhs.getRawBits();
	return *this;
}
/*
A copy assignment overload
This operator is called when an already initialized object is assigned a new value from another existing object. 
*/

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
	return (this->_fpvalue);
}

int	Fixed::setRawBits( int const raw ){

	this->_fpvalue = raw;
	return (this->_fpvalue);
}

/* ************************************************************************** */