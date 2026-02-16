/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:04:58 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/16 16:10:35 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T* arr, const std::size_t len, void (*func)(const T&))
{
	if (!arr || !func)
		return ;
	
	for (std::size_t i ; i < len ; ++i)
		func(arr[i]);
}

#endif
