/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:43:13 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/13 13:55:49 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "headers.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string	type;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);

		std::string const&	getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

};

#endif
