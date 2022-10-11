/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:19:27 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/11 12:18:26 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(){}

static int quite_add(std::string *str, int i)
{
	if (std::cin.eof())
		return (-1);
	while (str->empty())
	{
		if (i == 1)
			std::cout << "First Name: ";
		else if (i == 2)
			std::cout << "Last Name: ";
		else if (i == 3)
			std::cout << "Nickname: ";
		else if (i == 4)
			std::cout << "Phone Number:";
		else if (i == 5)
			std::cout << "Darkest Secret: ";
		getline(std::cin, *str);
		if (std::cin.eof())
			return (-1);
	}
	return (1);
}

int	contact::fill()
{
	if (quite_add(&this->first_name, 1) == -1)
		return (-1);
	if (quite_add(&this->last_name, 2) == -1)
		return (-1);
	if (quite_add(&this->nickname, 3) == -1)
		return (-1);
	if (quite_add(&this->phone_number, 4) == -1)
		return (-1);
	if (quite_add(&this->darkest_secret, 5) == -1)
		return (-1);
	return (1);
}

int	contact::showinfo()
{
	if (!this->first_name.empty())
	{
		std::cout << "First Name: " << this->first_name << std::endl;
		std::cout << "Last Name: " << this->last_name << std::endl;
		std::cout << "Nickname: " << this->nickname << std::endl;
		std::cout << "Phone Number: " << this->phone_number << std::endl;
		std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
		return (1);
	}
	std::cout << "This contact is empty" << std::endl;
	return (1);
}

void	contact::showallinfo(int i)
{
	if (!this->first_name.empty())
	{
		if ((int)this->first_name.length() - 10 > 0)
			std::cout << std::setw(10) << i << "|" << this->first_name.substr(0, 9) << ".";
		else			
			std::cout << std::setw(10) << i << "|" << std::setw(10) << this->first_name;
		if ((int)this->last_name.length() - 10 > 0)
			std::cout << "|" << this->last_name.substr(0, 9) << ".";
		else			
			std::cout << "|" << std::setw(10) << this->last_name;
		if ((int)this->nickname.length() - 10 > 0)
			std::cout << "|" << this->nickname.substr(0, 9) << ".";
		else			
			std::cout << "|" << std::setw(10) << this->nickname;
		std::cout << std::endl;
	}
}
