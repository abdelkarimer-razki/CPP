/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 09:55:43 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/29 11:00:22 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
int main()
{
	try
	{
		std::vector<int>a;
		a.push_back(10);
		a.push_back(20);
		a.push_back(30);
		a.push_back(40);
		easyfind(a, 80);
	}
	catch (std::exception &e)
	{
		std::cout << "Not found.\n";
	}
	return (0);
}