/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/05/18 11:26:41 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array::Array()
{}

template<typename T>
Array::Array(Array const & src)
{
	*this = src;
}

template<typename T>
Array::~Array()
{}

template<typename T>
Array &	Array::operator=(Array const & rhs)
{
	if (this != &rhs)
	{
		
	}
	return (*this);
}
