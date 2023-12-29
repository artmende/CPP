/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2023/12/29 16:11:25 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(std::string data_path) : _data_path(data_path)
{}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange &	BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	if (this != &rhs)
	{
		// need to equal all attributes
	}
	return (*this);
}

void	BitcoinExchange::fill_value_map()
{
	std::ifstream	source_file(this->_data_path.c_str());
	std::string		buffer;

	while (source_file.good())
	{
		std::getline(source_file, buffer);
		std::cout << "line extracted : " << buffer << std::endl;
	}
	if (source_file.eof() == false)
	{
		std::cout << "Error while reading the file '" << this->_data_path << "'" << std::endl;
	}
	
}
