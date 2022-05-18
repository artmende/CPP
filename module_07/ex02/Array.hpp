/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:02:25 by artmende          #+#    #+#             */
/*   Updated: 2022/05/18 15:04:05 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
private:
	T*				_values;
	unsigned int	_size;
public:
	Array() : _values(NULL), _size(0) {}
	Array(unsigned int size) : _size(size)
	{
		this->_values = new T[this->_size];
	}
	Array(Array const & src) : _size(src.size())
	{
		this->_values = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
		{
			this->_values[i] = src._values[i];
		}
	}
	virtual ~Array()
	{
		delete [] this->_values;
	}

	Array &	operator=(Array const & rhs)
	{
		if (this != &rhs)
		{
			delete [] this->_values;
			this->_size = rhs.size();
			this->_values = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
			{
				this->_values[i] = rhs._values[i];
			}
		}
		return (*this);
	}
	T &		operator[](int const index)
	{
		if (index < 0 || index >= static_cast<int>(this->_size))
		{
			throw Array::IndexOutOfBoundException();
		}
		return (this->_values[index]);
	}

	unsigned int	size() const
	{
		return (this->_size);
	}
	class IndexOutOfBoundException : public std::exception
	{
		public:
		virtual const char*	what() const throw()
		{
			return ("Index is out of bound");
		}
	};
};

#endif
