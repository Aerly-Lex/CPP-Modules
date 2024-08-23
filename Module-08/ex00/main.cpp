/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:10:50 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/08/12 10:38:30 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/easyfind.hpp"

int	main()
{
	std::list<int>	myList;
	myList.push_back(2);
	myList.push_back(9);
	myList.push_back(6);
	myList.push_back(7);
	myList.push_back(3);
	myList.push_back(1);
	myList.push_back(4);
	myList.push_back(8);
	myList.push_back(2);
	myList.push_back(3003);

	try {
		std::list<int>::iterator it = easyfind(myList, 3);
		std::cout << "Found: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::vector<int>	myVector;
	myVector.push_back(12);
	myVector.push_back(24);
	myVector.push_back(39);
	myVector.push_back(44);
	myVector.push_back(58);

	try {
		std::vector<int>::iterator it = easyfind(myVector, 39);
		std::cout << "Found: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator it = easyfind(myVector, 38);
		std::cout << "Found: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
