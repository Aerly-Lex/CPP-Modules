/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:10:55 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/12 10:57:51 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <list>
#include <vector>

// iterator - kind of a pointer
// typename - needs to be addded so the compiler recognizes it as a type and not as a method/attribute
template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found");

	return (it);
}

#endif
