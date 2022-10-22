/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:54:39 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/22 04:38:59 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	int	i = -1;
	void(Harl::*declare[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string table[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (++i < 4 && table[i] != level);
	if (i < 4)
		(this->*declare[i])();
}
