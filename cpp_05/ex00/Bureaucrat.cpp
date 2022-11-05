/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:08:21 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 23:53:11 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("no_name"), _grade(150) 
{}

Bureaucrat::Bureaucrat(std::string const & name)
    : _name(name), _grade(150) {}

Bureaucrat::Bureaucrat(int grade)
    : _name("no_name"), _grade(grade)
{
    if (this->_grade < 1)
        throw (Bureaucrat::GradeTooHighException("Exception while creating Buraucrat. The grade value is too low."));
    else if (this->_grade > 150)
        throw (Bureaucrat::GradeTooLowException("Exception while creating Buraucrat. The grade value is too high.")); 
}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
    this->_grade = grade;
    if (this->_grade < 1)
        throw (Bureaucrat::GradeTooHighException("Exception while creating Buraucrat. The grade value is too low."));
    else if (this->_grade > 150)
        throw (Bureaucrat::GradeTooLowException("Exception while creating Buraucrat. The grade value is too high.")); 
}

Bureaucrat::Bureaucrat(const Bureaucrat& b): _name(b.getName()), _grade(b.getGrade()) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat const&    Bureaucrat::operator=(Bureaucrat const &b)
{
    _grade = b.getGrade();
    return *this;
}

std::string const&  Bureaucrat::getName(void) const
{
    return (_name);
}

int const&          Bureaucrat::getGrade(void) const
{
    return (_grade);
}

void                Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw (Bureaucrat::GradeTooHighException("Exception in incrementGrade. Cannot increase the grade any further."));
    this->_grade--;
}

void                Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw (Bureaucrat::GradeTooLowException("Exception in decrementGrade. Cannot decrease the grade any further."));
    this->_grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char* message)
    : message(message) {}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return message;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char* message)
    : message(message) {}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return message;
}

std::ostream&	operator<<(std::ostream &str, Bureaucrat const &b)
{
	return (str << b.getName() << ", bureaucrat grade " << b.getGrade());
}
