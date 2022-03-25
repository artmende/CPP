/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:54:53 by artmende          #+#    #+#             */
/*   Updated: 2022/03/25 13:14:47 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{}

Contact::~Contact(void)
{}

void	Contact::set_contact_infos(void)
{
	do
	{
		std::cout << "First name : ";
		std::getline(std::cin, this->_first_name);
	} while (this->_first_name.length() == 0);

	do
	{
		std::cout << "Last name : ";
		std::getline(std::cin, this->_last_name);
	} while (this->_last_name.length() == 0);

	do
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, this->_nickname);
	} while (this->_nickname.length() == 0);

	do
	{
		std::cout << "Phone number : ";
		std::getline(std::cin, this->_phone_number);
	} while (this->_phone_number.length() == 0);

	do
	{
		std::cout << "Darkest secret : ";
		std::getline(std::cin, this->_darkest_secret);
	} while (this->_darkest_secret.length() == 0);
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_first_name_truncated(void) const
{
	std::string	first_name = this->get_first_name();
	if (first_name.length() > 10)
	{
		first_name = first_name.substr(0, 9);
		first_name = first_name.append(".");
	}
	return (first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_last_name_truncated(void) const
{
	std::string	last_name = this->get_last_name();
	if (last_name.length() > 10)
	{
		last_name = last_name.substr(0, 9);
		last_name = last_name.append(".");
	}
	return (last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::get_nickname_truncated(void) const
{
	std::string	nickname = this->get_nickname();
	if (nickname.length() > 10)
	{
		nickname = nickname.substr(0, 9);
		nickname = nickname.append(".");
	}
	return (nickname);	
}

std::string	Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}