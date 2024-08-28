/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:14:20 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/28 11:00:37 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <stdexcept>
#include <chrono>

#define printTimeTextVec		"Time to process a range of 5 elements with std::vector: "
#define printTimeTextDeq		"Time to process a range of 5 elements with std::deque: "
#define invalidInput			"Error: Invalid Token\n"
#define invalidArguments		std::cout << "Error: Not enough arguments\n", 1

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"

extern bool recursiveFlag;


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
		void	printNumbers(const T& container, const std::string& str);

		template <typename T>
		void	mergeInsertSort(T& container, bool recursive);
};

#endif
