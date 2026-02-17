/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:04:52 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/17 17:16:51 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template<typename T>
void	plusOne(T& t)
{
	t = t + 1;
}

void	plusOne(std::string& t)
{
	t.append("1");
}

template<typename T>
void	print(T& t)
{
	std::cout << "'" << t << "' ";
}

int main()
{ 
	//? Normal arrays
	// int			arrI[3] = {2, 9, 14};
	// char		arrC[4] = {'b', 'o', 'o', 'm'};
	// std::string	arrS[2] = {"hello", "world"};

	//? Non complete arrays
	// int			arrI[3] = {2, 9};
	// char		arrC[4] = {'b', 'o', 'o'};
	// std::string	arrS[2] = {"hello"};

	//? 
	// int			arrI[3] = {2, 0, 9};
	// char		arrC[4] = {'b', 0,'o', 'o'};
	// std::string	arrS[2] = {0, "hello"};

	int			arrI[3];
	char		arrC[4];
	std::string	arrS[2];

	iter(arrI, 3, print);
	std::cout << std::endl;
	iter(arrC, 4, print);
	std::cout << std::endl;
	iter(arrS, 2, print);
	std::cout << std::endl;

	iter(arrI, 3, plusOne);
	iter(arrC, 4, plusOne);
	iter(arrS, 2, plusOne);

	iter(arrI, 3, print);
	std::cout << std::endl;
	iter(arrC, 4, print);
	std::cout << std::endl;
	iter(arrS, 2, print);
	std::cout << std::endl;
	return (0);
}
