/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:52:25 by artmende          #+#    #+#             */
/*   Updated: 2022/03/21 06:32:40 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "phonebook.main.hpp"

class Phonebook
{
private:
	Contact	_contact_array[8];
	int		_nbr_of_contact;
public:
	Phonebook(void);
	~Phonebook(void);
	void	add_contact(void);
	void	search(void) const;
	void	look_up_contact(void) const;
};

#endif
