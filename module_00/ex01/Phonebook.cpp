/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:52:21 by artmende          #+#    #+#             */
/*   Updated: 2022/03/16 12:09:17 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.main.hpp"

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
		std::cout << this->_contact_array[(this->_nbr_of_contact + 1) % 8].first_name << "(index ";
		std::cout << (this->_nbr_of_contact + 1) % 8 << ")." << std::endl;
		std::cout << "Do you wish to proceed ? (Y/N) -> ";
		std::getline(std::cin, yes_no);
		if (yes_no.compare("Y"))
			return ;
	}
	this->_nbr_of_contact++;
	std::cout << std::endl << "Adding new contact to slot " << this->_nbr_of_contact % 8 << "/7." << std::endl;

	std::cout << "First name : ";
	std::getline(std::cin, this->_contact_array[this->_nbr_of_contact % 8].first_name);

	std::cout << "Last name : ";
	std::getline(std::cin, this->_contact_array[this->_nbr_of_contact % 8].last_name);

	std::cout << "Nickname : ";
	std::getline(std::cin, this->_contact_array[this->_nbr_of_contact % 8].nickname);

	std::cout << "Phone number : ";
	std::getline(std::cin, this->_contact_array[this->_nbr_of_contact % 8].phone_number);

	std::cout << "Darkest secret : ";
	std::getline(std::cin, this->_contact_array[this->_nbr_of_contact % 8].darkest_secret);

	if (std::cin)
		std::cout << "Contact added successfully !" << std::endl;
}

void	Phonebook::search(void) const
{
	int	index_max = this->_nbr_of_contact;
	int	index_to_look_up;

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

		if (this->_contact_array[i].first_name.size() > 10)
			std::cout << this->_contact_array[i].first_name.substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->_contact_array[i].first_name << "|";

		if (this->_contact_array[i].last_name.size() > 10)
			std::cout << this->_contact_array[i].last_name.substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->_contact_array[i].last_name << "|";

		if (this->_contact_array[i].nickname.size() > 10)
			std::cout << this->_contact_array[i].nickname.substr(0, 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << this->_contact_array[i].nickname << std::endl;

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
	std::cout << "First name : " << this->_contact_array[id].first_name << std::endl;
	std::cout << "Last name : " << this->_contact_array[id].last_name << std::endl;
	std::cout << "Nickname : " << this->_contact_array[id].nickname << std::endl;
	std::cout << "Phone number : " << this->_contact_array[id].phone_number << std::endl;
	std::cout << "Darkest secret : " << this->_contact_array[id].darkest_secret << std::endl;
}
