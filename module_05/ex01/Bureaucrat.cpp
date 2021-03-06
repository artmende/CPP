/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/05/04 17:48:36 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()), _grade(src.getGrade())
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::incrementGrade(unsigned int increment)
{
	if (this->_grade - increment < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= increment;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::decrementGrade(unsigned int decrement)
{
	if (this->_grade + decrement > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += decrement;
}

void	Bureaucrat::signForm(Form & f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << "Bureaucrat " << this->getName() << " signs Form " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat " << this->getName() << " cannot sign Form " << f.getName() << " because ";
		std::cout << e.what() << ". ";
		std::cout << this->getName() << " has " << this->getGrade() << " but the form needs " << f.getGradeToSign() << std::endl;
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}
