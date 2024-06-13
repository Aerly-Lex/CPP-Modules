/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:34:39 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/13 12:59:52 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/headers.hpp"


// class MateriaSource : public IMateriaSource

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		templates[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete templates[i];
}

// MateriaSource::MateriaSource(const MateriaSource& other);
// MateriaSource& operator=(const MateriaSource& other);


//			Methods & Functions			//

void		MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->templates[i] == NULL) {
			this->templates[i] = m;
			return ;
		}
	}
	std::cout << "No free slots available to learn" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (templates[i] != NULL && templates[i]->getType() == type)
			return (templates[i]->clone());
	}
	return (NULL);
}
