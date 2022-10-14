/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:31:15 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/14 11:29:13 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed	Fixed::operator+(const Fixed &a)
{
	std::cout << "my name is karim\n";
	Fixed	b(a.getRawBits() + this->store);
	//Fixed	&c = b;
	return (b);
}

Fixed	&Fixed::operator-(const Fixed &a)
{
	Fixed	b(this->store - a.getRawBits());
	Fixed	&c = b;
	return (c);
}

Fixed	&Fixed::operator*(const Fixed &a)
{
	Fixed	b(this->store * a.getRawBits());
	Fixed	&c = b;
	return (c);
}

Fixed	&Fixed::operator/(const Fixed &a)
{
	Fixed	b(this->store / a.getRawBits());
	Fixed	&c = b;
	return (c);
}

bool	Fixed::operator>(const Fixed &a)
{
	if (this->getRawBits() > a.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &a)
{
	if (this->getRawBits() < a.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &a)
{
	if (this->getRawBits() <= a.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &a)
{
	if (this->getRawBits() >= a.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &a)
{
	if (this->getRawBits() == a.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &a)
{
	if (this->getRawBits() != a.getRawBits())
		return (true);
	return (false);
}