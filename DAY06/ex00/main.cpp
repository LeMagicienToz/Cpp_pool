/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 08:07:54 by muteza            #+#    #+#             */
/*   Updated: 2023/11/15 10:49:58 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ScalarConverter	c(av[1]);
		std::cout << c;
	}
	else
		std::cout << "\033[1;31mError : Wrong number of Args\033[0m" << std::endl;

	return (0);
}