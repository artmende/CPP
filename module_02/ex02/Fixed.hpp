/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:54:35 by artmende          #+#    #+#             */
/*   Updated: 2022/05/20 11:00:51 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_value;
	static int const	_nbr_of_fract_bits = 8;
public:
	Fixed();
	Fixed(Fixed const & src);
	Fixed(int const i);
	Fixed(float const f);
	~Fixed();

	Fixed &	operator=(Fixed const & rhs);

	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;
	bool	operator>(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;

	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;

	Fixed &	operator++(); // ++nbr;
	Fixed	operator++(int); // nbr++;
	Fixed &	operator--(); // --nbr;
	Fixed	operator--(int); // nbr--;

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

	static const Fixed &	min(const Fixed & a, const Fixed & b);
	static Fixed &	min(Fixed & a, Fixed & b);
	static const Fixed &	max(const Fixed & a, const Fixed & b);
	static Fixed &	max(Fixed & a, Fixed & b);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif
