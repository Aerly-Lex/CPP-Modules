/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:13:36 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/12 10:28:45 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "headers.hpp"

class Character : public ICharacter {
	private:
		std::string	name;
		AMateria*	inventory[4];
	public:
		Character(std::string name);
		~Character();
		Character(const Character& other);
		Character& operator=(const Character& other);

		std::string const&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

};

#endif
