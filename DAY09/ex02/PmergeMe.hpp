/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:42:49 by muteza            #+#    #+#             */
/*   Updated: 2024/08/21 11:15:03 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <ctime>

# include <stdexcept>

# include <algorithm>
# include <deque>
# include <iterator>
# include <vector>

class PmergeMe {

public:
/*CONST / DEST*/
	PmergeMe( PmergeMe const &src );
	PmergeMe(int ac, char **av);
	void SortVector(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	void SortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end);
	std::vector<int> const	&getVector( void ) const;
	std::deque<int> const	&getDeque( void ) const;
	~PmergeMe();

/*OPERATOR OVERLOAD*/
	PmergeMe &operator=(PmergeMe const &rhs) ;

private:
	PmergeMe();
	std::vector<int>	_vec;
	std::deque<int>		_deq;
};

#endif