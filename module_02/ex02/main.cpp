/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:50:21 by artmende          #+#    #+#             */
/*   Updated: 2022/04/12 11:41:40 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {

	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "tests below" << std::endl;

	Fixed	f1(0.0124f);
	Fixed	f2(6);
	Fixed	f3(-386);
	Fixed	f4(f2 - 45);
	Fixed	f5;
	f5 = -3.636f;

	if (f1 < f2)
		std::cout << f1 << " < " << f2 << std::endl;
	if (f2 > f3)
		std::cout << f2 << " > " << f3 << std::endl;
	if (f4 < f5)
		std::cout << f4 << " < " << f5 << std::endl;
	if (f5 < f1)
		std::cout << f5 << " < " << f1 << std::endl << std::endl;

	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl; // (+) + (+)
	std::cout << f2 << " + " << f3 << " = " << f2 + f3 << std::endl; // (+) + (-)
	std::cout << f5 << " + " << f4 << " = " << f5 + f4 << std::endl; // (-) + (-)
	std::cout << std::endl;
	std::cout << f2 << " - " << f3 << " = " << f2 - f3 << std::endl; // (+) - (-)
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl; // (+) - (+)
	std::cout << f5 << " - " << f3 << " = " << f5 - f3 << std::endl; // (-) - (-)
	std::cout << std::endl;
	std::cout << f4 << " * " << f1 << " = " << f4 * f1 << std::endl; // (-) * (+)
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl; // (+) * (+)
	std::cout << f3 << " * " << f5 << " = " << f3 * f5 << std::endl; // (-) * (-)
	std::cout << std::endl;
	std::cout << f3 << " / " << f2 << " = " << f3 / f2 << std::endl; // (-) / (+)
	std::cout << f2 << " / " << f1 << " = " << f2 / f1 << std::endl; // (+) / (+)
	std::cout << f5 << " / " << f3 << " = " << f5 / f3 << std::endl; // (-) / (-)

	return 0;

}
