/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:24:24 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/17 17:28:02 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/AForm.hpp"

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute)
: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < highestGrade || gradeToExecute < highestGrade)
		throw GradeTooHighException();
	else if (gradeToSign > lowestGrade || gradeToExecute > lowestGrade)
		throw GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(const AForm& other)
: name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

AForm&	AForm::operator=(const AForm& other)
{
	if (this != &other)
		isSigned = other.isSigned;
	return (*this);
}

//				Methods				//

std::string	AForm::getName() const {
	return (this->name);
}

bool		AForm::getIsSigned() const {
	return (this->isSigned);
}

int			AForm::getGradeToSign() const {
	return (this->gradeToSign);
}

int			AForm::getGradeToExecute() const {
	return (this->gradeToExecute);
}

void		AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > gradeToSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

//			Exception classes			//

const char*	AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too high.");
}

const char*	AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too low.");
}

const char*	AForm::FormNotSignedException::what() const throw() {
	return ("Grade is not signed.");
}

//				Functions				//

std::ostream& operator<<(std::ostream& os, const AForm& Aform)
{
	os	<< GREEN
		<< "AForm: " << Aform.getName()
		<< "\t| Signed: "
		<< (Aform.getIsSigned() ? "Yes" : "No")
		<< "\t| Grade to Sign: "
		<< Aform.getGradeToSign()
		<< "\t| Grade to Execute: "
		<< Aform.getGradeToExecute()
		<< RESET;
	return (os);
}
