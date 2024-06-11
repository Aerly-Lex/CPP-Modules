/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:55:45 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/28 14:00:38 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int	value;
		static const int fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& original);
		Fixed&	operator=(const Fixed& original);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};



#endif
