/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:50:28 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/24 10:03:56 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialisation.hpp"


int main()
{
	Data	a("kairm", 15);
	uintptr_t d = a.serialize(&a);
	Data *c = a.deserialize(d);
	std::cout << &a << std::endl;
	std::cout << &d << std::endl;
	std::cout << c << std::endl;
}