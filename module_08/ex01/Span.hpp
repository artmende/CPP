/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/05/23 18:46:02 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <set>

class Span
{
private:
	unsigned int		_n;
	std::multiset<int>	_v;
	Span();
public:
	Span(unsigned int n);
	Span(Span const & src);
	virtual ~Span();

	Span &	operator=(Span const & rhs);

	void	addNumber(int nbr);
	int		shortestSpan() const;
	int		longestSpan() const;

	class TooManyNumbersException : public std::exception
	{
		public:
		virtual const char*	what() const throw();
	};
	class NotEnoughNumbersForSpanException : public std::exception
	{
		public:
		virtual const char*	what() const throw();
	};
};

#endif
