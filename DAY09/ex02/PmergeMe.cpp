/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:56:17 by muteza            #+#    #+#             */
/*   Updated: 2024/08/21 11:29:58 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char **av)
{
	// int the vector
	std::vector<int> vect;
	int i = 1;
	for (; i < ac; ++i) {
		vect.push_back(std::atoi(av[i]));
	}
	this->_vec = vect;

	// Timing the sort VECTOR
	clock_t startVector = clock();

	std::vector<int>::iterator it_begin = this->_vec.begin();
	std::vector<int>::iterator it_end = this->_vec.end();
	SortVector(it_begin, it_end);

	clock_t endVector = clock();
	double durationVector = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC;

	// Print the sorted 	vector
	std::cout << "After : ";
	for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	//init deq
	std::deque<int> deq;
	for (; i < ac; ++i) {
		deq.push_back(std::atoi(av[i]));
	}
	this->_deq = deq;
	// Timing the sort deq
	clock_t startDeq = clock();

	std::deque<int>::iterator it_dbegin = this->_deq.begin();
	std::deque<int>::iterator it_dend = this->_deq.end();
	SortDeque(it_dbegin, it_dend);

	clock_t endDeq = clock();
	double durationDeque = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC;

	std::cout << "Time to process a range of " << i - 1 << " elements with std::vector : " << durationVector << " seconds" << std::endl;
	std::cout << "Time to process a range of " << i - 1 << " elements with std::Deque : " << durationDeque << " seconds" << std::endl;
}

void PmergeMe::SortVector(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	int size = std::distance(begin, end);
	if (size <= 1) return;

	if (size == 2) {
		if (*begin > *(begin + 1)) {
			std::iter_swap(begin, begin + 1);
		}
		return;
	}

	// Step 1: Pair up and sort each pair
	std::vector<int> paired;
	std::vector<int>::iterator it = begin;
	for (; it < end - 1; it += 2) {
		int smaller = std::min(*it, *(it + 1));
		int larger = std::max(*it, *(it + 1));
		paired.push_back(larger);
		// Place the smaller element back into the original array
		*(begin + (it - begin) / 2) = smaller;
	}
	if (size % 2 != 0) {
		paired.push_back(*(end - 1));  // Handle the case when the size is odd
	}

	// Step 2: Recursively sort the paired array
	std::vector<int> temp = paired;
	SortVector(temp.begin(), temp.end());

	// Step 3: Merge-insertion
	std::vector<int>::iterator it_paired = temp.begin();
	for (std::vector<int>::iterator it = begin + size / 2; it != end; ++it, ++it_paired) 
	{
		std::vector<int>::iterator insertion_pos = std::upper_bound(begin, it, *it_paired);
		std::rotate(insertion_pos, it, it + 1); //move the original postition to +1 to the right to put insertion
		*insertion_pos = *it_paired;
	}
}

void PmergeMe::SortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end) {
    int size = std::distance(begin, end);
    if (size <= 1) return;

    if (size == 2) {
        if (*begin > *(begin + 1)) {
            std::iter_swap(begin, begin + 1);
        }
        return;
    }

    // Step 1: Pair up and sort each pair
    std::deque<int> paired;
    std::deque<int>::iterator it = begin;
    for (; it < end - 1; it += 2) {
        int smaller = std::min(*it, *(it + 1));
        int larger = std::max(*it, *(it + 1));
        paired.push_back(larger);
        // Place the smaller element back into the original array
        *(begin + (it - begin) / 2) = smaller;
    }
    if (size % 2 != 0) {
        paired.push_back(*(end - 1));  // Handle the case when the size is odd
    }

    // Step 2: Recursively sort the paired array
    std::deque<int> temp = paired;
    SortDeque(temp.begin(), temp.end());

    // Step 3: Merge-insertion
    std::deque<int>::iterator it_paired = temp.begin();
    for (std::deque<int>::iterator it = begin + size / 2; it != end; ++it, ++it_paired) {
        std::deque<int>::iterator insertion_pos = std::upper_bound(begin, it, *it_paired);
        std::rotate(insertion_pos, it, it + 1);  // Move the original position one to the right
        *insertion_pos = *it_paired;
    }
}

std::vector<int> const	&PmergeMe::getVector( void ) const 
{ 
	return (this->_vec); 
}

std::deque<int> const	&PmergeMe::getDeque( void ) const 
{ 
	return (this->_deq); 
}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe( PmergeMe const &src ) { *this = src; }

PmergeMe	&PmergeMe::operator=(PmergeMe const &rhs) 
{
	(void) rhs;

	std::cout << "Nothing to assign." << std::endl;
	return (*this);
}

