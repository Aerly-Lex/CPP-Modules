/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:24:24 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/13 09:05:28 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Form.hpp"

Form::Form(const std::string name, int gradeToSign, int gradeToExecute)
: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < highestGrade || gradeToExecute < highestGrade)
		throw GradeTooHighException();
	else if (gradeToSign > lowestGrade || gradeToExecute > lowestGrade)
		throw GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form& other)
: name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

Form&	Form::operator=(const Form& other)
{
	if (this != &other)
		isSigned = other.isSigned;
	return (*this);
}

//				Methods				//

std::string	Form::getName() const {
	return (this->name);
}

bool		Form::getIsSigned() const {
	return (this->isSigned);
}

int			Form::getGradeToSign() const {
	return (this->gradeToSign);
}

int			Form::getGradeToExecute() const {
	return (this->gradeToExecute);
}

void		Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

//			Exception classes			//

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

//				Functions				//

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os	<< "Form: " << form.getName()
		<< " | Signed: "
		<< (form.getIsSigned() ? "Yes" : "No")
		<< " | Grade to Sign: "
		<< form.getGradeToSign()
		<< " | Grade to Execute: "
		<< form.getGradeToExecute();
	return (os);
}
