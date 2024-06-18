/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:57:34 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/17 17:50:45 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/headers.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& other) : AMateria(other) {
	// if (this != &other)
	// 	this->type = other.type;
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

//			Methods & Functions			//

AMateria*	Cure::clone() const
{
	std::cout << "Cure clone\n";
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
