/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/05/05 15:06:07 by artmende         ###   ########.fr       */
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
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	if (this->getIsSigned() == false)
		throw Form::FormNotSignedException();
	

	std::ofstream	of((this->getTarget().append("_shrubbery")).c_str(), std::ios_base::app);

	if (of.good() == true)
	{
		if (this->select_zero_or_one())
		{
			of << "          .     .  .      +     .      .          .\n";
			of << "     .       .      .     #       .           .\n";
			of << "        .      .         ###            .      .      .\n";
			of << "      .      .   '#:. .:##'##:. .:#'  .      .\n";
			of << "          .      . '####'###'####'  .\n";
			of << "       .     '#:.    .:#'###'#:.    .:#'  .        .       .\n";
			of << "  .             '#########'#########'        .        .\n";
			of << "        .    '#:.  '####'###'####'  .:#'   .       .\n";
			of << "     .     .  '#######''##'##''#######'                  .\n";
			of << "                .'##'#####'#####'##'           .      .\n";
			of << "    .   '#:. ...  .:##'###'###'##:.  ... .:#'     .\n";
			of << "      .     '#######'##'#####'##'#######'      .     .\n";
			of << "    .    .     '#####''#######''#####'    .      .\n";
			of << "            .     '      000      '    .     .\n";
			of << "       .         .   .   000     .        .       .\n";
			of << ".. .. ..................O000O........................ ...... ...\n";
		}
		else
		{
			of << "              * *    \n";
			of << "           *    *  *\n";
			of << "      *  *    *     *  *\n";
			of << "     *     *    *  *    *\n";
			of << " * *   *    *    *    *   *\n";
			of << " *     *  *    * * .#  *   *\n";
			of << " *   *     * #.  .# *   *\n";
			of << "  *     '#.  #: #' * *    *\n";
			of << " *   * * '#. ##'       *\n";
			of << "   *       '###\n";
			of << "             '##\n";
			of << "              ##.\n";
			of << "              .##:\n";
			of << "              :###\n";
			of << "              ;###\n";
			of << "            ,####.\n";
			of << "/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\\n";
		}
	}
	else
		std::cout << "Couldn't write the tree to '" << this->getTarget() << "_shrubbery'." << std::endl;
	of.close();

	// The ASCII art trees were taken from there :
	// https://www.asciiart.eu/holiday-and-events/christmas/trees
	// https://www.asciiart.eu/plants/other
}
