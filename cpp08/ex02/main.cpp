/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <aer-razk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:52:56 by aer-razk          #+#    #+#             */
/*   Updated: 2022/11/01 13:51:58 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::stack<int> a;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << *(mstack.end() - 1) << std::endl;
	
	std::cout << *mstack.begin() << std::endl;
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
}