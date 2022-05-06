/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/05/06 14:19:59 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		this->setGrade(grade);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error hiring Bureaucrat " << name << " : " << e.what() << ".";
		if (grade < 1)
		{
			std::cout << " Maximum grade of 1 is applied." << std::endl;
			this->_grade = 1;
		}
		else
		{
			std::cout << " Minimum grade of 150 is applied." << std::endl;
			this->_grade = 150;
		}
	}
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

void	Bureaucrat::setGrade(int newGrade)
{
	if (newGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (newGrade < 1)
		throw Bureaucrat::GradeTooHighException();

	this->_grade = newGrade;
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
	try
	{
		this->setGrade(this->_grade - 1);
		std::cout << "Bureaucrat " << this->getName() << " is promoted to grade " << this->getGrade() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot be promoted to " << this->_grade - 1 << " due to " << e.what() << ".";
		std::cout << " Maximum grade of 1 is applied." << std::endl;
		this->_grade = 1;
	}
}

void	Bureaucrat::incrementGrade(unsigned int increment)
{
	try
	{
		this->setGrade(this->_grade - increment);
		std::cout << "Bureaucrat " << this->getName() << " is promoted to grade " << this->getGrade() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot be promoted to " << this->_grade - increment << " due to " << e.what() << ".";
		std::cout << " Maximum grade of 1 is applied." << std::endl;
		this->_grade = 1;
	}
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		this->setGrade(this->_grade + 1);
		std::cout << "Bureaucrat " << this->getName() << " is demoted to grade " << this->getGrade() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot be demoted to " << this->_grade + 1 << " due to " << e.what() << ".";
		std::cout << " Minimum grade of 150 is applied." << std::endl;
		this->_grade = 150;
	}
}

void	Bureaucrat::decrementGrade(unsigned int decrement)
{
	try
	{
		this->setGrade(this->_grade + decrement);
		std::cout << "Bureaucrat " << this->getName() << " is demoted to grade " << this->getGrade() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot be demoted to " << this->_grade + decrement << " due to " << e.what() << ".";
		std::cout << " Minimum grade of 150 is applied." << std::endl;
		this->_grade = 150;
	}
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
		std::cout << "Bureaucrat " << this->getName() << " cannot sign the form " << f.getName() << " due to ";
		std::cout << e.what() << ". ";
		std::cout << this->getName() << " has a grade of " << this->getGrade() << " but the form needs " << f.getGradeToSign() << "." << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & f) const
{
	try
	{
		f.execute(*this);
		std::cout << "Bureaucrat " << this->getName() << " executes Form " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat " << this->getName() << " cannot execute the form " << f.getName() << " due to ";
		std::cout << e.what() << "." << std::endl;
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
