/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2023/12/30 16:12:41 by artmende         ###   ########.fr       */
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

	while (source_file.good())
	{
		std::string			line_buf;
		std::stringstream	line_stream;
		std::string			date_buf;
		std::stringstream	date_stream;
		double				btc_value;
		int					year;
		int					month;
		int					day;
		char				dash;

		std::getline(source_file, line_buf);
		line_stream.str(line_buf);

		std::getline(line_stream, date_buf, ',');
		date_stream.str(date_buf);

		line_stream >> btc_value;
		date_stream >> year;
		date_stream >> dash;
		date_stream >> month;
		date_stream >> dash;
		date_stream >> day;

		if (year == 0 || month < 1 || month > 12 || day < 1 || day > 31)
			continue;

		struct tm	tm;
		memset(&tm, 0, sizeof(struct tm));
		// time_t		rawtime;
		// time(&rawtime);
		// tm = *(localtime(&rawtime));
		// tm.tm_hour = 0;
		// tm.tm_min = 0;
		// tm.tm_sec = 0;
		tm.tm_year = year - 1900;
		tm.tm_mon = month - 1;
		tm.tm_mday = day;

		this->_value_map[mktime(&tm)] = btc_value;

		// std::cout << "Date extracted ! On the " << day << "/" << month << "/" << year << " the bitcoin value was " << btc_value << ". And the time_t value for this date is " << mktime(&tm) << std::endl;
	}

	if (source_file.eof() == false)
	{
		std::cout << "Error while reading the file '" << this->_data_path << "'" << std::endl;
	}
	source_file.close();
}
