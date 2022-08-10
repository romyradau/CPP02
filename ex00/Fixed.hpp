/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:16:47 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/10 18:59:12 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & AlreadyExistingObject );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );
		int	getRawBits( void ) const;
		int	setRawBits ( int const raw );
		
	private:
	
		int _fpvalue;
		static const int _bits;
		//was bringt hier static? bleibt doch sowieso die ganze zeit im Programm?

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */