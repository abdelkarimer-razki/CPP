/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:37:40 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/17 13:04:48 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain	&operator=(Brain const &a);
		Brain(Brain const &a);
};
#endif
