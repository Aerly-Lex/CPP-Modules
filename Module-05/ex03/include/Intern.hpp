/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:43:36 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/19 16:08:53 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	AForm;

class	Intern {
	private:
		static const	std::string _formName[3];
	public:
		Intern();
		~Intern();
		Intern(const Intern& other);
		Intern&	operator=(const Intern& other);

		AForm*	makeForm(std::string formName, std::string formTarget);
};

#endif
