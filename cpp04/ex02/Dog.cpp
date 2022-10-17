/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:49:21 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/17 13:46:10 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor" << std::endl;
	this->type = "Dog";
	this->dbrain = new Brain();
}

Dog::~Dog()
{
	delete (dbrain);
	std::cout << "Dog Destructor" << std::endl;
}

Dog	&Dog::operator=(Dog const &a)
{
	this->type = a.type;
	delete (dbrain);
	this->dbrain = new Brain();
	*(this->dbrain) = *(a.dbrain); 
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
