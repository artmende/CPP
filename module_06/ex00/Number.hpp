/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/05/10 14:57:28 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_HPP
# define NUMBER_HPP

# include <iostream>
# include <sstream>
# include <limits>

class Number
{
private:
	double const	_doubleValue;
	Number();
public:
	Number(std::string str);
	Number(Number const & src);
	virtual ~Number();

	Number &	operator=(Number const & rhs);

	static double	strToDouble(std::string str);
	double			getDoubleValue() const;
};

std::ostream &	operator<<(std::ostream & o, Number const & i);

#endif
