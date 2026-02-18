/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:04:52 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/18 10:33:56 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template<typename T>
void	plusOne(T& t)
{
	t += 1;
}

void	plusOne(std::string& t)
{
	t += "1";
}

template<typename T>
void	print(const T& t)
{
	std::cout << "'" << t << "' ";
}

int main()
{ 
	int			arrI[3] = {2, 9, 14};
	char		arrC[4] = {'b', 'o', 'o', 'm'};
	std::string	arrS[2] = {"hello", "world"};

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

	const int			cArrI[3] = {63, 11, 83};
	const char			cArrC[4] = {'y', 'o', 'p', '!'};
	const std::string	cArrS[2] = {"potato", "banana"};

	iter(cArrI, 3, print);
	std::cout << std::endl;
	iter(cArrC, 4, print);
	std::cout << std::endl;
	iter(cArrS, 2, print);
	std::cout << std::endl;

	return (0);
}
