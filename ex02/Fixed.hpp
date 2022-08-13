/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:16:47 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/13 20:33:24 by rschleic         ###   ########.fr       */
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
		// static	int& min(int const& a, int& b);
		// static const int const& min(int const& a, int& b);
		// static	int& max(int& a, int& b);
		// static int const& max(int const& a, int& b);
		
		Fixed&	operator=( Fixed const& rhs );
		bool	operator>( Fixed const& rhs ) const;
		bool	operator<( Fixed const& rhs ) const;
		bool	operator>=( Fixed const& rhs ) const;
		bool	operator<=( Fixed const& rhs ) const;
		bool	operator==( Fixed const& rhs ) const;
		bool	operator!=( Fixed const& rhs ) const;
		Fixed		operator+( Fixed const& rhs ) const;
		Fixed		operator-( Fixed const& rhs ) const;
		Fixed		operator*( Fixed const& rhs ) const;
		Fixed		operator/( Fixed const& rhs ) const;
		// int		operator+( Fixed const& rhs ) const;
		// int		operator-( Fixed const& rhs ) const;
		// int		operator*( Fixed const& rhs ) const;
		// int		operator/( Fixed const& rhs ) const;
		//warum Fixed und nicht den echten integer?
		Fixed&	operator++();
		Fixed	operator++( int );
		Fixed&	operator--();
		Fixed	operator--( int );
		
	private:
	
		int _fpvalue;//bits
		static const int _bits;//fraction
		//kann man auch hier schon initialisieren
		//value that will be the same for the whole runtime so static const!
		//has to be initialised in the source file though 

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */