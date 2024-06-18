/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:57:48 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/14 10:59:23 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/headers.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice& other) : AMateria(other) {
	this->type = other.type;
}

Ice& Ice::operator=(const Ice& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

//			Methods & Functions			//

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
