/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:11:23 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/30 12:49:25 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

class Span
{
	private:
		unsigned int		N;
		std::vector<int>	a;
	public:
		Span();
		Span(unsigned int N);
		~Span();
		void	addNumber(int i);
		void	addSpan(std::vector<int>::iterator _1begin, std::vector<int>::iterator _1end);
		int		shortestSpan() const;
		int		longestSpan() const;
		
};
#endif