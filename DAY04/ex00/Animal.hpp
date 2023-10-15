/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 06:35:00 by muteza            #+#    #+#             */
/*   Updated: 2023/10/15 15:21:43 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal {
	
	public:
			//constructor and destructor
			Animal(); //default
			Animal(Animal const &src); //copy
			virtual ~Animal();
			//Accessor
			std::string getType() const;
			//Member function
			virtual void makeSound(void) const;
			//operator
			Animal	&operator=(Animal const &rhs);
	protected:
		std::string _type;
			
};

// std::ostream	&operator<<( std::ostream &o, ClapTrap const &i );

#endif