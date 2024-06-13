/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:00:45 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/13 13:59:25 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "headers.hpp"

class AMateria;

class Cure : public AMateria {
	private:
	public:
		Cure();
		~Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
