/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:18:09 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/10 13:25:07 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	phonebook a;
	std::string input;
	a.set_index(0);
	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT: ";
		getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			if (a.addcontact() == -1)
				break ;
		}
		else if (input == "SEARCH")
		{
			if (a.searchcontact() == -1)
				break ;
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
}