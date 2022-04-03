/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:50:21 by artmende          #+#    #+#             */
/*   Updated: 2022/04/03 11:04:20 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	b(71);
	Fixed	c(71.0f);

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;


/* 
//	if (a < b)
	if (a.operator<(b))
		std::cout << "a (" << a << ") is bigger than b (" << b << ")" << std::endl;
//	if (b == c)
	if (b.operator==(c))
		std::cout << "b and c are equals" << std::endl;
	else
		std::cout << "b and c are not equals" << std::endl;

	b++; */
}
