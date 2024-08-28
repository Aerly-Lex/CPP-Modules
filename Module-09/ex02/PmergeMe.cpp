/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:13:54 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/28 11:09:14 by Dscheffn         ###   ########.fr       */
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

//			Class Template			//

template <typename T>
void	PmergeMe::printNumbers(const T& container, const std::string& str)
{
	std::cout << GREEN << str << RESET;
	for (typename T::const_iterator it = container.begin(); it != container.end(); ++it)
		std::cout << *it << " ";
	std::cout <<std::endl;
}

template <typename T>
void	PmergeMe::mergeInsertSort(T& container, bool recursive)
{
	// For the recursive
	if (container.size() <= 1)
		return ;

	// Split container into pairs and sort each pair
	T	winners;	// Container for larger elements
	T	losers;		// Container for smaller elements

	typename T::iterator	it = container.begin();
	while (it != container.end())
	{
		typename T::iterator	first = it++;
		if (it != container.end())
		{
			typename T::iterator	second = it++;
			if (*first < *second)
			{
				losers.push_back(*first);
				winners.push_back(*second);
			}
			else
			{
				losers.push_back(*second);
				winners.push_back(*first);
			}
		}
		else
			winners.push_back(*first); // for odd numbers
	}

	// Insertion sort for the winner bracket
	if (recursive == true)
		mergeInsertSort(winners, true);
	else
	{
		for (size_t i = 1; i < winners.size(); ++i)
		{
			int		nbr = winners[i];
			size_t	j = i;
			while (j > 0 && winners[j - 1] > nbr)
			{
				winners[j] = winners[j - 1];
				j--;
			}
			winners[j] = nbr;
		}
	}


	// Merge: Insert each element from losers into the sorted winners
	for (auto& loser : losers)
	{
		auto insertPos = std::lower_bound(winners.begin(), winners.end(), loser);
		winners.insert(insertPos, loser);
	}

	container = winners;
}

//			Methods			//

void	PmergeMe::parseInput(int ac, char** av)
{
	for (int i = 1; i < ac; ++i)
	{
		std::string arg(av[i]);
		if (arg.find_first_not_of("0123456789") != std::string::npos)
			throw std::runtime_error(invalidInput);

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
	if (recursiveFlag)
		std::cout << RED << "Running with Recursive\n" << RESET;
	else
		std::cout << RED << "Running without Recursive\n" << RESET;

	printNumbers(vec, "Vector before: ");
	auto	start = std::chrono::high_resolution_clock::now();

	mergeInsertSort(vec, false);

	auto	end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff = end - start;
	double timeDiff = diff.count() * 1000;

	std::cout << printTimeTextVec << timeDiff << " ms\n";
	printNumbers(vec, "Vector after: ");


	printNumbers(deq, "\nDeque before: ");
	start = std::chrono::high_resolution_clock::now();

	mergeInsertSort(deq, recursiveFlag);

	end = std::chrono::high_resolution_clock::now();
	diff = end - start;
	timeDiff = diff.count() * 1000;

	std::cout << printTimeTextDeq << timeDiff << " ms\n";

	printNumbers(deq, "Deque after: ");
}
