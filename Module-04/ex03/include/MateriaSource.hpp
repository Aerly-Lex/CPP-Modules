/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:23:38 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/13 13:59:24 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "headers.hpp"

class AMateria;

class MateriaSource : public IMateriaSource {w
	private:
		AMateria* templates[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);
};


#endif
