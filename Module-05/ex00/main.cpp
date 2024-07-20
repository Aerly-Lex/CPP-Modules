/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:12:34 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/17 15:54:22 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"

int	main()
{
	try {
		Bureaucrat	apple("Apple", 0);
		std::cout << GREEN << apple.getName() << " has been created\n" << RESET;
		std::cout << apple.getName() << "'s grade is: " << apple.getGrade() << std::endl;
		apple.incrementGrade();
		std::cout << apple.getName() << "'s grade is: " << apple.getGrade() << std::endl;
		apple.incrementGrade();
		std::cout << apple.getName() << "'s grade is: " << apple.getGrade() << std::endl;
	} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat	bean("Bean", 2);
		std::cout << GREEN << bean.getName() << " has been created\n" << RESET;
		std::cout << bean.getName() << "'s grade is: " << bean.getGrade() << std::endl;
		bean.incrementGrade();
		std::cout << bean.getName() << "'s grade is: " << bean.getGrade() << std::endl;
		bean.incrementGrade();
		std::cout << bean.getName() << "'s grade is: " << bean.getGrade() << std::endl;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << RED << "Exception caught: " << e.what() << std::endl << RESET;
	}

	try {
		Bureaucrat	citrus("Citrus", 150);
		std::cout << GREEN << citrus.getName() << " has been created\n" << RESET;
		std::cout << citrus.getName() << "'s grade is: " << citrus.getGrade() << std::endl;
		citrus.incrementGrade();
		std::cout << citrus.getName() << "'s grade is: " << citrus.getGrade() << std::endl;
		citrus.decrementGrade();
		std::cout << citrus.getName() << "'s grade is: " << citrus.getGrade() << std::endl;
		citrus.decrementGrade();
		std::cout << citrus.getName() << "'s grade is: " << citrus.getGrade() << std::endl;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << RED << "Exception caught: " << e.what() << std::endl << RESET;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << RED << "Exception caught: " << e.what() << std::endl << RESET;
	}

	return (0);
}
