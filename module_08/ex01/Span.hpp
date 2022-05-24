/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/05/24 11:07:19 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:
	unsigned int		_n;
	std::vector<int>	_v;
	Span();
public:
	Span(unsigned int n);
	Span(Span const & src);
	virtual ~Span();

	Span &	operator=(Span const & rhs);

	void	addNumber(int nbr);
	int		shortestSpan();
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

	template <typename T>
	void	addRangeOfNumbers(typename T::const_iterator begin, typename T::const_iterator end)
	{
		std::vector<int>	temp;

		temp.insert(temp.begin(), begin, end);
		if (temp.size() + this->_v.size() > this->_n)
			throw Span::TooManyNumbersException();
		this->_v.insert(this->_v.end(), begin, end);
	}
	std::vector<int> &	get_raw_vector()
	{
		return (this->_v);
	}
};

#endif
