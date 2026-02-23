/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:59:12 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/23 18:47:20 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : m_size(0), m_data(0)
{

}

template <typename T>
Array<T>::Array(unsigned int n) : m_size(n), m_data(new T[n]())
{

}

template <typename T>
Array<T>::Array(const Array& other) : m_size(0), m_data(new T[other.m_size]())
{
	for (unsigned int i = 0 ; i < other.m_size ; ++i)
		m_data[i] = other.m_data[i];
	m_size = other.m_size;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		m_size = 0;
		delete[] m_data;
		m_data = new T[other.m_size]();
		for (unsigned int i = 0 ; i < other.m_size ; ++i)
			m_data[i] = other.m_data[i];
		m_size = other.m_size;
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] m_data;
}

template <typename T>
T&	Array<T>::operator[](unsigned int idx) const
{
	if (idx >= m_size)
		throw std::out_of_range("Index out of range");
	return (m_data[idx]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (m_size);
}
