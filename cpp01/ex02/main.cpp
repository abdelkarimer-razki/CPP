/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:04:58 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/10 17:22:32 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string verse = "HI THIS IS BRAIN";
	std::string *stringPTR = &verse;
	std::string	&stringREF = verse;

	std::cout << &verse << " | " << stringPTR << " | " << &stringREF << std::endl;
	std::cout << verse << " | " << *stringPTR << " | " << stringREF << std::endl;
}