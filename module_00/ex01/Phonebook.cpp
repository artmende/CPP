/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:52:21 by artmende          #+#    #+#             */
/*   Updated: 2022/03/25 13:14:21 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) : _nbr_of_contact(-1)
{}

Phonebook::~Phonebook(void)
{}

void	Phonebook::add_contact(void)
{
	std::string	yes_no;

	if (this->_nbr_of_contact > 6)
	{
		std::cout << std::endl << "The PhoneBook is full ! Adding a new contact will erase ";
		std::cout << this->_contact_array[(this->_nbr_of_contact + 1) % 8].get_first_name() << "(index ";
		std::cout << (this->_nbr_of_contact + 1) % 8 << ")." << std::endl;
		std::cout << "Do you wish to proceed ? (Y/N) -> ";
		std::getline(std::cin, yes_no);
		if (yes_no.compare("Y"))
			return ;
	}
	this->_nbr_of_contact++;
	std::cout << std::endl << "Adding new contact to slot " << this->_nbr_of_contact % 8 << "/7." << std::endl;
	this->_contact_array[this->_nbr_of_contact % 8].set_contact_infos();
	if (std::cin)
		std::cout << "Contact added successfully !" << std::endl;
}

void	Phonebook::search(void) const
{
	int	index_max = this->_nbr_of_contact;

	std::cout << std::endl;
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
		std::cout << std::setw(10) << this->_contact_array[i].get_first_name_truncated() << "|";
		std::cout << std::setw(10) << this->_contact_array[i].get_last_name_truncated() << "|";
		std::cout << std::setw(10) << this->_contact_array[i].get_nickname_truncated() << std::endl;
	}
	this->look_up_contact();
}

void	Phonebook::look_up_contact(void) const
{
	std::string	garbage;
	int			id;

	std::cout << std::endl << "Index to look up : ";
	if (!(std::cin >> id))
	{
		if (std::cin.eof())
			return ;
		std::cin.clear();
		id = -1;
	}
	std::getline(std::cin, garbage);
	std::cout << std::endl;
	if (id < 0 || id > this->_nbr_of_contact || id > 7)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	std::cout << "First name : " << this->_contact_array[id].get_first_name() << std::endl;
	std::cout << "Last name : " << this->_contact_array[id].get_last_name() << std::endl;
	std::cout << "Nickname : " << this->_contact_array[id].get_nickname() << std::endl;
	std::cout << "Phone number : " << this->_contact_array[id].get_phone_number() << std::endl;
	std::cout << "Darkest secret : " << this->_contact_array[id].get_darkest_secret() << std::endl;
}
