/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:44:11 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/18 08:49:48 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"
#include "include/Brain.hpp"

Cat::Cat() : brain(new Brain()) {
	this->type = "Cat";
	std::cout << MAGENTA << "Cat constructor called" << RESET << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << MAGENTA << "Cat destructor called" << RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain)) {
	std::cout << MAGENTA << "Cat Copy Constructor called" << RESET << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << MAGENTA << "Cat Copy Assignment Constructor called" << RESET << std::endl;
	if (this != &other) {
		delete brain;
		this->type = other.type;
		brain = new Brain(*other.brain);
	}
	return *this;
}

//			Methods & Functions			//

void Cat::makeSound() const
{
	std::cout << YELLOW << "Meow" << RESET << std::endl;
}
