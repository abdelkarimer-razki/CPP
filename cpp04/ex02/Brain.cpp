/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:37:43 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/17 13:05:11 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;	
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain	&Brain::operator=(Brain const &a)
{
	int	i;

	i = -1;
	while (++i < 100)
		this->ideas[i] = a.ideas[i];
	return (*this);
}

Brain::Brain(Brain const &a)
{
	*this = a;
}