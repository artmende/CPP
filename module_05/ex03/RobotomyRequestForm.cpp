/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:57:37 by artmende          #+#    #+#             */
/*   Updated: 2022/05/05 15:11:22 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
Form("robotomy request", 72, 45, "")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("robotomy request", 72, 45, target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :
Form((Form &)src)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(void)rhs;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	if (this->getIsSigned() == false)
		throw Form::FormNotSignedException();

	std::cout << "DrrDRRRrDdddRR...ZzZzZzZzZzZzZCcrrrr.. *Very loud drilling noise*..." << std::endl;
	std::cout << executor.getName() << " is trying to robotomize " << this->getTarget() << "...";
	if (this->select_zero_or_one())
		std::cout << this->getTarget() << " has been succesfully robotomized !" << std::endl;
	else
		std::cout << "The robotomy failed... Better call a doctor !" << std::endl;
}
