/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialisation.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:50:30 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 11:56:32 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialisation.hpp"

uintptr_t	Data::serialize(Data* ptr)
{
	uintptr_t a = reinterpret_cast<uintptr_t>(ptr);
	return (a);
}

Data*	Data::deserialize(uintptr_t raw)
{
	Data *a = reinterpret_cast<Data*>(raw);
	return (a);
}

Data::~Data()
{
	std::cout << "Data Destructor\n";
}

Data::Data()
{
	std::cout << "Data Constructor\n";
}

Data::Data(Data const &a)
{
	*this = a;
}

Data	&Data::operator=(Data const &a)
{
	this->age = a.age;
	this->name = a.name;
	return (*this);
}

Data::Data(std::string name, int age):name(name), age(age)
{
	
}