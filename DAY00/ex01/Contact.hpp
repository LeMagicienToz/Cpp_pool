/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:02:59 by muteza            #+#    #+#             */
/*   Updated: 2023/07/12 19:07:48 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string.h>
#include <iostream>
// #include "Phonebook.hpp"

class Contact {

public:
	std::string get_lastName(void) const;
	void		set_lastName(std::string str);

private:
	std::string _lastName;
	std::string _firstName;
	std::string _nickName;
	std::string _number;
	std::string _darkestSecret;

};

#endif