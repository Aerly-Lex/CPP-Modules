/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:44:20 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/17 11:41:59 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"

Animal::Animal() {
	std::cout << MAGENTA << "Animal constructor called" << RESET <<std::endl;
}

Animal::~Animal() {
	std::cout << MAGENTA << "Animal destructor called" << RESET << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << MAGENTA << "Animal Copy Constructor called" << RESET << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << MAGENTA << "Animal Copy Assignment Constructor called" << RESET << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

//			Methods & Functions			//

void	Animal::makeSound() const
{
	std::cout << RED << "Some random animal sounds" << RESET << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::setType(std::string type)
{
	this->type = type;
}
