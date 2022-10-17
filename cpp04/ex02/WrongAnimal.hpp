/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:08:26 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/17 12:10:51 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal const &a);
		WrongAnimal &operator=(WrongAnimal const &a);
		void	makeSound() const;
		std::string	getType() const;
};
#endif