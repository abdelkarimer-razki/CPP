/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:50:17 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 14:43:11 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm:public Form
{
	private:
		std::string			target;
	public:
		RobotomyRequestForm();
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &a);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm		&operator=(RobotomyRequestForm const &a);
		virtual void execute(Bureaucrat const & executor) const;
};
#endif