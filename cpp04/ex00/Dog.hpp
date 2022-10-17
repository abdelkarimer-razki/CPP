/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:49:24 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/17 11:28:48 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog:public Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog const &a);
		Dog	&operator=(Dog const &a);
		void	makeSound() const;
};
#endif