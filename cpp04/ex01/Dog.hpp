/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:49:24 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/29 13:57:48 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
	private:
		Brain *dbrain;
	public:
		Dog();
		~Dog();
		Dog(Dog const &a);
		Dog	&operator=(Dog const &a);
		virtual void	makeSound() const;
};
#endif