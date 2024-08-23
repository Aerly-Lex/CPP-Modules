/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:17:11 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/10 10:55:29 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Span.hpp"

int	main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	std::cout << std::endl;


	std::vector<int>	largeSpanNumbers(10000);
	Span				largeSpan(10000);
	try {
		std::srand(static_cast<unsigned int>(std::time(0)));
		std::generate(largeSpanNumbers.begin(), largeSpanNumbers.end(), std::rand);

		largeSpan.addNumbers(largeSpanNumbers.begin(), largeSpanNumbers.end());
		std::cout << largeSpan.shortestSpan() << std::endl;
		std::cout << largeSpan.longestSpan() << std::endl;
	}	catch (const std::out_of_range &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
		return 1;
	}

	return 0;
}
