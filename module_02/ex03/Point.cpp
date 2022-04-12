/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:08:32 by artmende          #+#    #+#             */
/*   Updated: 2022/04/12 08:24:55 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{}

Point::Point(const float x, const float y) : _x(x), _y(y)
{}

Point::Point(const Point &src) : _x(src.get_x()), _y(src.get_y())
{}

Point::~Point()
{}

Point	&Point::operator=(const Point &rhs)
{
	return ((Point &)rhs);
}

Fixed	Point::get_x() const
{
	return (this->_x);
}

Fixed	Point::get_y() const
{
	return (this->_y);
}
