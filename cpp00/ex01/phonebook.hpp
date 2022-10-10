/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:12:57 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/10 13:30:30 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

class contact;

class	phonebook
{
	private:
		contact	contacts[8];
		int		index;
	public:
		int		addcontact(void);
		int		searchcontact(void);
		void	set_index(int i);
};

#endif