/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:44:02 by artmende          #+#    #+#             */
/*   Updated: 2023/12/29 15:31:00 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// first load all price data - browse data file line by line to get all the prices - store in a std::map
// Then browse the input file line by line and output the result for each of them
// for each line of input file, get the date in the correct format, and browse the map in search of the date



int	main(int argc, char **argv)
{
	std::string	data_path = "./data.csv";

	BitcoinExchange	btc(data_path);

	btc.fill_value_map();

	(void)argc;
	(void)argv;

	// std::map<int, std::string>	mymap;

	// mymap[2] = "coucou";

	// std::cout << mymap.begin()->first << std::endl;

	time_t	now;
	time(&now);

	std::cout << ctime(&now) << std::endl;

	localtime(&now);


	return 0;
}
