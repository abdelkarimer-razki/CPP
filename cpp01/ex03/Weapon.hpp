/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:26:45 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/10 18:53:32 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string type);
		void		setType(std::string type);
		std::string	getType(void);
};
#endif
