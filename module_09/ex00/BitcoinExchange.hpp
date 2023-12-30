/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2023/12/30 17:14:30 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <ctime>
# include <fstream>
# include <sstream>
# include <cstring>

class BitcoinExchange
{
private:
	std::string					_data_path;

public:
	std::map<time_t, double>	_value_map;
	BitcoinExchange();
	BitcoinExchange(std::string data_path);
	BitcoinExchange(BitcoinExchange const & src);
	virtual ~BitcoinExchange();

	BitcoinExchange &	operator=(BitcoinExchange const & rhs);

	void	fill_value_map();
};

#endif
