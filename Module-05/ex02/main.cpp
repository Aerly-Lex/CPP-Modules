/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:36:19 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/17 17:31:08 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include "include/AForm.hpp"
#include "include/PresidentialPardonForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/ShrubberyCreationForm.hpp"

int	main()
{
	std::srand(std::time(NULL));

	Bureaucrat				apple("Apple", 2);
	Bureaucrat				bean("Bean", 28);
	Bureaucrat				citrus("Citrus", 51);

	PresidentialPardonForm	pardon("Presidential");
	RobotomyRequestForm		robotomy("Robotomy");
	ShrubberyCreationForm	shrubbery("Shrubbery");

	std::cout << apple << "\n" << pardon << std::endl;

	apple.signForm(pardon);
	apple.executeForm(pardon);
	apple.signForm(robotomy);
	apple.executeForm(robotomy);
	apple.signForm(shrubbery);
	apple.executeForm(shrubbery);
	apple.signForm(pardon);

	std::cout << bean << "\n" << pardon << std::endl;

	bean.executeForm(pardon);
	bean.signForm(robotomy);
	bean.executeForm(robotomy);
	bean.signForm(shrubbery);
	bean.executeForm(shrubbery);

	std::cout << citrus << "\n" << pardon << std::endl;

	citrus.executeForm(pardon);
	citrus.signForm(robotomy);
	citrus.executeForm(robotomy);
	citrus.signForm(shrubbery);
	citrus.executeForm(shrubbery);

	std::cout	<< apple << "\n" << std::endl;
	std::cout	<< bean << "\n" << std::endl;
	std::cout	<< citrus << "\n" << std::endl;

	std::cout	<< pardon << std::endl
				<< robotomy << std::endl
				<< shrubbery << std::endl;

	try {
		std::cout << MAGENTA << "\nExecuting Pardon\n\n" << RESET;

		pardon.execute(apple);
		pardon.execute(bean);
		pardon.execute(citrus);

	} catch (const std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
	}

	try {
		std::cout << MAGENTA << "\nExecuting Robotomy\n\n" << RESET;

		robotomy.execute(apple);
		robotomy.execute(bean);
		robotomy.execute(citrus);

	} catch (const std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
	}

	try {
		std::cout << MAGENTA << "\nExecuting Shrubbery\n\n" << RESET;

		shrubbery.execute(apple);
		shrubbery.execute(bean);
		shrubbery.execute(citrus);

	} catch (const std::exception& e) {
			std::cerr << RED << e.what() << RESET << std::endl;
	}

	return (0);
}
