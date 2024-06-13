/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:44:11 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/11 12:54:38 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << MAGENTA << "Cat constructor called" << RESET << std::endl;
}

Cat::~Cat() {
	std::cout << MAGENTA << "Cat destructor called" << RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << MAGENTA << "Cat Copy Constructor called" << RESET << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << MAGENTA << "Cat Copy Assignment Constructor called" << RESET << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << YELLOW << "Meow" << RESET << std::endl;
}
