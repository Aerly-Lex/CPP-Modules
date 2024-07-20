/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:43:34 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/19 16:07:42 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Intern.hpp"

const std::string Intern::_formName[3] = {
	"Shrubbery",
	"Robotomy",
	"Presidential"
};

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& other) {
	*this = other;
}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return (*this);
}

//				Methods				//

AForm*	Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm	*form = NULL;
	int	index = -1;

	while (index++ < 3)
	{
		if (formName == _formName[index])
		{
			std::cout << "Intern creates " << formName << std::endl;
			break ;
		}
	}

	switch (index)
	{
		case 0:
			form = new ShrubberyCreationForm(formTarget);
			break ;
		case 1:
			form = new RobotomyRequestForm(formTarget);
			break ;
		case 2:
			form = new PresidentialPardonForm(formTarget);
			break ;
		default:
			std::cout	<< RED
						<< "Intern: Form not found: "
						<< formName
						<< RESET << std::endl;
	}
	return (form);
}
