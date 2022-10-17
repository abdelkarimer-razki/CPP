/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:45:48 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/17 16:08:46 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *a = new Zombie("hamid");
	a->randomChump("errazki");
	Zombie *b = a->newZombie("karim");
	delete (a);
	delete (b);
}