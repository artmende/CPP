/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.main.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:52:28 by artmende          #+#    #+#             */
/*   Updated: 2022/03/12 06:58:43 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.main.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	user_input;

	std::cout << "Welcome to the PhoneBook !" << std::endl << std::endl;
	while (true)
	{
		std::cout << "PhoneBook command -> ";
		std::cin >> user_input;
		if (user_input.compare("EXIT") == 0)
			return (0);
		else if (user_input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (user_input.compare("SEARCH") == 0)
			phonebook.search();
		else
			std::cout << "Valid commands are : 'ADD', 'SEARCH' and 'EXIT'" << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
