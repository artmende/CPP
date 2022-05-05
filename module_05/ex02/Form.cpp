/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/05/05 12:05:14 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _gradeToSign(1), _gradeToExecute(1)
{}

Form::Form(std::string name, int gradeToSign, int gradeToExecute, std::string target) :
_name(name),
_isSigned(false),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute),
_target(target)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) :
_name(src.getName()),
_isSigned(src.getIsSigned()),
_gradeToSign(src.getGradeToSign()),
_gradeToExecute(src.getGradeToExecute()),
_target(src.getTarget())
{}

Form::~Form()
{}

Form &	Form::operator=(Form const & rhs)
{
	(void)rhs;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getIsSigned() const
{
	return (this->_isSigned);
}

int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

std::string	Form::getTarget() const
{
	return (this->_target);
}

void	Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

void	Form::checkGradeToExecute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &	operator<<(std::ostream & o, Form const & i)
{
	o << "Form " << i.getName() << " with target '" << i.getTarget() << "'";
	if (i.getIsSigned() == true)
		o << " is already signed. ";
	else
		o << " is NOT signed yet. ";
	o << "Grade to sign is " << i.getGradeToSign() << " or higher. ";
	o << "Grade to execute is " << i.getGradeToExecute() << " or higher.";

	return (o);
}
