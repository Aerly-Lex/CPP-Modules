/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:12:34 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/20 10:59:42 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include "include/Form.hpp"

int	main()
{
	try {
		Bureaucrat	apple("Apple", 1);
		Form		f("Document", 2, 50);

		std::cout << apple << std::endl;
		std::cout << f << std::endl;

		apple.signForm(f);
		std::cout << f << std::endl;

		Bureaucrat pear("Pear", 3);
		Form		g("Document2", 2, 50);
		pear.signForm(g);

	} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
	}
	// } catch (const Bureaucrat::GradeTooHighException& e) {
	// 	std::cerr << RED << "Exception caught: " << e.what() << std::endl << RESET;
	// } catch (const Bureaucrat::GradeTooLowException& e) {
	// 	std::cerr << RED << "Exception caught: " << e.what() << std::endl << RESET;
	// }

	return (0);
}
