/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:58:19 by muteza            #+#    #+#             */
/*   Updated: 2023/11/29 04:12:11 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
#include "Data.h"

class Serializer {

public:

// Const
	Serializer( void );
	Serializer( Serializer const &src );
	~Serializer( void );
//member function
	static uintptr_t	serialize( Data *ptr );
	static Data			*deserialize( uintptr_t raw );

// OP overload
	Serializer	&operator=( Serializer const &rhs );

};

#endif