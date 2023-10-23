/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:59:01 by muteza            #+#    #+#             */
/*   Updated: 2023/10/23 10:46:11 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/****	Constructor && destructor	****/

Bureaucrat::Bureaucrat(int grade, std::string const name)
{
	this->_name = name;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}


/****	Operator	****/

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}

/****	Accessor	****/

std::string const &Bureaucrat::getName() const
{
	return (this->_name);
}

int const  &Bureaucrat::getGrade() const
{
	return (this->_grade);
}

/****	Exception	****/


const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too High !");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low !");
}

/****	Member function	****/

void	Bureaucrat::upGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}


void	Bureaucrat::downGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

/****	Stream out	****/

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName();
	o << " grade is ";
	o << i.getGrade();
	return (o);
}