/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:37:16 by nwyseur           #+#    #+#             */
/*   Updated: 2023/09/21 15:54:16 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/whatever.hpp"

int mymain(void)
{
	int a = 21;
	int b = 42;

	std::cout << "Min: " << min<int>(a, b) << std::endl;
	std::cout << "Max: " << max<int>(a, b) << std::endl;
	std::cout << "A: " << a << " B: " << b << std::endl;
	swap(a, b);
	std::cout << "A: " << a << " B: " << b << std::endl;
	
	std::cout << "-----------------" << std::endl;

	double c = 21.1;
	double d = 42.2;

	std::cout << "Min: " << min<double>(c, d) << std::endl;
	std::cout << "Max: " << max<double>(c, d) << std::endl;
	std::cout << "A: " << c << " B: " << d << std::endl;
	swap(c, d);
	std::cout << "A: " << c << " B: " << d << std::endl;
	
	std::cout << "-----------------" << std::endl;

	float e = 21.1f;
	float f = 42.2f;

	std::cout << "Min: " << min<float>(e, f) << std::endl;
	std::cout << "Max: " << max<float>(e, f) << std::endl;
	std::cout << "A: " << e << " B: " << f << std::endl;
	swap(e, f);
	std::cout << "A: " << e << " B: " << f << std::endl;

	std::cout << "-----------------" << std::endl;

	char g = 'a';
	char h = 'b';

	std::cout << "Min: " << min<char>(g, h) << std::endl;
	std::cout << "Max: " << max<char>(g, h) << std::endl;
	std::cout << "A: " << g << " B: " << h << std::endl;
	swap(g, h);
	std::cout << "A: " << g << " B: " << h << std::endl;
	
	return (0);
}

int theremain(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

int main(void)
{
	mymain();
	std::cout << "///////////////////////////////" << std::endl;
	theremain();
	return (0);
}