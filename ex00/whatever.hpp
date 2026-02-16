/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:54:22 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/16 16:03:10 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T& x, T& y)
{
	T z;

	z = x;
	x = y;
	y = z;
}

template<typename T>
const T&	min(const T& x, const T& y)
{
	return ( x < y ? x : y);
}

template<typename T>
const T&	max(const T& x, const T& y)
{
	return ( x > y ? x : y);
}

#endif
