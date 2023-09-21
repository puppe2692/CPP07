/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:26:54 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/21 15:46:00 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>
# include <iomanip>

template<typename T>
void swap(T& a, T&b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
	return;
}

template<typename T>
T const& min(T const& a, T const&b)
{
	if (a == b)
		return (b);
	else if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T const& max(T const& a, T const&b)
{
	if (a == b)
		return (b);
	else if (a > b)
		return (a);
	else
		return (b);
}

#endif