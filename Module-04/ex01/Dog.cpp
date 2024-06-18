/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:43:47 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/17 12:00:13 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"

Dog::Dog() : brain(new Brain()) {
	this->type = "Dog";
	std::cout << MAGENTA << "Dog constructor called" << RESET << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << MAGENTA << "Dog destructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
	this->type = other.type;
	std::cout << MAGENTA << "Dog copy constructor called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		delete brain;
		this->type = other.type;
		brain = new Brain(*other.brain);
	}
	std::cout << MAGENTA << "Dog assignation operator called" << RESET << std::endl;
	return (*this);
}

//			Methods & Functions			//

void	Dog::makeSound() const
{
	std::cout << CYAN << "Woof!" << RESET << std::endl;
}
