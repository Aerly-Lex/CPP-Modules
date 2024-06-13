/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:35:17 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/06/11 16:38:46 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"

class Brain {
	private:
		std::string	ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
};

#endif
