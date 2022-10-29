/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 09:55:40 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/29 10:49:55 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

template<typename T> void easyfind(T &a, int b)
{
	typename T::iterator it = std::find(a.begin(), a.end(), b);
	if (it != a.end())
		std::cout << "Found!\n";
	else
		throw std::exception();
}

#endif