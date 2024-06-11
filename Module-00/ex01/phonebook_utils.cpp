/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:35:03 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/14 14:08:31 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() {
	std::cout << MAGENTA << "Constructor has been called\n" << RESET;
}
PhoneBook::~PhoneBook() {
	std::cout << MAGENTA << "Destructor has been called\n" << RESET;
}

bool	ft_isSpace(const std::string& input)
{
	return input.find_first_not_of(" \t\n\v\f\r") == std::string::npos;
}

bool	ft_stringHasDigit(std::string& input)
{
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (isdigit(static_cast<unsigned char>(input[i])))
			return true;
	}
	return false;
}

bool ft_isValidPhonenumber(std::string& input)
{
	size_t start = 0;
	if (input[start] == '+')
		start++;
	for (int i = start; input[i]; i++)
	{
		if (!isdigit(static_cast<unsigned char>(input[i])))
			return true;
	}
	return false;
}
