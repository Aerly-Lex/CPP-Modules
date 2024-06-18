/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:01:51 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/17 11:41:52 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongCat.hpp"

WrongCat::WrongCat() {
	this->setType("WrongCat");
	std::cout << MAGENTA << "WrongCat constructor called" << RESET << std::endl;
}


WrongCat::~WrongCat() {
	std::cout << MAGENTA << "WrongCat destructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << MAGENTA << "WrongCat copy constructor called" << RESET << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << MAGENTA << "WrongCat copy assignment constructor called" << RESET << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

//			Methods & Functions			//

void WrongCat::makeSound() const
{
	std::cout << YELLOW << "mRErRow" << RESET << std::endl;
}
