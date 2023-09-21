/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:00:35 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/21 16:15:09 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>
# include <iomanip>

template<typename T>
void iter(T *array, int size, void function(T const&))
{
	for (int i = 0; i < size; i++)
		function(array[i]);
}

template<typename T>
void printArray(T const& element)
{
	std::cout << element << std::endl;
}

#endif