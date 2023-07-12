/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:29:07 by muteza            #+#    #+#             */
/*   Updated: 2023/07/12 19:02:19 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"

void	Contact::set_lastName(std::string str){
    this->_lastName = str;
}

std::string Contact::get_lastName(void) const{
    return (this->_lastName);
}
