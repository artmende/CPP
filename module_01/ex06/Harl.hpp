/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:33:54 by artmende          #+#    #+#             */
/*   Updated: 2022/05/19 11:25:11 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Harl
{
private:
	void	_debug(void) const;
	void	_info(void) const;
	void	_warning(void) const;
	void	_error(void) const;
public:
	Harl();
	~Harl();
	void	complain(std::string level) const;
};

#endif
