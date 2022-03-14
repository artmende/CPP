/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:52:21 by artmende          #+#    #+#             */
/*   Updated: 2022/03/14 08:58:44 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.main.hpp"

Phonebook::Phonebook(void) : _nbr_of_contact(-1)
{}

Phonebook::~Phonebook(void)
{}

void	Phonebook::add_contact(void)
{
	this->_nbr_of_contact++;
	std::cout << "Adding new contact to slot " << this->_nbr_of_contact % 8 << "/7." << std::endl;
	std::cout << "First name : ";
//	std::cin >> this->_contact_array[this->_nbr_of_contact % 8].first_name;
	std::getline(std::cin, this->_contact_array[this->_nbr_of_contact % 8].first_name);

	std::cout << "Last name : ";
//	std::cin >> this->_contact_array[this->_nbr_of_contact % 8].last_name;
	std::getline(std::cin, this->_contact_array[this->_nbr_of_contact % 8].last_name);

	std::cout << "Nickname : ";
//	std::cin >> this->_contact_array[this->_nbr_of_contact % 8].nickname;
	std::getline(std::cin, this->_contact_array[this->_nbr_of_contact % 8].nickname);

	std::cout << "Phone number : ";
//	std::cin >> this->_contact_array[this->_nbr_of_contact % 8].phone_number;
	std::getline(std::cin, this->_contact_array[this->_nbr_of_contact % 8].phone_number);

	std::cout << "Darkest secret : ";
//	std::cin >> this->_contact_array[this->_nbr_of_contact % 8].darkest_secret;
	std::getline(std::cin, this->_contact_array[this->_nbr_of_contact % 8].darkest_secret);


	std::cout << "Contact added successfully !" << std::endl;
}

void	Phonebook::search(void) const
{
	int	index_max = this->_nbr_of_contact;

	if (index_max < 0)
	{
		std::cout << "No contact found." << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	if (index_max > 7)
		index_max = 7;
	for (int i = 0; i <= index_max; i++)
	{	
		std::cout << std::setw(10) << i << "|";
		
	//	std::cout << std::setw(10); // display first name
		if (this->_contact_array[i].first_name.size() > 10)
			std::cout << this->_contact_array[i].first_name.substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->_contact_array[i].first_name << "|";

	//	std::cout << std::setw(10); // display last name
		if (this->_contact_array[i].last_name.size() > 10)
			std::cout << this->_contact_array[i].last_name.substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->_contact_array[i].last_name << "|";

	//	std::cout << std::setw(10); // display nickname
		if (this->_contact_array[i].nickname.size() > 10)
			std::cout << this->_contact_array[i].nickname.substr(0, 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << this->_contact_array[i].nickname << std::endl;

	}
	

/* 	while (i >= 0)
	{
		std::cout << "Contact with ID " << i << std::endl;
		std::cout << "First name : '" << this->_contact_array[i].first_name << "'" << std::endl;
		i--;
	} */
}
