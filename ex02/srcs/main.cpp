/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:07:51 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/22 12:33:39 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

void testint(void)
{
	Array<int> numbers(10);

	for (int i = 0; i < 10; i++)
		numbers[i] = std::rand() % 1000;

	Array<int> copy(numbers);

	std::cout << "Numbers: " << numbers << std::endl;
	std::cout << "Copy: " << copy << std::endl;

}

void testchar(void)
{
	Array<char> character(10);
	std::string string = "qwertyuiopasdfghjklzxcvbnm";

	for (int i = 0; i < 10; i++)
		character[i] = string[std::rand() % 26];

	Array<char> copy(character);

	std::cout << "Character: " << character << std::endl;
	std::cout << "Copy: " << copy << std::endl;

}

std::string randomstring(int size)
{
	std::string string = "qwertyuiopasdfghjklzxcvbnm";
	std::string rdmstr = "";

	for (int i = 0; i < size; i++)
		rdmstr = rdmstr + string[std::rand() % 26];
	return (rdmstr);
}

void teststr(void)
{
	Array<std::string> chaine(10);

	for (int i = 0; i < 10; i++)
		chaine[i] = randomstring(5);

	Array<std::string> copy(chaine);

	std::cout << "Character: " << chaine << std::endl;
	std::cout << "Copy: " << copy << std::endl;

}

int main(void)
{
	srand(time(NULL));
	testchar();
	std::cout << "---------------" << std::endl;
	testint();
	std::cout << "---------------" << std::endl;
	teststr();
}