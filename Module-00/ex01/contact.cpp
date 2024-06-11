/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:26:45 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/04/10 13:44:29 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string ft_truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	return (str);
}


void	PhoneBook::getContactInfo()
{
	if (contacts[0].getFirstName().empty())
	{
		std::cout << RED << "No Contacts - returning to main menu\n" << RESET;
		return ;
	}
	std::cout	<< CYAN << "|" << std::setw(9) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << "|" << RESET << std::endl;

	// std::right
	for (int i = 0; i < 8; i++)
	{
		if (!contacts[i].getFirstName().empty())
			std::cout << CYAN << "|" << RESET << std::setw(9) << i + 1 << CYAN << "|" << RESET
			<< std::setw(10) << ft_truncate(contacts[i].getFirstName()) << CYAN << "|" << RESET
			<< std::setw(10) << ft_truncate(contacts[i].getLastName()) << CYAN << "|" << RESET
			<< std::setw(10) << ft_truncate(contacts[i].getNickname()) << CYAN << "|" << RESET << std::endl;
	}

	std::string input;

	std::cout << CYAN << "Please enter an Index to display further information.\n>" << RESET;
	std::getline(std::cin, input); //std::cin >> input
	if (std::cin.eof())
		return ;
	int index = std::atoi(input.c_str());

	if (index < 1 || index > 8 || contacts[index - 1].getFirstName().empty())
	{
		std::cout << RED << "Invalid index - returning to main menu\n" << RESET;
		return ;
	}
	std::cout << GREEN << "Firstname: " << contacts[index - 1].getFirstName() << std::endl;
	std::cout << GREEN << "Lastname: " << contacts[index - 1].getLastName() << std::endl;
	std::cout << GREEN << "Nickname: " <<  contacts[index - 1].getNickname() << std::endl;
	std::cout << GREEN << "Phonenumber: " << contacts[index - 1].getPhoneNumber() << std::endl;
	std::cout << GREEN << "Darkest Secret: " << contacts[index - 1].getDarkestSecret() << std::endl << RESET;
}
