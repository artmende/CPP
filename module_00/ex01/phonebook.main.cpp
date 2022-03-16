/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.main.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:52:28 by artmende          #+#    #+#             */
/*   Updated: 2022/03/16 11:33:19 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.main.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	user_input;

	std::cout << "Welcome to the PhoneBook !" << std::endl;
	while (std::cin)
	{
		std::cout << std::endl;
		std::cout << "\033[0;31mPhoneBook command -> \033[0m";
		std::getline(std::cin, user_input);

		if (user_input.compare("EXIT") == 0)
			return (0);
		else if (user_input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (user_input.compare("SEARCH") == 0)
			phonebook.search();
		else if (std::cin)
		{
			std::cout << "Valid commands are : 'ADD', 'SEARCH' and 'EXIT'" << std::endl;
		}
	}
	if (!std::cin)
	{
		std::cout << std::endl << "Input error !" << std::endl;
		if (std::cin.eof())
			std::cout << "Standard input has been closed." << std::endl;
		return (1);
	}
	return (0);
}
