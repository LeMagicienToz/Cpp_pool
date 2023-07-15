/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:12:17 by muteza            #+#    #+#             */
/*   Updated: 2023/07/15 16:24:02 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include "Phonebook.hpp"

PhoneBook::PhoneBook(void) {

	this->index = 0;
	std::cout << "constructor called" << std::endl;
}


int PhoneBook::ft_isdigit(const char *str){
	
	for(int i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

int PhoneBook::ft_isalpha(const char *str){
	
	for(int i = 0; str[i]; i++)
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
	}
	return (1);
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
		if (ft_isalpha(str.c_str()) == 0)
		{
			str.clear();
			std::cout << "Error can only use letters" << std::endl;	
		}
		else
			this->contact[this->index].set_lastName(str);	
	}
	str.clear();
	while (str.empty())
	{
		std::cout << "firstName : ";
		std::getline (std::cin,str);
		if (std::cin.fail())
			exit(0);
		if (ft_isalpha(str.c_str()) == 0)
		{
			str.clear();
			std::cout << "Error can only use letters" << std::endl;	
		}
		else
			this->contact[this->index].set_firstName(str);	
	}
	str.clear();
	while (str.empty())
	{
		std::cout << "nickName : ";
		std::getline (std::cin,str);
		if (std::cin.fail())
			exit(0);
		if (ft_isalpha(str.c_str()) == 0)
		{
			str.clear();
			std::cout << "Error can only use letters" << std::endl;	
		}
		else
			this->contact[this->index].set_nickName(str);	
	}
	str.clear();
	while (str.empty())
	{
		std::cout << "Number : ";
		std::getline (std::cin,str);
		if (std::cin.fail())
			exit(0);
		if (ft_isdigit(str.c_str()) == 0)
		{
			str.clear();
			std::cout << "Error can only use Number" << std::endl;	
		}
		else
			this->contact[this->index].set_number(str);
	}
	std::cout << this->contact[this->index].get_number() << std::endl;
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
