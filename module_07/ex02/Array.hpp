/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/05/18 11:22:08 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
private:
	T*				_values;
	unsigned int	_size;
public:
	Array();
	Array(unsigned int size);
	Array(Array const & src);
	virtual ~Array();

	Array &	operator=(Array const & rhs);
	T &		operator[](Array const & rhs);

	unsigned int	size() const;
};

#endif
