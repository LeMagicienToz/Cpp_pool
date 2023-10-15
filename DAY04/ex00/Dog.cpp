/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:33:25 by muteza            #+#    #+#             */
/*   Updated: 2023/10/15 15:22:33 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type  = "Dog";
	std::cout << "Dog called" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Cat destroy" << std::endl;
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		this->_type 	= rhs._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf !" << std::endl;
	return ;
}
