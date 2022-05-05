/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:57:23 by artmende          #+#    #+#             */
/*   Updated: 2022/05/05 14:58:13 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);

	void	execute(Bureaucrat const & executor) const;
};

#endif
