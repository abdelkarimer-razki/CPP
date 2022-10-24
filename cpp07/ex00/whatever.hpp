/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:17:39 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/24 16:56:54 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <fstream>


class Awesome
{
public:
Awesome(void) : _n(0) {}
Awesome(int n):_n(n) {}
Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
bool operator==( Awesome const & rhs ) const { return (this->_n ==rhs._n); }
bool operator!=( Awesome const & rhs ) const{ return (this->_n !=rhs._n); }
bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
bool operator<( Awesome const & rhs ) const { return (this->_n <rhs._n); }
bool operator>=( Awesome const & rhs ) const { return (this->_n >=rhs._n); }
bool operator<=( Awesome const & rhs ) const { return (this->_n <=rhs._n); }
int get_n() const { return _n; }
private:
int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

template< typename T > void swap(T &a, T &b)
{
	T *c = &a;
	T *d = &b;
	T e = *c;
	*c = *d;
	*d = e; 
}

template< typename T > T max(T &a, T &b)
{
	if (a <= b)
		return (b);
	return (a); 
}

template< typename T > T min(T &a, T &b)
{
	if (a >= b)
		return (b);
	return (a); 
}

#endif