/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:16:47 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/11 16:53:06 by rschleic         ###   ########.fr       */
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
		Fixed( Fixed const & AlreadyExistingObject );
		Fixed( int const i);
		Fixed( float const f);
		~Fixed();
		Fixed &		operator=( Fixed const & rhs );
		int		getRawBits( void ) const;
		void	setRawBits ( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		
	private:
	
		int _fpvalue;//bits
		static const int _bits;//fraction
		//value that will be the same for the whole runtime so static const!
		//has to be initialised in the source file though 

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */