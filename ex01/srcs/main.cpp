/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:11:56 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/21 16:18:47 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

int	main(void)
{
	int			arrayInt[5] = {0, 1, 2, 3, 4};
	std::string	arrayStr[5] = {"Johnny", "Cleg", "and", "the 4th", "Burnes"};
	const char	*arrayStrC[5] = {"Jacky", "Moon", "and", "Yolanda", "Brown"};
	char		arrayChar[5] = {'b', 'r', 'a', 'v', 'o'};

	iter<int>(arrayInt, 5, printArray);
	std::cout << std::endl;
	iter<int>(arrayInt, 2, printArray);
	std::cout << std::endl;

	iter<std::string>(arrayStr, 5, printArray);
	std::cout << std::endl;

	iter<const char *>(arrayStrC, 5, printArray);
	std::cout << std::endl;

	iter<char>(arrayChar, 5, printArray);
	std::cout << std::endl;

	return (0);
}