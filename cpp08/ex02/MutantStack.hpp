/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:52:57 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/01 13:55:23 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <fstream>
#include <algorithm>


template <typename T, typename myc = std::deque<T> >
class MutantStack: public std::stack<T, myc >
{
	public:
		typedef typename std::stack<T, myc>::container_type::iterator iterator;
		iterator begin()
		{
			return	(this->c.begin());
		};
		iterator end()
		{
			return	(this->c.end());
		};
		MutantStack()
		{};
		~MutantStack(){};
};

#endif