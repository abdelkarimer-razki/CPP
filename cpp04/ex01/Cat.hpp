/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:49:19 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/29 13:57:45 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
	private:
		Brain *cbrain;
	public:
		Cat();
		~Cat();
		Cat(Cat const &a);
		Cat	&operator=(Cat const &a);
		virtual void	makeSound() const;
};
#endif