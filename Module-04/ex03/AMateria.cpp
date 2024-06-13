/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:34:21 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/13 12:41:12 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/headers.hpp"

AMateria::AMateria(std::string const & type) : type(type) {}

// AMateria::~AMateria() {}

// AMateria::AMateria(const AMateria& other) {
// 	*this = other;
// }

// AMateria&	AMateria::operator=(const AMateria& other) {
// 	return (*this);
// }

std::string	const&	AMateria::getType() const {
	return (this->type);
}
