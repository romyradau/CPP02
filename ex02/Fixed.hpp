/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:16:47 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/16 19:17:40 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const& AlreadyExistingObject );
		Fixed( int const i);
		Fixed( float const f);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits ( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static	Fixed&	min( Fixed &lhs, Fixed& rhs );
		static	Fixed const&	min( Fixed const&lhs, Fixed const& rhs );
		static	Fixed&	max( Fixed &lhs, Fixed& rhs );
		static	Fixed const&	max( Fixed const&lhs, Fixed const& rhs );

		Fixed&	operator=( Fixed const& rhs );
		bool	operator>( Fixed const& rhs ) const;
		bool	operator<( Fixed const& rhs ) const;
		bool	operator>=( Fixed const& rhs ) const;
		bool	operator<=( Fixed const& rhs ) const;
		bool	operator==( Fixed const& rhs ) const;
		bool	operator!=( Fixed const& rhs ) const;
		Fixed	operator+( Fixed const& rhs ) const;
		Fixed	operator-( Fixed const& rhs ) const;
		Fixed	operator*( Fixed const& rhs ) const;
		Fixed	operator/( Fixed const& rhs ) const;
		Fixed&	operator++();
		Fixed	operator++( int );
		Fixed&	operator--();
		Fixed	operator--( int );
		
	private:
	
		int _fpvalue;
		static const int _bits;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */