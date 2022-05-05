/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/05/05 11:45:46 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_isSigned;
	int const			_gradeToSign;
	int const			_gradeToExecute;
	std::string const	_target;

	Form();
public:
	Form(std::string name, int gradeToSign, int gradeToExecute, std::string target);
	Form(Form const & src);
	virtual ~Form();

	Form &	operator=(Form const & rhs);

	std::string		getName() const;
	bool			getIsSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExecute() const;
	std::string		getTarget() const;
	void			beSigned(Bureaucrat const & b);
	void			checkGradeToExecute(Bureaucrat const & executor) const;
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char*	what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char*	what() const throw();
	};
};

std::ostream &	operator<<(std::ostream & o, Form const & i);

#endif
