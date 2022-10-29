/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:46:23 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/29 13:52:23 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// int	i;
	// Animal *a[4];

	// i = -1;
	// while (++i < 4)
	// {
	// 	if (i < 2)
	// 		a[i] = new Dog();
	// 	else
	// 		a[i] = new Cat();
	// }
	// i = -1;
	// while (++i < 4)
	// 	delete (a[i]);
	Cat a;
	Dog d;
	Dog f(d);
	//Cat f(a);
	//Cat b(a);

	return (0);
}