/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:55:46 by artmende          #+#    #+#             */
/*   Updated: 2022/04/01 12:09:02 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nbr_of_fract_bits(8)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed const & src) : _nbr_of_fract_bits(8)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = src.getRawBits();
}

Fixed::Fixed(int const i) : _nbr_of_fract_bits(8)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << this->_nbr_of_fract_bits;
}

Fixed::Fixed(float const f) : _nbr_of_fract_bits(8)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)roundf(f * (1 << this->_nbr_of_fract_bits));
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
		this->_value = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i)
{
	o << i.getRawBits();
	return (o);
	// probably need to change that.
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

