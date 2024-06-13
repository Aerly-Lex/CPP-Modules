/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:57:34 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/13 13:39:24 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/headers.hpp"

// class Cure : public AMateria

Cure::Cure() : AMateria("Cure") {}
Cure::~Cure() {}

// Cure(const Cure& other);
// Cure& operator=(const Cure& other);

//			Methods & Functions			//

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
