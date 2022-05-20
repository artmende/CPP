/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:55:46 by artmende          #+#    #+#             */
/*   Updated: 2022/05/20 10:58:22 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(i << this->_nbr_of_fract_bits);
	// bit shifting to add 0 to the right. because i is an integer, nothing after the point
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(f * (1 << this->_nbr_of_fract_bits)));
	// Multiply the float by 2 to the power of _nbr_of_fract_bits
	// then store as int
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->setRawBits(rhs.getRawBits());
	return (*this);
}

int	Fixed::getRawBits() const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat() const
{
	return ((float)(this->getRawBits()) / (1 << this->_nbr_of_fract_bits));
}

int	Fixed::toInt() const
{
	return (this->getRawBits() >> this->_nbr_of_fract_bits);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
