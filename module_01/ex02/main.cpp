/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:23:26 by artmende          #+#    #+#             */
/*   Updated: 2022/03/23 15:37:02 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of the string variable : " << &str << std::endl;
	std::cout << "Address held by pointer : " << stringPTR << std::endl;
	std::cout << "Address held by reference : " << &stringREF << std::endl << std::endl;

	std::cout << "Value of the string : '" << str << "'" << std::endl;
	std::cout << "Value pointed by pointer : '" << *stringPTR << "'" << std::endl;
	std::cout << "Value pointed by reference : '" << stringREF << "'" << std::endl;
	return (0);
}
