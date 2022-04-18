/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:55:02 by artmende          #+#    #+#             */
/*   Updated: 2022/04/18 15:27:16 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string			_name;
	unsigned int		_hit_points;
	unsigned int		_energy_points;
	unsigned int		_attack_damage;
	std::string const	_type;

	std::string		get_name() const;
	unsigned int	get_hit_points() const;
	unsigned int	get_energy_points() const;
	unsigned int	get_attack_damage() const;
	std::string		get_type() const;

	void			set_name(std::string name);
	void			set_hit_points(unsigned int amount);
	void			set_energy_points(unsigned int amount);
	void			set_attack_damage(unsigned int	amount);

	ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage, std::string type);
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();

	ClapTrap &	operator=(ClapTrap const & rhs);

	void	attack(std::string const & target);
	void 	takeDamage(unsigned int amount);
	void 	beRepaired(unsigned int amount);
};

#endif
