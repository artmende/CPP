/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:55:46 by artmende          #+#    #+#             */
/*   Updated: 2022/04/01 12:54:34 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nbr_of_fract_bits(8)
{
	std::cout << "Default constructor called" << std::endl;
//	this->_value = 0;
	this->setRawBits(0);
}

Fixed::Fixed(Fixed const & src) : _nbr_of_fract_bits(8)
{
	std::cout << "Copy constructor called" << std::endl;
//	this->_value = src.getRawBits();
	this->setRawBits(src.getRawBits());
}

Fixed::Fixed(int const i) : _nbr_of_fract_bits(8)
{
	std::cout << "Int constructor called" << std::endl;
//	this->_value = i << this->_nbr_of_fract_bits;
	this->setRawBits(i << this->_nbr_of_fract_bits);
	// bit shifting to add 0 to the right. because i is an integer, nothing after the point
}

Fixed::Fixed(float const f) : _nbr_of_fract_bits(8)
{
	std::cout << "Float constructor called" << std::endl;
//	this->_value = (int)roundf(f * (1 << this->_nbr_of_fract_bits));
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
//		this->_value = rhs.getRawBits();
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



/* 

$> ./a.out
Default constructor called
Copy constructor called
Copy assignment operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Copy assignment operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
$>
 */

