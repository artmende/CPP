/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CanonicalClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/05/03 15:38:35 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef <classname_upper>_HPP
# define <classname_upper>_HPP

# include <iostream>

class <classname>
{
private:
	/* data */
public:
	<classname>();
	<classname>(<classname> const & src);
	virtual ~<classname>();

	<classname> &	operator=(<classname> const & rhs);
};

#endif
