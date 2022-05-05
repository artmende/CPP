/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/05/05 12:01:24 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("shrubbery creation", 145, 137, "")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form("shrubbery creation", 145, 137, target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) :
//Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute(), src.getTarget())
Form((Form &)src)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(void)rhs;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	(void)executor;
}
