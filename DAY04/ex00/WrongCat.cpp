/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:29:23 by muteza            #+#    #+#             */
/*   Updated: 2023/10/15 15:29:28 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type  = "WrongCat";
	std::cout << "WrongCat called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	*this = src;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroy" << std::endl;
	return ;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
		this->_type 	= rhs._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaouuui!" << std::endl;
	return ;
}