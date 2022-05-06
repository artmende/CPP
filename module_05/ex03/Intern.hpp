/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/05/06 16:23:06 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
	std::string	_formArray[3];
	Form*	makeShrubberyCreationForm(std::string formName, std::string formTarget) const;
	Form*	makeRobotomyRequestForm(std::string formName, std::string formTarget) const;
	Form*	makePresidentialPardonForm(std::string formName, std::string formTarget) const;
	Form*	makeUnknownForm(std::string formName, std::string formTarget) const;
public:
	Intern();
	Intern(Intern const & src);
	virtual ~Intern();

	Intern &	operator=(Intern const & rhs);

	Form*	makeForm(std::string formName, std::string formTarget) const;
};

#endif
