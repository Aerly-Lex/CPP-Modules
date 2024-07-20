/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:36:35 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/19 14:40:34 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <fstream>

#define ASCII_TREE \
"		TREE \n\
	TREETREETREE\n\
TREETREETREETREETREE\n\
TREETREETREETREETREE\n\
TREETREETREETREETREE\n\
		TREE\n\
		TREE\n"

class ShrubberyCreationForm : public AForm {
	private:
		const std::string	target;
	public:
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

	void execute(const Bureaucrat &executor) const;
};

#endif
