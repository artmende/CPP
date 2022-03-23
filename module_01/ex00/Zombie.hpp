/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:05:07 by artmende          #+#    #+#             */
/*   Updated: 2022/03/23 13:33:22 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void) const;
private:
	std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
