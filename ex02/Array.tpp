/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:59:12 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/18 13:57:31 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	this = new Array[];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this = new Array[n];
}

template <typename T>
Array<T>::Array(const Array& cpy)
{

}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& cpy)
{

}

template <typename T>
Array<T>::~Array()
{

}

