/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:44:02 by artmende          #+#    #+#             */
/*   Updated: 2023/12/30 17:20:40 by artmende         ###   ########.fr       */
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

	for (std::map<time_t, double>::iterator it = btc._value_map.begin(); it != btc._value_map.end(); it++)
	{
		std::cout << "time_t value : " << (*it).first << " | date : " <<  ctime(&((*it).first)) << " | btc value : " << (*it).second << std::endl;
	}
	


	// std::map<int, std::string>	mymap;

	// mymap[2] = "coucou";

	// std::cout << mymap.begin()->first << std::endl;


/* 

		struct tm	tm;
		time_t		rawtime;
		time(&rawtime);
		tm = *(localtime(&rawtime));

		std::cout << "struct tm content with instant time (" << rawtime << ") : " << std::endl;

		std::cout << "gmtoff : " << tm.tm_gmtoff << std::endl;
		std::cout << "hour : " << tm.tm_hour << std::endl;
		std::cout << "isdst : " << tm.tm_isdst << std::endl;
		std::cout << "mday : " << tm.tm_mday << std::endl;
		std::cout << "min : " << tm.tm_min << std::endl;
		std::cout << "mon : " << tm.tm_mon << std::endl;
		std::cout << "sec : " << tm.tm_sec << std::endl;
		std::cout << "wday : " << tm.tm_wday << std::endl;
		std::cout << "yday : " << tm.tm_yday << std::endl;
		std::cout << "year : " << tm.tm_year << std::endl;
		std::cout << "zone : " << tm.tm_zone << std::endl;

		time_t	random_time = 646646474;
		tm = *(localtime(&random_time));
		std::cout << "\n\nstruct tm content with time_t = " << random_time << " : " << std::endl;

		std::cout << "gmtoff : " << tm.tm_gmtoff << std::endl;
		std::cout << "hour : " << tm.tm_hour << std::endl;
		std::cout << "isdst : " << tm.tm_isdst << std::endl;
		std::cout << "mday : " << tm.tm_mday << std::endl;
		std::cout << "min : " << tm.tm_min << std::endl;
		std::cout << "mon : " << tm.tm_mon << std::endl;
		std::cout << "sec : " << tm.tm_sec << std::endl;
		std::cout << "wday : " << tm.tm_wday << std::endl;
		std::cout << "yday : " << tm.tm_yday << std::endl;
		std::cout << "year : " << tm.tm_year << std::endl;
		std::cout << "zone : " << tm.tm_zone << std::endl;

 */

	return 0;
}
