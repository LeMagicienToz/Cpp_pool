/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 03:37:15 by muteza            #+#    #+#             */
/*   Updated: 2023/12/01 03:37:19 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int main(void)
{
	std::string tab1[] = {"42","Ecole","CPP"};
	int 		tab2[] = {0, 1, 2, 3, 4, 5};
	float 		tab3[] = {1.1f, 2.32f, 42.3f};

	::iter(tab1, sizeof(tab1)/sizeof(*tab1), ::view);
	::iter(tab2, sizeof(tab2)/sizeof(*tab2), ::view);
	::iter(tab3, sizeof(tab3)/sizeof(*tab3), ::view);
	return (0);
}