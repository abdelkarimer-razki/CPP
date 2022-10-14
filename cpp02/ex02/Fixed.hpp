/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:31:18 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/14 13:19:44 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					store;
		static const int	bits = 8;
	public:
		Fixed();   
		Fixed(Fixed const &a);
		Fixed(const int store);
		Fixed(const float store);
		~Fixed();
		Fixed	&operator=(const Fixed &a);
		bool	operator>(const Fixed &a);
		bool	operator<(const Fixed &a);
		bool	operator<=(const Fixed &a);
		bool	operator>=(const Fixed &a);
		bool	operator==(const Fixed &a);
		bool	operator!=(const Fixed &a);
		Fixed	&operator+(const Fixed &a);
		Fixed	&operator/(const Fixed &a);
		Fixed	&operator-(const Fixed &a);
		Fixed	&operator*(const Fixed &a);
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		float toFloat( void ) const;
		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed const &min(const Fixed &a, const Fixed &b);
		static Fixed const &max(const Fixed &a, const Fixed &b);
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
std::ostream	&operator<<(std::ostream &o, const Fixed &a);
#endif