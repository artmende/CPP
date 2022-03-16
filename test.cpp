/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 07:04:48 by artmende          #+#    #+#             */
/*   Updated: 2022/03/16 08:14:01 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int	main()
{
	std::string	str = "12345";

	std::cout << "012345678910" << std::endl;
	std::cout << str.substr(0, 30) << "|" << std::endl;
	std::cout << std::setw(8) << str.substr(0, 3) << "|" << std::endl;

	std::getline(std::cin, str);
	std::cout << "New string is : " << str << std::endl;
	return 0;
}
