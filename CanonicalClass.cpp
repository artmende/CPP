/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CanonicalClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/04/20 17:07:04 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "<classname>.hpp"

<classname>::<classname>()
{}

<classname>::<classname>(<classname> const & src)
{
	*this = src;
}

<classname>::~<classname>()
{}

<classname> &	<classname>::operator=(<classname> const & rhs)
{
	if (this != &rhs)
	{
		
	}
	return (*this);
}
