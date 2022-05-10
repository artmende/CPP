/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/05/10 15:44:11 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

Number::Number() : _doubleValue(0)
{}

Number::Number(std::string str) : _doubleValue(Number::strToDouble(str))
{}

Number::Number(Number const & src) : _doubleValue(src._doubleValue)
{}

Number::~Number()
{}

Number &	Number::operator=(Number const & rhs)
{
	(void)rhs;
	return (*this);
}

double	Number::strToDouble(std::string str)
{
	if (str.compare(0, 4, "+inf") == 0)
		return (std::numeric_limits<double>::infinity());
	else if (str.compare(0, 4, "-inf") == 0)
		return(-1 * std::numeric_limits<double>::infinity());
	else if (str.compare(0, 3, "nan") == 0)
		return (std::numeric_limits<double>::quiet_NaN());
	else
	{
		std::stringstream	sDouble(str);
		std::stringstream	sChar(str);
		double				d;
		char				c;
		sDouble >> d;
		sChar >> c;
		if (d == 0 && c != 0 && str.compare(0, 2, "-0") != 0 && str.compare(0, 1, "0") != 0)
			return (static_cast<double>(c));
		else
			return (d);
	}
}

double	Number::getDoubleValue() const
{
	return (this->_doubleValue);
}

std::ostream &	operator<<(std::ostream & o, Number const & i)
{
	double	doubleValue = i.getDoubleValue();

	o << "char: ";
	if (static_cast<char>(doubleValue) >= ' ' && static_cast<char>(doubleValue) <= '~')
		o << "'" << static_cast<char>(doubleValue) << "'" << std::endl;
	else if (static_cast<int>(doubleValue) >= 0 && static_cast<char>(doubleValue) < ' ')
		o << "Non displayable" << std::endl;
	else
		o << "impossible" << std::endl;
	o << "int: ";
	if (doubleValue <= static_cast<double>(std::numeric_limits<int>::max()) && doubleValue >= static_cast<double>(std::numeric_limits<int>::min()))
		o << static_cast<int>(i.getDoubleValue()) << std::endl;
	else
		o << "impossible" << std::endl;
	o << "float: " << std::showpoint << static_cast<float>(i.getDoubleValue()) << "f" << std::endl;
	o << "double: " << std::showpoint << i.getDoubleValue();
	return (o);
}
