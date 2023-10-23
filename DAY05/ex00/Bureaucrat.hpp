/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 08:08:12 by muteza            #+#    #+#             */
/*   Updated: 2023/10/23 10:44:47 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include <stdexcept>

class Bureaucrat {
	public :
			//constructor & destructor
			Bureaucrat(int grade, std::string const name);
			Bureaucrat(Bureaucrat const & src);
			~Bureaucrat();
			//operator overload
			Bureaucrat &operator=(Bureaucrat const & rhs);
			// Accessor
			std::string const	&getName( void ) const;
			int const	&getGrade( void ) const;
			// EXECEPTION !
			class GradeTooHighException : public std::exception 
			{
				public:
						virtual const char *what() const throw();
			};
			class GradeTooLowException : public std::exception 
			{
				public:
						virtual const char *what() const throw();
			};
			//Member function
			void	upGrade( void );
			void	downGrade( void );
	private :
		std::string	_name;
		int			_grade;
};
//Stream out
std::ostream	&operator<<( std::ostream &o, Bureaucrat const &i );

#endif