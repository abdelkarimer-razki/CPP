/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:11:25 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/30 12:59:25 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N):N(N)
{
	std::cout << "Parametrized constructor\n";
}

Span::Span():N(0)
{
	std::cout << "Default constructor\n";
}

Span::~Span()
{
	std::cout << "Destructor\n";
}

void	Span::addNumber(int i)
{
	if (a.size() < N)
		a.push_back(i);
	else
		throw std::exception();
}

void	Span::addSpan(std::vector<int>::iterator _1begin, std::vector<int>::iterator _1end)
{
	while (_1begin < _1end)
	{
		addNumber(*_1begin);
		_1begin++;
	}
}

int		Span::shortestSpan() const
{
	std::vector<int> b(a.size());
	std::copy(a.begin(), a.end(), b.begin());
	std::sort(b.begin(), b.end());

	std::vector<int>::iterator _begin = b.begin();
	std::vector<int>::iterator _end = b.end();
	int shorts = *(_end - 1);
	while (_begin < _end)
	{
		if (_begin + 1 < _end && abs(*_begin - *(_begin + 1)) < shorts)
			shorts = abs(*_begin - *(_begin + 1));
		_begin++;
	}
	if (b.size() >= 2)
		return (shorts);
	throw (std::exception());
}

int		Span::longestSpan() const
{
	std::vector<int> b(a.size());

	std::copy(a.begin(), a.end(), b.begin());
	std::sort(b.begin(), b.end());
	if (b.size() >= 2)
		return abs(*(b.end() - 1) - *b.begin());
	throw (std::exception());
}