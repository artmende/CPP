/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:42:44 by artmende          #+#    #+#             */
/*   Updated: 2022/05/19 11:25:11 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please enter a single argument" << std::endl;
		return (1);
	}
	Harl	karen;
	std::string	level_array[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int	level = 0;
	while (level <= 4)
	{
		if ((std::string)argv[1] == level_array[level])
			break ;
		level++;
	}
	switch (level)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		karen.complain("DEBUG");
		std ::cout << std::endl;
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		karen.complain("INFO");
		std ::cout << std::endl;
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		karen.complain("WARNING");
		std ::cout << std::endl;
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		karen.complain("ERROR");
		std ::cout << std::endl;
		break ;
	default:
		std::cout << "[ probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
	return (0);
}
