#include "Fixed.hpp"

/*
** ------------------------------- STATIC INITIALIZATION --------------------------------
*/

const int	Fixed::_bits = 8;


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(): _fpvalue(0)
{
	std::cout << "Default constructor called." << std::endl;
}
//somehow you have to initilize _bits to 8 here

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
Fixed::Fixed( int const i ){

	std::cout << "Int constructor is called." << std::endl;
	this->_fpvalue = i << this->_bits;
	//It converts _value to the corresponding fixed-point value
	//shifts 8 bits to the left aka creating a fixed point 32 -> 24.8
}
//verstanden

Fixed::Fixed( float const f ){

	std::cout << "Float constructor is called." << std::endl;
	this->_fpvalue = (int) roundf(f * (1 << this->_bits));
	//It converts float to the corresponding fixed-point value. 
}

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
	if (this == &rhs)
		return (*this);//check if they are already the same aka self-assignment
	this->_fpvalue = rhs.getRawBits();
	return (*this);
}
/*
A copy assignment overload
This operator is called when an already initialized object is assigned a new value from another existing object. 
*/

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << " floating-point representation = " << i.toFloat();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
float	Fixed::toFloat( void ) const{

	return ((float) this->_fpvalue / (1 << this->_bits));
	//that converts the fixed-point value to a floating-point value
	// _val to float
}
//nicht verstanden

int		Fixed::toInt( void ) const{

	return (this->_fpvalue >> this->_bits);
	//that converts the fixed-point value back to an integer value.
	//shifts back 8 bits to the right 24.8 -> 32
}
//verstanden

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int	Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpvalue);
}

void	Fixed::setRawBits( int const raw ){

	this->_fpvalue = raw;
}

/* ************************************************************************** */