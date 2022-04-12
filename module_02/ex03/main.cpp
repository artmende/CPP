/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:50:21 by artmende          #+#    #+#             */
/*   Updated: 2022/04/12 11:44:42 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

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

	return (0);
}
