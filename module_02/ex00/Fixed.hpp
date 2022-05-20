/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:54:35 by artmende          #+#    #+#             */
/*   Updated: 2022/05/20 10:56:40 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_value;
	static int const	_nbr_of_fract_bits = 8;
public:
	Fixed();
	Fixed(Fixed const & src);
	~Fixed();

	Fixed &	operator=(Fixed const & rhs);

	int		getRawBits() const;
	void	setRawBits(int const raw);
};

#endif
