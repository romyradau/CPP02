/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:16:47 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/09 18:57:24 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & AlreadyExistingObject );
		//A copy constructor is a member function that initializes an object using another object of the same class.
		//Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
		//copy initialization
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );
		//This operator is called when an already initialized object is assigned a new value from another existing object. 
		int	getRawBits( void ) const;
		int	setRawBits ( int const raw );
		
	private:
	
		int _val;
		static const int _bits;

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */