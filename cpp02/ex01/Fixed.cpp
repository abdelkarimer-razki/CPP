/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:38:19 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/25 11:27:38 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed():store(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
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
	std::cout << "Int constructor called" << std::endl;
	this->store = roundf(store * pow(2, bits));
}

Fixed::Fixed(const float store)
{
	std::cout << "Float constructor called" << std::endl;
	this->store = roundf(store * pow(2, bits));
}

std::ostream	&operator<<(std::ostream &o, const Fixed &a)
{
	o << a.toFloat();
	return (o);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;	
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
	std::cout << "Copy assignment operator called" << std::endl;
	this->store = a.getRawBits();
	return (*this);
}