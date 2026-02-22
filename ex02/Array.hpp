/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:39:27 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/22 10:51:21 by mlouis           ###   ########.fr       */
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
		Array&	operator=(const Array& cpy);
		T&		operator[](unsigned int idx) const;
		~Array();

		unsigned int	size() const;
	private:
		unsigned int	_size;
		T*				_data;
	
};

#include "Array.tpp"

#endif
