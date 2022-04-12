/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:08:36 by artmende          #+#    #+#             */
/*   Updated: 2022/04/12 08:06:25 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;

	Point	&operator=(const Point &rhs);
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &src);
	~Point();

	Fixed	get_x() const;
	Fixed	get_y() const;
};

#endif
