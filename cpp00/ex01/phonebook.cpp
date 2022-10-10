/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:20:35 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/10 13:32:57 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	phonebook::set_index(int i)
{
	this->index = i;
}

int	phonebook::addcontact(void)
{
	if (this->contacts[this->index].fill() == -1)
		return (-1);
	if (this->index < 8)
		this->index++;
	else
		this->index = 0;
	return (1);
}

int	phonebook::searchcontact(void)
{
	int i;

	i = -1;
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	while (++i < 8)
		this->contacts[i].showallinfo(i);
	while (1)
	{
		std::cout << "Enter the index of the contact you want to see: ";
		std::string index;
		getline(std::cin, index);
		if (std::cin.eof())
			return (-1);
		if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
			return (this->contacts[index[0] - '0'].showinfo());
		std::cout << "Wrong index" << std::endl;
		return (1);
	}
	return (1);
}