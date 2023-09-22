/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:23:23 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/22 12:34:19 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <iomanip>
#include <ctime>
#include <cstdlib>

template<typename T>
class Array
{
	public :
		Array() : _data(""), _size(0) {}
		Array(unsigned int n) : _data(new T[n]), _size(n) {}
		Array(Array<T> const& other) : _data(NULL), _size(0) { *this = other; }
		~Array() {delete [] _data;}

		int size(void) const {return (this->_size);}

		Array<T> const& operator=(Array<T> const& other)
		{
			if (_size > 0)
				delete [] _data;
			_size = other.size();
			_data = new T[_size];
			for (int i = 0; i < _size; i++)
				_data[i] = other._data[i];
			return(*this);
		}

		class OutofRangeIndex : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Index out of range");
				}
		};

		T& operator[](const int index) const
		{
			if (index < 0 || index >= _size)
				throw OutofRangeIndex();
			return (_data[index]);
		}

	private :
		T* _data;
		int	_size;
};

template<typename T> std::ostream	&operator<<(std::ostream &o, const Array<T> &other)
{
	o << "[" << other.size() << "] ";
	for (int i = 0; i < other.size(); i++)
		o << other[i] << " ";
	o << std::endl;
	return (o);
}

#endif