/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 12:36:33 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/23 18:41:17 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>
#include <stdlib.h>
#include <ctime>
#include <iomanip>

#define MAX_VAL 7
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	std::cout << "numbers size= " << numbers.size() << std::endl;
	std::cout << numbers[0] << std::endl;
	std::cout << std::endl;
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	Array<int> tmp = numbers;
	numbers[5] = 5;
	tmp[6] = 6;
	Array<int> test(tmp);
	test[0] = 0;
	tmp[6] = 66;

	std::cout << "(i) ";
	std::cout << std::setw(14) << std::right
			<< "MIRROR";
	std::cout << std::setw(17) << std::right
			<< "NUMBERS";
	std::cout << std::setw(17) << std::right
			<< "TMP";
	std::cout << std::setw(17) << std::right
			<< "TEST" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "(" << i << ") ";
		std::cout << std::setw(14) << std::right
				<< mirror[i] << " ; ";
		std::cout << std::setw(14) << std::right
				<< numbers[i] << " ; ";
		std::cout << std::setw(14) << std::right
				<< tmp[i] << " ; ";
		std::cout << std::setw(14) << std::right
        		<< test[i] << std::endl;
    }

	std::cout << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}

	std::cout << std::endl;
	const Array<int> cTest(numbers);
	cTest[0] = 4;
	try
	{
		std::cout << "cTest[0]= " << cTest[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	Array<int>  nothing;
	std::cout << "nothing size= " << nothing.size() << std::endl;
	try
	{
		std::cout << "nothing[0]= " << nothing[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    
	delete [] mirror;
	return 0;
}