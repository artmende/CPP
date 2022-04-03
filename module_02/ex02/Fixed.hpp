/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:54:35 by artmende          #+#    #+#             */
/*   Updated: 2022/04/03 11:06:02 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int			_value;
	int const	_nbr_of_fract_bits;
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
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif
