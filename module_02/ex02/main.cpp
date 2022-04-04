/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:50:21 by artmende          #+#    #+#             */
/*   Updated: 2022/04/04 09:39:26 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

std::cout << std::endl << "tests below" << std::endl;

std::cout << Fixed(6) * Fixed(3.467f) << std::endl;
std::cout << Fixed(63.3636f) / Fixed(4) << std::endl;
std::cout << Fixed(2) - Fixed(21) << std::endl;
std::cout << Fixed(1) / Fixed(4) << std::endl;

return 0;


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
