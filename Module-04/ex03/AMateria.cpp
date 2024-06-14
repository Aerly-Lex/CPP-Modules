/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:34:21 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/14 10:36:11 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/headers.hpp"

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& other) {
	*this = other;
}

AMateria&	AMateria::operator=(const AMateria& other) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

//			Methods & Functions			//

std::string	const&	AMateria::getType() const {
	return (this->type);
}

void		AMateria::use(ICharacter& target)
{
	std::cout << "Undefined materia is being used on " << target.getName() << std::endl;
}
