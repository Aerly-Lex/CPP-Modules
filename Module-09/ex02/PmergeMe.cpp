/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:13:54 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/23 07:43:28 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {
		vec = other.vec;
		deq = other.deq;
	}
	return *this;
}

//			Functions & Methods			//

void	PmergeMe::parseInput(int ac, char** av)
{
	for (int i = 1; i < ac; ++i)
	{
		int num = std::atoi(av[i]);
		if (num <= 0)
			throw std::runtime_error(invalidInput);
		vec.push_back(num);
		deq.push_back(num);
	}
}

void	PmergeMe::sort(int ac, char** av)
{
	parseInput(ac, av);

	printNumbers(vec, "Before");
	printNumbers(deq, "Before");

	clock_t	start = clock();
	clock_t	end = clock();
	double timeDiff = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;
	std::cout << end - start << "\n";
	std::cout << timeDiff << "\n";
}