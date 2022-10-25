/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:25:20 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/25 11:14:13 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
int main()
{
	// unsigned int c = 5;
	Array<int> a(5);
	try
	{
		a[4] = 8;
		std::cout << a[4];
		std::cout << a[10];
	}catch(std::exception &e)
	{
		std::cout << "index is bigger than size\n";
	}
}