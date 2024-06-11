/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:05:25 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/14 13:11:55 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	std::string		input;
	PhoneBook		phonebook;
	int		i = 0;

	while (1)
	{
		std::cout << CYAN << "Enter one of the following Keywords: \"ADD\" \"SEARCH\" \"EXIT\"\n" << ">" << RESET;
		std::getline(std::cin, input);

		if (input == "ADD")
			phonebook.addContact(i++ % 8);
		else if (input == "SEARCH")
			phonebook.getContactInfo();
		else if (input == "EXIT")
			break ;
		if (std::cin.eof())
			break ;
	}
	return (0);
}
