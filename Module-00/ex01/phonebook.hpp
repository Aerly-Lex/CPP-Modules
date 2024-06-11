/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:40:22 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/14 10:46:49 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact();
		~Contact();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
		void	setFirstName(std::string);
		void	setLastName(std::string);
		void	setNickname(std::string);
		void	setPhoneNumber(std::string);
		void	setDarkestSecret(std::string);
};

class PhoneBook {
	private:
		Contact	contacts[8];
	public:
		PhoneBook() ;//{std::cout << "Constuctor\n"; }
		~PhoneBook();// {std::cout << "Destructor\n";}
		void addContact(int index);
		void getContactInfo();
};

std::string	getUserInput(std::string prompt);
bool		ft_isSpace(const std::string& input);
bool		ft_stringHasDigit(std::string& input);
bool		ft_isValidPhonenumber(std::string& input);



#endif
