/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:25:18 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/25 10:24:26 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <stdlib.h>
#include <iostream>
#include <string>
template <typename T>
class Array
{
	private:
		T *array;
		int	n;
	public:
		Array():n(0)
		{
			this->array = new T[0];
		};
		~Array(){};
		Array(unsigned int n):n(n)
		{
			this->array = new T[n];
		};
		Array(Array const &a)
		{
			*this = a;
		};
		Array &operator=(const Array &a)
		{
			this->array = a.array;
		};
		T &operator[](unsigned int i)
		{
			if (i > size())
				throw std::exception();
			return (this->array[i]);
		};
		unsigned int size()
		{
			return (this->n);
		};
};

#endif