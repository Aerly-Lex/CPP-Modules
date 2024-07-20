/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:36:19 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/20 09:04:22 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include "include/AForm.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/Intern.hpp"

int	main()
{
	{
		Intern someRandomIntern;
		AForm* form;

		form = someRandomIntern.makeForm("Robotomy", "Bender");
		if (form)
		{
			std::cout << *form << std::endl;
			delete form;
		}
	}
	return (0);
}
