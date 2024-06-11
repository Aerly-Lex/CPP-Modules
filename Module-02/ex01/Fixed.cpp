/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:28:00 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/30 14:22:48 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int num ) : value(num << fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float num ) : value(roundf((num * (1 << fractionalBits)))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& original) {
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed& Fixed::operator=(const Fixed& original) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
		value = original.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const {
	return (value);
}

void	Fixed::setRawBits( int const raw ) {
	this->value = raw;
}

float	Fixed::toFloat( void ) const {
	return (static_cast<float>(this->value) / (1 << fractionalBits) );
}
int		Fixed::toInt( void ) const {
	return (this->value >> fractionalBits);
}

std::ostream&	operator<<(std::ostream& COUT, const Fixed& fixed) {
	COUT << fixed.toFloat();
	return (COUT);
}
