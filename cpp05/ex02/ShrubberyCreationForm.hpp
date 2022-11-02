/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:50:19 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 12:37:46 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <string>
#include "Form.hpp"
 
class ShrubberyCreationForm:public Form
{
	private:
		std::string			target;
		const int			s_grade;
		const int			e_grade;
	public:
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &a);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm		&operator=(ShrubberyCreationForm const &a);
		virtual void execute(Bureaucrat const & executor) const;
};
#endif