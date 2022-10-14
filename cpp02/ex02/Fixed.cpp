/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:31:15 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/14 13:19:51 by aer-razk         ###   ########.fr       */
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

Fixed const	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed const	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::operator+(const Fixed &a)
{
	this->setRawBits(this->getRawBits() + a.getRawBits());
	this->setRawBits(this->toFloat());
	return (*this);
}

Fixed	&Fixed::operator-(const Fixed &a)
{
	this->setRawBits(this->getRawBits() - a.getRawBits());
	this->setRawBits(this->toFloat());
	return (*this);
}

Fixed	&Fixed::operator*(const Fixed &a)
{
	this->setRawBits(this->getRawBits() * a.getRawBits());
	this->setRawBits(this->toFloat());
	return (*this);
}

Fixed	&Fixed::operator/(const Fixed &a)
{
	this->setRawBits(this->getRawBits() / a.getRawBits());
	this->setRawBits(this->toFloat());
	return (*this);
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

Fixed	&Fixed::operator++()
{
	setRawBits(Fixed(0.00390625f).getRawBits() + getRawBits());
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	setRawBits(Fixed(0.00390625f).getRawBits() + getRawBits());
	return (tmp);
}
Fixed	&Fixed::operator--()
{
	setRawBits(Fixed(0.00390625f).getRawBits() - getRawBits());
	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	setRawBits(Fixed(0.00390625f).getRawBits() - getRawBits());
	return (tmp);
}

//ex01

Fixed::Fixed():store(0)
{
}

Fixed::Fixed(const Fixed &a)
{
	*this = a;
}

float Fixed::toFloat( void ) const
{
	return (this->store / pow(2, bits));
}

int Fixed::toInt( void ) const
{
	return (this->store / pow(2, bits));
}

Fixed::Fixed(const int store)
{
	this->store = roundf(store * pow(2, bits));
}

Fixed::Fixed(const float store)
{
	this->store = roundf(store * pow(2, bits));
}

std::ostream	&operator<<(std::ostream &o, const Fixed &a)
{
	o << a.toFloat();
	return (o);
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits(void) const
{
	return (this->store);
}

void	Fixed::setRawBits(int const raw)
{
	this->store = raw;
}

Fixed	&Fixed::operator=(const Fixed &a)
{
	this->store = a.getRawBits();
	return (*this);
}