/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:09:16 by muteza            #+#    #+#             */
/*   Updated: 2023/08/16 17:27:06 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
   Zombie *horde =  new Zombie[N];

   for (int i = 0; i <= N; i++)
        horde[i].setName(name);
    return(horde);
}
