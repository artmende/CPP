/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/05/11 12:32:26 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _data("")
{}

Data::Data(std::string data) : _data(data)
{}

Data::Data(Data const & src) : _data(src._data)
{}

Data::~Data()
{}

Data &	Data::operator=(Data const & rhs)
{
	this->_data = rhs.getData();
	return (*this);
}

std::string	Data::getData() const
{
	return (this->_data);
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
