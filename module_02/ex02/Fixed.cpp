/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:55:46 by artmende          #+#    #+#             */
/*   Updated: 2022/04/04 09:43:15 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

////////////////////	Constructors / Destructors	////////////////////
Fixed::Fixed() : _nbr_of_fract_bits(8)
{
	this->setRawBits(0);
}

Fixed::Fixed(Fixed const & src) : _nbr_of_fract_bits(8)
{
	this->setRawBits(src.getRawBits());
}

Fixed::Fixed(int const i) : _nbr_of_fract_bits(8)
{
	this->setRawBits(i << this->_nbr_of_fract_bits);
	// bit shifting to add 0 to the right. because i is an integer, nothing after the point
}

Fixed::Fixed(float const f) : _nbr_of_fract_bits(8)
{
	this->setRawBits(roundf(f * (1 << this->_nbr_of_fract_bits)));
	// Multiply the float by 2 to the power of _nbr_of_fract_bits
	// then store as int
}

Fixed::~Fixed()
{}


////////////////////	Operator overload	////////////////////

// It is assumed that _nbr_of_fract_bits is the same for all instances of Fixed

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->setRawBits(rhs.getRawBits());
	return (*this);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (!(*this == rhs));
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (*this == rhs || *this > rhs);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (*this == rhs || *this < rhs);
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed	ret;

	ret.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed	ret;

	ret.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed	ret;

	ret.setRawBits((this->getRawBits() * rhs.getRawBits()) >> this->_nbr_of_fract_bits);
	return (ret);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	ret(this->toFloat() / rhs.toFloat());

//	ret.setRawBits((this->getRawBits() / rhs.getRawBits()) << this->_nbr_of_fract_bits);
	return (ret);
}

Fixed &	Fixed::operator++() // ++nbr;
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int) // nbr++;
{
	Fixed	temp;
	temp = *this;
	++(*this);
	return (temp);
}

Fixed &	Fixed::operator--() // --nbr;
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int) // nbr--;
{
	Fixed	temp;
	temp = *this;
	--(*this);
	return (temp);
}

////////////////////	Member functions	////////////////////
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

////////////////////	non-Member (static) functions	////////////////////
const Fixed &	Fixed::min(const Fixed & a, const Fixed & b)
{
	return (a > b ? b : a);
}

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	return (a > b ? b : a);
}

const Fixed &	Fixed::max(const Fixed & a, const Fixed & b)
{
	return (a < b ? b : a);
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
	return (a < b ? b : a);
}

////////////////////	Other stuff outside of the class	////////////////////
std::ostream &	operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
