/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/05/04 14:48:55 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
	Bureaucrat();
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	virtual ~Bureaucrat();

	Bureaucrat &	operator=(Bureaucrat const & rhs);

	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		incrementGrade(unsigned int increment);
	void		decrementGrade();
	void		decrementGrade(unsigned int decrement);

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

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i);

#endif
