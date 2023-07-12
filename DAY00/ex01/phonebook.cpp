/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:12:17 by muteza            #+#    #+#             */
/*   Updated: 2023/07/12 19:08:44 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include "Phonebook.hpp"

PhoneBook::PhoneBook(void) {

	this->index = 0;
	std::cout << "constructor called" << std::endl;
}


void PhoneBook::add_contact(void) {
	
	std::string str;

	str = this->contact[this->index].get_lastName();
	while (str.empty())
	{
		std::cout << "lastName : ";
		std::getline (std::cin,str);
		if (std::cin.fail())
			exit(0);
		this->contact[this->index].set_lastName(str);	
	}
	std::cout << this->contact[this->index].get_lastName() << std::endl;
	this->index++;
}

void PhoneBook::input(void) {

	std::string str;
	
	while (str.empty())
	{
		std::cout << "$_$ -> ";
		std::getline (std::cin,str);
		if (std::cin.fail())
			exit(0);
		if (str.compare("ADD") == 0)
			add_contact();
		if (str.compare("SEARCH") == 0)
			std::cout << "awdwa";
		if (str.compare("EXIT") != 0)	
			str.clear();
		else
			exit(0);
	}
	std::cout << str << std::endl;
	
}

PhoneBook::~PhoneBook(void) {

	std::cout << "destructor called" << std::endl;
}
