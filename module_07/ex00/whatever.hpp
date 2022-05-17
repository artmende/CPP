/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:12:28 by artmende          #+#    #+#             */
/*   Updated: 2022/05/17 16:18:17 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void	swap(T & x, T & y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

template<typename T>
T	min(T const & x, T const & y)
{
	return (x < y ? x : y);
}

template<typename T>
T	max(T const & x, T const & y)
{
	return (x > y ? x : y);
}

#endif
