/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2023/12/27 17:30:56 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <ctime>

class BitcoinExchange
{
private:
	/* data */
public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const & src);
	virtual ~BitcoinExchange();

	BitcoinExchange &	operator=(BitcoinExchange const & rhs);
};

#endif
