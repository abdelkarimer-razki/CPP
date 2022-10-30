/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:11:26 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/30 13:02:25 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		std::vector<int> a;
		a.push_back(16);
		a.push_back(1);
		a.push_back(1);
		a.push_back(2);
		a.push_back(3);
		a.push_back(4);
		a.push_back(5);
		a.push_back(15);
		a.push_back(11);
		a.push_back(10);
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		Span d(10);
		d.addSpan(a.begin(), a.end());
		
		std::cout << d.shortestSpan() << std::endl;
		std::cout << d.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::vector<int> test;
		int i = -1;
		while (++i < 50000)
			test.push_back(i);
		Span test_2(50000);
		test_2.addSpan(test.begin(), test.end());
		std::cout << test_2.shortestSpan() << std::endl;
		std::cout << test_2.longestSpan() << std::endl;
			
	}
	catch(const std::exception& e)
	{
		std::cerr << "you've tried to add numbers more than the given size" << '\n';
	}
	
}