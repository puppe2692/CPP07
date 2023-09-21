/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:23:23 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/21 16:44:50 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <iomanip>

template<typename T>
class Array
{
	public :
		Array() : _data(""), _size(0) {}
		Array(unsigned int n) : _data(new T[n]), _size(n) {}
		Array(Array<T> const& other) : _data(NULL), _size(0) { *this = other; }
		~Array() {delete [] _data}

		int getSize(void) {return (this->_size);}

		Array<T> const& operator=(Array<T> const& other)
		{
			if _size > 0
				delete [] _data;
			_size = array.getSize();
			_data = new T[_size];
			for (int i = 0; i < _size; i++)
				_data[i] = array._data[i];
		}

	private :
		T * _data;
		int	_size;
};

#endif