/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:14:20 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/21 15:24:16 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <stdexcept>

#define invalidInput		"Error: Invalid Token\n"
// #define invalidArguments	std::cout << "Invalid numbers of Arguments - single string with numbers and operators are required.\n", 1
// #define invalidExpression	"Error: Invalid expression\n"
// #define invalidAmount		"Error: Not enough numbers for calculation\n"
// #define invalidDivision		"Error: Division by zero\n"
// #define invalidUnknown		"Error: Unknown operator\n"



class PmergeMe {
	private:
		std::vector<int>	vec;
		std::deque<int>		deq;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);

		void	parseInput(int ac, char** av);
		void	sort(int ac, char** av);

		template <typename T>
		void	printNumbers(const T& container, const std::string& str)
		{
			std::cout << str << ": ";
			for (typename T::const_iterator it = container.begin(); it != container.end(); ++it)
				std::cout << *it << " ";
			std::cout <<std::endl;
		}

		//mergeinsertsort
		//printtime

};

#endif
