/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:07:43 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/26 17:51:30 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private:
		T*				arr;
		unsigned int	arrSize;
	public:
		Array();
		Array(const unsigned int n);
		~Array();
		Array(const Array& other);
		Array<T> &operator=(const Array& other);
		T &operator[](unsigned int index) const;

		unsigned int	size() const;
};

#endif
