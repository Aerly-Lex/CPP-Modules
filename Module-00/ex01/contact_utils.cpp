/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:41:10 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/05/14 10:47:40 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
	std::cout << MAGENTA << "Phonebook Constructor has been called\n" << RESET;
}

Contact::~Contact()
{
	std::cout << MAGENTA << "Phonebook Destructor has been called\n" << RESET;
}

std::string Contact::getFirstName() {
	return this->firstName;
}

void	Contact::setFirstName(std::string str) {
	this->firstName = str;
}


std::string Contact::getLastName() {
	return this->lastName;
}

void	Contact::setLastName(std::string str) {
	this->lastName = str;
}


std::string Contact::getNickname() {
	return this->nickname;
}

void	Contact::setNickname(std::string str) {
	this->nickname = str;
}


std::string Contact::getPhoneNumber() {
	return this->phoneNumber;
}

void	Contact::setPhoneNumber(std::string str) {
	this->phoneNumber = str;
}


std::string Contact::getDarkestSecret() {
	return this->darkestSecret;
}

void	Contact::setDarkestSecret(std::string str) {
	this->darkestSecret = str;
}

