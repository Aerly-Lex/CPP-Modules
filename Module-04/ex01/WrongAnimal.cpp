/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:01:54 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/11 13:35:51 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << MAGENTA << "WrongAnimal constructor called" << RESET <<std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << MAGENTA << "WrongAnimal destructor called" << RESET <<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << MAGENTA << "WrongAnimal copy constructor called" << RESET <<std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << MAGENTA << "WrongAnimal copy assignment constructor called" << RESET <<std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << RED << "Some wrong random animal sounds" << RESET << std::endl;
}

void	WrongAnimal::setType(std::string type) {
	this->type = type;
}

std::string WrongAnimal::getType() const {
	return (this->type);
}
