/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:52:21 by artmende          #+#    #+#             */
/*   Updated: 2022/03/12 06:54:08 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.main.hpp"

Phonebook::Phonebook(void) : _nbr_of_contact(0)
{}

Phonebook::~Phonebook(void)
{}

void	Phonebook::add_contact(void)
{
	std::cout << "Adding new contact to slot " << this->_nbr_of_contact % 8 << "/7." << std::endl;
	std::cout << "First name : ";
	std::cin >> this->_contact_array[this->_nbr_of_contact % 8].first_name;
	std::cout << "Last name : ";
	std::cin >> this->_contact_array[this->_nbr_of_contact % 8].last_name;
	std::cout << "Nickname : ";
	std::cin >> this->_contact_array[this->_nbr_of_contact % 8].nickname;
	std::cout << "Phone number : ";
	std::cin >> this->_contact_array[this->_nbr_of_contact % 8].phone_number;
	std::cout << "Darkest secret : ";
	std::cin >> this->_contact_array[this->_nbr_of_contact % 8].darkest_secret;
	std::cout << "Contact added successfully !" << std::endl;
	this->_nbr_of_contact++;
}

void	Phonebook::search(void) const
{
	int	i = this->_nbr_of_contact;

	if (i > 7)
		i = 7;
	while (i >= 0)
	{
		std::cout << "Contact with ID " << i << std::endl;
		std::cout << "First name : '" << this->_contact_array[i].first_name << "'" << std::endl;
		i--;
	}
}
