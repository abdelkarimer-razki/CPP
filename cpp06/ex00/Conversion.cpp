/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:00:30 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/02 11:55:45 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"


Conversion::~Conversion()
{
	std::cout << "Conversion Destructor\n";
}

Conversion::Conversion():check(0)
{
	std::cout << "Conversion Constructor\n";
}

Conversion::Conversion(Conversion const &a)
{
	*this = a;
}

Conversion	&Conversion::operator=(Conversion const &a)
{
	this->check = a.check;
	return (*this);
}

void	Conversion::check_points(char	*str)
{
	int i = -1;
	int j = 0;

	while (str[++i])
		if (str[i] == '.')
			j++;
	if (j > 1)
		throw std::exception();
	i = -1;
	while (str[++i])
		if (!isnumber(str[i]) && str[i] != 'f' && str[i] != '.')
			throw std::exception();
	i = -1;
	j = 0;
	while (str[++i])
		if (str[i] == 'f')
			j++;
	if (j > 1 || (str[strlen(str) - 1] != 'f' && j == 1))
		throw std::exception();
}

bool	Conversion::check_double(char *str)
{
	try
	{
		int i = -1;
		while (str[++i])
		{
			if (str[i] == '.')
				break ;
		}
		if (i != (int)strlen(str))
		{
			if (str[(int)strlen(str) - 1] == '.')
				return (false);
			std::stol(str);
			return (true);
		}
		return (false);
	}
	catch(std::exception &e)
	{
		return (false);
	}
}

bool	Conversion::check_float(char *str)
{
	try
	{
		int i = -1;
		while (str[i])
		{
			if (str[i] == '.')
				break ;
		}
		if (i != (int)strlen(str))
		{	
			if (str[(int)strlen(str) - 1] != 'f')
				return (false);
			std::stof(str);
			return (true);
		}
		return (false);
	}
	catch(std::exception &e)
	{
		return (false);
	}
}

bool	Conversion::check_int(char *str)
{
	try
	{
		std::stol(str);
		return (true);
	}
	catch(std::exception &e)
	{
		return (false);
	}
} 

void	Conversion::fill_double(char *str)
{
	this->check = true;
	this->ind = std::stod(str);
	this->ini = static_cast<int>(this->ind);
	this->inf = static_cast<float>(this->ind);
	if (this->ind >= 32 && this->ind < 127)
		this->inc = static_cast<char>(this->ind);
	else
		this->inc = 0;
}

void	Conversion::fill_int(char *str)
{
	this->check = true;
	this->ini = static_cast<int>(std::stol(str));
	this->ind = static_cast<double>(this->ini);
	this->inf = static_cast<float>(this->ini);
	if (this->ini >= 32 && this->ini < 127)
		this->inc = static_cast<char>(this->ini);
	else
		this->inc = 0;
}

void	Conversion::fill_float(char *str)
{
	this->check = true;
	this->inf = std::stof(str);
	this->ini = static_cast<int>(this->inf);
	this->ind = static_cast<double>(this->inf);
	if (this->inf >= 32 && this->inf < 127)
		this->inc = static_cast<char>(this->inf);
	else
		this->inc = 0;
}

void	Conversion::show_results()
{
	if (this->check == true)
	{
		if (this->inc == 0)
			std::cout << "char : Non displayable\n";
		else
			std::cout << "char : " << this->inc << std::endl;
		std::cout << "int : " << this->ini << std::endl;
		if (this->inf - this->ini == 0)
		{
			std::cout << "float : " << this->inf << ".0f" << std::endl;
			std::cout << "double : " << this->ind << ".0" << std::endl;
		}
		else
		{
			std::cout << "float : " << this->inf << "f" << std::endl;
			std::cout << "double : " << this->ind << std::endl;
		}	
	}
}

bool 	Conversion::check_char(char *str)
{
	if ((int)strlen(str) == 1 && isalpha(str[0]))
		return (true);
	return (false);
}

void	Conversion::fill_char(char *str)
{

	this->check = true;
	this->inc = str[0];
	this->ind = static_cast<double>(str[0]);
	this->inf = static_cast<float>(str[0]);
	this->ini = static_cast<int>(str[0]);
}


bool	Conversion::check_lil(char *str)
{
	if (strcmp(str, "nan") == 0 || strcmp(str, "+inf") == 0
		|| strcmp(str, "-inf") == 0 || strcmp(str, "nanf") == 0
		|| strcmp(str, "+inff") == 0 || strcmp(str, "-inff") == 0)
		return (true);
	return (false);
}

void	Conversion::fill_lil(char *str)
{
	std::string s = str;
	this->check = false;
	std::cout << "char : impossible\n";
	std::cout << "int : impossible\n";
	if (strlen(str) == 5)
	{
		std::cout << "float : " << str << "\n";
		std::cout << "double : " << s.substr(0, 4) << std::endl;
	}
	else if (strcmp(str, "nanf") == 0)
	{
		std::cout << "float : " << str << "\n";
		std::cout << "double : " << s.substr(0, 3) << std::endl;	
	}
	else
	{
		std::cout << "float : " << str << "f\n";
		std::cout << "double : " << str << std::endl;
	}
}
