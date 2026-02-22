/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:39:27 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/18 13:54:53 by mlouis           ###   ########.fr       */
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
		Array&	operator[](const int size);
		~Array();
	private:
		T*				_data;
		unsigned int	_size;
	
};

#endif
