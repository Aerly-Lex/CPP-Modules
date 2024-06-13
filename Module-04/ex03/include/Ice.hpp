/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:00:18 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/13 13:59:22 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "headers.hpp"

class Ice : public AMateria {
	private:
	public:
		Ice();
		~Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
