/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:57:32 by muteza            #+#    #+#             */
/*   Updated: 2023/07/13 15:13:23 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"

class PhoneBook {

	public:
		int index;
		//constructor + destructor
		PhoneBook(void);
		~PhoneBook(void);
		//functions
		void add_contact(void);
		void input(void);
		//contacts
		Contact	contact[8];
	private:
		int ft_isdigit(const char *str);
};

#endif