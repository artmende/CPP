/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:54:35 by artmende          #+#    #+#             */
/*   Updated: 2022/03/30 12:19:41 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int			_value;
	int const	_nbr_of_fract_bits;
public:
	Fixed();
	Fixed(Fixed const & src);
	~Fixed();

	Fixed &	operator=(Fixed const & rhs);

	int		getRawBits() const;
	void	setRawBits(int const raw);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif
