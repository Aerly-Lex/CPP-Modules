/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:52:57 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/01 11:57:09 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Fixed.hpp"

// Constructors

Fixed::Fixed() : value(0) {}
Fixed::Fixed( const int num ) : value(num << fractionalBits) {}
Fixed::Fixed( const float num ) : value(roundf(num * (1 << fractionalBits))) {}
Fixed::Fixed( const Fixed& other ) : value(other.value) {}
Fixed::~Fixed() {}

Fixed&  Fixed::operator=(const Fixed& other) {
	if (this != &other)
		value = other.getRawBits();
	return (*this);
}


//	Comparison operators

bool	Fixed::operator>(const Fixed& other) const {
	return (value > other.value);
}
bool	Fixed::operator<(const Fixed& other) const {
	return (value < other.value);
}
bool	Fixed::operator>=(const Fixed& other) const {
	return (value >= other.value);
}
bool	Fixed::operator<=(const Fixed& other) const {
	return (value <= other.value);
}
bool	Fixed::operator==(const Fixed& other) const {
	return (value == other.value);
}
bool	Fixed::operator!=(const Fixed& other) const {
	return (value != other.value);
}


// Arithmetic operators

Fixed Fixed::operator+(const Fixed& other) {
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) {
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) {
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) {
	return (this->toFloat() / other.toFloat());
}


//	In-/Decrement operators

Fixed& Fixed::operator++() {
	value++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = (*this);
	value++;
	return (tmp);
}

Fixed& Fixed::operator--() {
	value--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = (*this);
	value--;
	return (tmp);
}


// Public member funcions

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b ? a : b);
}
Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a > b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a < b ? a : b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a > b ? a : b);
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
