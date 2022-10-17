/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:49:21 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/17 11:29:20 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Default constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

Dog	&Dog::operator=(Dog const &a)
{
	this->type = a.type;
	return (*this);
}

Dog::Dog(Dog const &a)
{
	*this = a;
}

void	Dog::makeSound() const
{
	std::cout << "Dog bark" << std::endl;
}
