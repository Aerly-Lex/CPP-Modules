/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:17:14 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/10 10:59:47 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm> //sort, min_element, max_element, generate
#include <stdexcept>
#include <limits>
#include <ctime>
#include <cstdlib>	//rand,srand

class Span {
	private:
		unsigned int		N;
		std::vector<int>	numbers;
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span& other);
		Span& operator=(const Span& other);

		void	addNumber(int nbr);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		template<typename T>
		void	addNumbers(T begin, T end)
		{

			if (numbers.size() + std::distance(begin, end) > N)
				throw std::out_of_range("Not enough space in Span to add all numbers");
			while (begin != end)
			{
				addNumber(*begin);
				++begin;
			}
		}
};



#endif
