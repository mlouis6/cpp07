/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:04:58 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/18 10:34:32 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>
template<typename T>
void	iter(T* arr, const std::size_t len, void (*func)(T&))
{
	if (!arr || !func)
		return ;
	
	for (std::size_t i = 0 ; i < len ; ++i)
	{
		func(arr[i]);
	}
}

template<typename T>
void	iter(const T* arr, const std::size_t len, void (*func)(const T&))
{
	if (!arr || !func)
		return ;
	
	for (std::size_t i = 0 ; i < len ; ++i)
	{
		func(arr[i]);
	}
}

#endif
