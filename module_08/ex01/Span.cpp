/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:37:43 by artmende          #+#    #+#             */
/*   Updated: 2022/05/24 09:53:17 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0)
{}

Span::Span(unsigned int n) : _n(n)
{}

Span::Span(Span const & src)
{
	*this = src;
}

Span::~Span()
{}

Span &	Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		this->_n = rhs._n;
		this->_v = rhs._v;
	}
	return (*this);
}

void	Span::addNumber(int nbr)
{
	if (this->_v.size() + 1 > this->_n)
		throw Span::TooManyNumbersException();
	this->_v.push_back(nbr);
}

int	Span::shortestSpan()
{
	if (this->_v.size() < 2)
		throw Span::NotEnoughNumbersForSpanException();
	std::sort(this->_v.begin(), this->_v.end());
	std::vector<int>::const_iterator	i, j;
	i = this->_v.begin();
	j = i;
	++j;
	int	shortest = std::max(*i, *j) - std::min(*i, *j);
	while (j != this->_v.end())
	{
		if ((std::max(*i, *j) - std::min(*i, *j)) < shortest)
			shortest = std::max(*i, *j) - std::min(*i, *j);
		++i;
		++j;
	}
	return (shortest);
}

int	Span::longestSpan() const
{
	if (this->_v.size() < 2)
		throw Span::NotEnoughNumbersForSpanException();
	return (*(std::max_element(this->_v.begin(), this->_v.end())) - *(std::min_element(this->_v.begin(), this->_v.end())));
}

const char*	Span::TooManyNumbersException::what() const throw()
{
	return ("Class Span is full !");
}

const char*	Span::NotEnoughNumbersForSpanException::what() const throw()
{
	return ("At least 2 numbers are required to calculate a span !");
}
