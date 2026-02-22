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
Array<T>::Array() : _size(0), _data(new T[0])
{

}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _data(new T[n])
{

}

template <typename T>
Array<T>::Array(const Array& other)
{
	_size = other._size;
	_data = new T[other._size];
	for (unsigned int i = 0 ; i < _size ; ++i)
		_data[i] = other._data[i];
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		_size = other._size;
		delete[] _data;
		_data = new T[other._size];
		for (unsigned int i = 0 ; i < _size ; ++i)
			_data[i] = other._data[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}
