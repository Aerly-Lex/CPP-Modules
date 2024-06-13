/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:43:47 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/11 12:55:08 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << MAGENTA << "Dog constructor called" << RESET << std::endl;
}

Dog::~Dog() {
	std::cout << MAGENTA << "Dog destructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	this->type = other.type;
	std::cout << MAGENTA << "Dog copy constructor called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
		this->type = other.type;
	std::cout << MAGENTA << "Dog assignation operator called" << RESET << std::endl;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << CYAN << "Woof!" << RESET << std::endl;
}
