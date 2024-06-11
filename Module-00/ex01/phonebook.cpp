/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:29:28 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/14 10:42:29 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string getUserNumber(std::string prompt)
{
	do
	{
		std::string input;
		std::cout << CYAN << prompt << "\n>" << RESET;
		if (!std::getline(std::cin, input))
			return ("");
		if (!input.empty() && !ft_isSpace(input) && !ft_isValidPhonenumber(input))
			return (input);
		std::cout << RED << "Invalid Input\n" << RESET;
	} while (1);
}

std::string	getUserInput(std::string prompt)
{
	do
	{
		std::string input;
		std::cout << CYAN << prompt << "\n>" RESET;
		if (!std::getline(std::cin, input))
			return ("");
		if (!input.empty() && !ft_isSpace(input) && !ft_stringHasDigit(input))
			return (input);
		std::cout << RED << "Invalid input\n" << RESET;
	} while (1);
	return ("");
}

void	PhoneBook::addContact(int index)
{
	contacts[index].setFirstName(getUserInput("Please enter the First name: "));
	contacts[index].setLastName(getUserInput("Please enter the Last name: "));
	contacts[index].setNickname(getUserInput("Please enter the Nickname: "));
	contacts[index].setPhoneNumber(getUserNumber("Please enter the Phonenumber: "));
	contacts[index].setDarkestSecret(getUserInput("Please enter the Darkest Secret: "));
}
