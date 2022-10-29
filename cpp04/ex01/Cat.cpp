/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:49:18 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/29 13:51:29 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor" << std::endl;
	this->type = "Cat";
	this->cbrain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete (cbrain);
}

Cat	&Cat::operator=(Cat const &a)
{
	this->type = a.type;
	delete (cbrain);
	this->cbrain = new Brain();
	*(this->cbrain) = *(a.cbrain);
	return (*this);
}

Cat::Cat(Cat const &a)
{
	std::cout << "Cat copy constructor\n";
	this->type = a.type;
	this->cbrain = new Brain();
	*(this->cbrain) = *(a.cbrain);
}

void	Cat::makeSound() const
{
	std::cout << "Cats purr" << std::endl;
}
