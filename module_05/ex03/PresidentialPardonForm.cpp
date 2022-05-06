/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:06:24 by artmende          #+#    #+#             */
/*   Updated: 2022/05/06 13:29:13 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
Form("presidential pardon", 25, 5, "")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("presidential pardon", 25, 5, target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) :
Form((Form &)src)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(void)rhs;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	if (this->getIsSigned() == false)
		throw Form::FormNotSignedException();

	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
