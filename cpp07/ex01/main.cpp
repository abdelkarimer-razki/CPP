/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:51:04 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/24 16:29:55 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int tab[]={ 0, 1, 2, 3, 4 }; // <--- | never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);
}