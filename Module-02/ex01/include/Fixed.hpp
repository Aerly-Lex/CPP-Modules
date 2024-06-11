/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:32:39 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/28 15:01:04 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int	value;
		static const int fractionalBits = 8;
	public:
		Fixed();
		Fixed( const int num );
		Fixed( const float num );
		Fixed(const Fixed& original);
		Fixed&	operator=(const Fixed& original);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& COUT, const Fixed& fixed);

#endif
