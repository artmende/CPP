/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:50:21 by artmende          #+#    #+#             */
/*   Updated: 2022/04/12 09:31:01 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main()
{
	// Please see attached picture for visual representation of the triangle.

	Point	a(-1.5f, 7.5f);
	Point	b(-2, -2);
	Point	c(8.7f, 5.7f);
	Point	p1(-4.2f, 6.2f);
	Point	p2(-1.45f, -0.69f);
	Point	p3(-0.7f, 4.5f);
	Point	p4(3.7f, 2.6f);
	Point	p5(3.5f, 1.957f);
	Point	p6(6.42f, 6.66f);
	Point	p7(10.7f, 4.2f);

	std::cout << "p1 is " << (bsp(a, b, c, p1) ? "INSIDE" : "OUTSIDE") << " of the triangle abc" << std::endl;
	std::cout << "p2 is " << (bsp(a, b, c, p2) ? "INSIDE" : "OUTSIDE") << " of the triangle abc" << std::endl;
	std::cout << "p3 is " << (bsp(a, b, c, p3) ? "INSIDE" : "OUTSIDE") << " of the triangle abc" << std::endl;
	std::cout << "p4 is " << (bsp(a, b, c, p4) ? "INSIDE" : "OUTSIDE") << " of the triangle abc" << std::endl;
	std::cout << "p5 is " << (bsp(a, b, c, p5) ? "INSIDE" : "OUTSIDE") << " of the triangle abc" << std::endl;
	std::cout << "p6 is " << (bsp(a, b, c, p6) ? "INSIDE" : "OUTSIDE") << " of the triangle abc" << std::endl;
	std::cout << "p7 is " << (bsp(a, b, c, p7) ? "INSIDE" : "OUTSIDE") << " of the triangle abc" << std::endl;
	std::cout << "b is " << (bsp(a, b, c, b) ? "INSIDE" : "OUTSIDE") << " of the triangle abc" << std::endl;

/* 

	Point	a;
	Point	b(21.4f, (int)34.3f);
	Point	c(3, (float)6);
//	Point	d(c);
	Point	d(12, 7);

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

	std::cout << std::endl;
	std::cout << "a : ";
	std::cout << "(" << a.get_x() << ";" << a.get_y() << ")" << std::endl;

	std::cout << "b : ";
	std::cout << "(" << b.get_x() << ";" << b.get_y() << ")" << std::endl;

	std::cout << "c : ";
	std::cout << "(" << c.get_x() << ";" << c.get_y() << ")" << std::endl;

	std::cout << "d : ";
	std::cout << "(" << d.get_x() << ";" << d.get_y() << ")" << std::endl;

	Point	e(466, 121);
	Point	f(258, 312);
	Point	g(721, 499);
	Point	h(375.3636f, 379.253647f);

	std::cout << bsp(e, f, g, h) << std::endl;

 */
/* 
//	std::cout << bsp(a, b, c, d) << std::endl;

	std::cout << 255.99f / 32768 << std::endl;
	std::cout << Fixed(255.99f) / Fixed(32768) << std::endl;
//	std::cout << Fixed(0.3f) * Fixed(400) << std::endl;
	std::cout << Fixed(8388607) << std::endl;

	Fixed	test_8(0.03f);
	std::cout << test_8.getRawBits() << std::endl;

 */

	return (0);
}
