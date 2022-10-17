/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:08:28 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/17 12:12:34 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &a)
{
	this->type = a.type;
	return (*this);
}

WrongCat::WrongCat(WrongCat const &a)
{
	*this = a;
}

void	WrongCat::makeSound() const
{
	std::cout << "Cats bark" << std::endl;
}
