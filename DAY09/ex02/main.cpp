/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:05:55 by muteza            #+#    #+#             */
/*   Updated: 2024/08/20 16:42:42 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Error: Bad numbers of arguments." << std::endl;
		return (0);
	}
	try
	{
		PmergeMe test(ac, av);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
