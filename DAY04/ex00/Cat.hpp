/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 06:35:00 by muteza            #+#    #+#             */
/*   Updated: 2023/10/15 15:10:38 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
	
	public:
			//constructor and destructor
			Cat(); //default
			Cat(Cat const &src); //copy
			~Cat();
			//Member function
			void	makeSound(void) const;
			//operator
			Cat	&operator=(Cat const &rhs);
			
};
#endif
// std::ostream	&operator<<( std::ostream &o, ClapTrap const &i );