/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:39:27 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/23 18:47:20 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& cpy);
		Array&		operator=(const Array& cpy);
		T&			operator[](unsigned int idx) const;
		~Array();

		unsigned int	size() const;

	private:
		unsigned int	m_size;
		T*				m_data;	
};

#include "Array.tpp"

#endif
