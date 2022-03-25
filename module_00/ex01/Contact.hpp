/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:54:58 by artmende          #+#    #+#             */
/*   Updated: 2022/03/25 13:14:35 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
public :
	Contact(void);
	~Contact(void);
	void		set_contact_infos(void);
	std::string	get_first_name(void) const;
	std::string	get_first_name_truncated(void) const;
	std::string	get_last_name(void) const;
	std::string	get_last_name_truncated(void) const;
	std::string	get_nickname(void) const;
	std::string	get_nickname_truncated(void) const;
	std::string	get_phone_number(void) const;
	std::string	get_darkest_secret(void) const;
private :
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
