/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/05/06 16:21:07 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	this->_formArray[0] = "shrubbery creation";
	this->_formArray[1] = "robotomy request";
	this->_formArray[2] = "presidential pardon";
}

Intern::Intern(Intern const & src)
{
	(void)src;
	this->_formArray[0] = "shrubbery creation";
	this->_formArray[1] = "robotomy request";
	this->_formArray[2] = "presidential pardon";
}

Intern::~Intern()
{}

Intern &	Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

Form*	Intern::makeShrubberyCreationForm(std::string formName, std::string formTarget) const
{
	std::cout << "Intern creates Form " << formName << std::endl;
	return (new ShrubberyCreationForm(formTarget));
}

Form*	Intern::makeRobotomyRequestForm(std::string formName, std::string formTarget) const
{
	std::cout << "Intern creates Form " << formName << std::endl;
	return (new RobotomyRequestForm(formTarget));
}

Form*	Intern::makePresidentialPardonForm(std::string formName, std::string formTarget) const
{
	std::cout << "Intern creates Form " << formName << std::endl;
	return (new PresidentialPardonForm(formTarget));
}

Form*	Intern::makeUnknownForm(std::string formName, std::string formTarget) const
{
	std::cout << "Intern cannot find the Form '" << formName << "' intended for " << formTarget << std::endl;
	return (NULL);
}

Form*	Intern::makeForm(std::string formName, std::string formTarget) const
{
	Form*	(Intern::*f[4])(std::string, std::string) const =
	{&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm, &Intern::makeUnknownForm};

	size_t i = 0;
	while (i < 3)
	{
		if (formName.compare(this->_formArray[i]) == 0)
			break ;
		i++;
	}

	return ((this->*f[i])(formName, formTarget));
}
