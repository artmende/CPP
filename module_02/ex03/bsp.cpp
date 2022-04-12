/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:22:20 by artmende          #+#    #+#             */
/*   Updated: 2022/04/12 10:05:00 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	get_w1_numerator(Point const &a, Point const &c, Point const &point)
{
	Fixed	cy_ay(c.get_y() - a.get_y());
	Fixed	py_ay(point.get_y() - a.get_y());
	Fixed	cx_ax(c.get_x() - a.get_x());

	return (a.get_x() * cy_ay + py_ay * cx_ax - point.get_x() * cy_ay);
}

Fixed	get_w1_denominator(Point const &a, Point const &b, Point const &c)
{
	Fixed	by_ay(b.get_y() - a.get_y());
	Fixed	cx_ax(c.get_x() - a.get_x());
	Fixed	bx_ax(b.get_x() - a.get_x());
	Fixed	cy_ay(c.get_y() - a.get_y());

	return (by_ay * cx_ax - bx_ax * cy_ay);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	//	formula and method are coming from here :
	//	https://www.youtube.com/watch?v=HYAgJN3x4GA
	
	Fixed	w1;
	Fixed	w2;

	w1 = get_w1_numerator(a, c, point) / get_w1_denominator(a, b, c);
	w2 = (((point.get_y() - a.get_y()) - w1 * (b.get_y() - a.get_y())) / (c.get_y() - a.get_y()));

//	std::cout << "numerator : " << get_w1_numerator(a, c, point) << std::endl;
//	std::cout << "denominator : " << get_w1_denominator(a, b, c) << std::endl;

//	std::cout << "w1 : " << w1 << std::endl;
//	std::cout << "w2 : " << w2 << std::endl;

	return (w1 > 0 && w2 > 0 && (w1 + w2) < 1);
}
