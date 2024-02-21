/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 03:37:15 by muteza            #+#    #+#             */
/*   Updated: 2024/02/21 15:38:24 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
int main ()
{
	// Span a(3);
	// try
	// {
	// 	a.addNumber(42);
	// 	a.addNumber(4);
	// 	a.addNumber(2);
	// 	a.shortestSpan();
	// 	// a.addNumber(423);
	// }
	// catch (std::exception const &e)
	// {
	// 	 std::cout << e.what() << std::endl;
	// }
	Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.longestSpan() << std::endl;

}
