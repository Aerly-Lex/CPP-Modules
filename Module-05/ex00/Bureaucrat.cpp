/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:12:31 by Dscheffn          #+#    #+#             */
/*   Updated: 2024/07/08 12:01:21 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (grade < highestGrade)
		throw GradeTooHighException();
	else if (grade > lowestGrade)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

//			Methods & Functions			//

std::string	Bureaucrat::getName() const {
	return (this->name);
}

int			Bureaucrat::getGrade() const {
	return (this->grade);
}

void		Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < highestGrade)
		throw GradeTooHighException();
	this->grade--;
}

void		Bureaucrat::decrementGrade()
{
	if (this->grade + 1 > lowestGrade)
		throw GradeTooLowException();
	this->grade++;
}

//			Exception classes			//

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

//				Functions			//

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
		os	<< "Name: "
		<< bureaucrat.getName()
		<< " | Bureaucrat Grade: "
		<< bureaucrat.getGrade();
	return (os);
	return (os);
}
