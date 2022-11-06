/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:08:21 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 00:31:59 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

Bureaucrat::Bureaucrat() : _name("(no_name)"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const & name)
    : _name(name), _grade(150) {}

Bureaucrat::Bureaucrat(int grade)
    : _name("(no_name)"), _grade(grade)
{
    if (grade > 150)
    {
        throw GradeTooLowException("Exception in constructor. The grade is too low");
    }
    if (grade < 1)
    {
        throw GradeTooHighException("Exception in constructor. The grade is too high");
    }
}

Bureaucrat::Bureaucrat(std::string const & name, int grade)
    : _name(name), _grade(grade)
{
    if (grade > 150)
    {
        throw GradeTooLowException("Exception in constructor. The grade is too low");
    }
    if (grade < 1)
    {
        throw GradeTooHighException("Exception in constructor. The grade is too high");
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& a)
    : _name(a.getName()), _grade(a.getGrade()) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& a)
{
    _grade = a.getGrade();
    return *this;
}

const std::string& Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    if (_grade <= 1)
    {
        throw GradeTooHighException("Exception in incrementGrade. The grade will not increase any further.");
    }
    --_grade;
}

void Bureaucrat::decrementGrade()
{
    if (_grade >= 150)
    {
        throw GradeTooLowException("Exception in decrementGrade. The grade will not decrement any further.");
    }
    ++_grade;
}

void Bureaucrat::signForm(Form& f) const
{
    std::string reason;

    if (f.getSignStatus())
    {
        reason = "it's already been signed";
    }
    else if (f.getSignGrade() < _grade)
    {
        reason = "the grade is not enough.";
    }
    else
    {
        std::cout << _name << " signs " << \
                     f.getName() << std::endl;
        f.beSigned(*this);
        return ;
    }
    std::cout << _name << " cannot sign " << \
                 f.getName() << " because " << \
                 reason << std::endl;
}

void Bureaucrat::executeForm(const Form& form) const
{
    try
    {
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << _name << " could not execute " << \
                     form.getName() << " for the following reason: " << \
                     e.what() << std::endl;
        return;
    }
    std::cout << _name << " executes " << form.getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &a)
{
    os << a.getName() << ", bureaucrat grade " << a.getGrade();
    return os;
}
