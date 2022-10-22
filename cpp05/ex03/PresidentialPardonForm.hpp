/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:50:22 by aer-razk          #+#    #+#             */
/*   Updated: 2022/10/22 02:24:08 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include <string>

#include "Form.hpp"

class PresidentialPardonForm:public Form
{
	private:
		std::string			target;
		const int			s_grade;
		const int			e_grade;
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &a);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm		&operator=(PresidentialPardonForm const &a);
		virtual void execute(Bureaucrat const & executor) const;
};
#endif