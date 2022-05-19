/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:33:57 by artmende          #+#    #+#             */
/*   Updated: 2022/05/19 11:25:11 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::_debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::_info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	std::cout << std::endl;
}

void	Harl::_warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::_error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level) const
{
	void	(Harl::*complain_array[4])(void) const =
	{
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
	std::string	level_array[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (size_t i = 0; i < 4; i++)
	{
		if (level == level_array[i])
		{
			(this->*(complain_array[i]))();
			break ;
		}
	}
}
