/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:17:16 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/12 10:44:47 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Span.hpp"

Span::Span(unsigned int N) : N(N) {}

Span::~Span() {}

Span::Span(const Span& other) : N(other.N), numbers(other.numbers) {}

Span& Span::operator=(const Span& other) {
	if (this != &other)
	{
		N = other.N;
		numbers = other.numbers;
	}
	return (*this);
}

//				Methods				//

void	Span::addNumber(int nbr)
{
	if (numbers.size() >= N)
		throw std::out_of_range("Span is full");
	numbers.push_back(nbr);
}

int		Span::shortestSpan(void) const
{
	if (numbers.size() < 2)
		throw std::logic_error("Not enough numbers to find a span");


	int					minSpan = std::numeric_limits<int>::max();
	std::vector<int>	sortedNumbers = numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	for (size_t i = 1; i < sortedNumbers.size(); ++i)
	{
		int	span = sortedNumbers[i] - sortedNumbers[i - 1];
		if (span < minSpan)
			minSpan = span;
	}

	return minSpan;
}

int		Span::longestSpan(void) const
{
	if (numbers.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");

	int	min = *std::min_element(numbers.begin(), numbers.end());
	int	max = *std::max_element(numbers.begin(), numbers.end());
	return max - min;
}
