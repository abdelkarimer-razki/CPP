/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:46:58 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/17 13:28:49 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &a);
		Animal &operator=(Animal const &a);
		virtual void	makeSound() const;
		std::string	getType() const;
};
#endif