/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:55:48 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/06 01:45:57 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("nameless_form"), _isSigned(false), _signGrade(150), _execGrade(150) {}

Form::Form(const std::string& name)
    : _name(name), _isSigned(false),
      _signGrade(150), _execGrade(150) {}

Form::Form(int grade)
    : _name("nameless_form"), _isSigned(false), _signGrade(grade), _execGrade(grade)
{
    if (grade > 150)
        throw GradeTooLowException("Exception while creating Form. The grade is too low.");
    if (grade < 1)
        throw GradeTooHighException("Exception while creating Form. The grade is too high.");
}

Form::Form(const std::string& name, int grade)
    : _name(name), _isSigned(false),
      _signGrade(grade), _execGrade(grade)
{
    if (grade > 150)
        throw GradeTooLowException("Exception while creating Form. The grade is too low.");
    if (grade < 1)
        throw GradeTooHighException("Exception while creating Form. The grade is too high.");
}

Form::Form(std::string const &name, int const signGrade, int const execGrade)
	: _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException("Exception while creating Form. The grade is too low.");
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException("Exception while creating Form. The grade is too high.");
}

Form::Form(std::string const &name, bool signStatus, int const signGrade, int const execGrade)
	: _name(name), _isSigned(signStatus), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException("Exception while creating Form. The grade is too low.");
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException("Exception while creating Form. The grade is too high.");
}

Form::Form(const Form& form)
: _name(form.getName()), _isSigned(form.getSignStatus()),
      _signGrade(form.getSignGrade()), _execGrade(form.getExecGrade())
{}

Form::~Form() {}

const Form& Form::operator=(const Form& form)
{
    _isSigned = form.getSignStatus();
    return *this;
}

const std::string& Form::getName(void) const
{
    return _name;
}

bool Form::getSignStatus(void) const
{
    return _isSigned;
}

int Form::getSignGrade(void) const
{
    return _signGrade;
}

int Form::getExecGrade(void) const
{
    return _execGrade;
}

void Form::beSigned(const Bureaucrat& b)
{
    if (_isSigned)
        return;
    if (_signGrade < b.getGrade())
        throw GradeTooLowException("Exception in beSigned. The bureaucrat's grade is too low.");
    _isSigned = true;
}

Form::GradeTooHighException::GradeTooHighException(const char* message)
    : message(message) {}

const char* Form::GradeTooHighException::what() const throw()
{
    return message;
}

Form::GradeTooLowException::GradeTooLowException(const char* message)
    : message(message) {}

const char* Form::GradeTooLowException::what() const throw()
{
    return message;
}

std::ostream&	operator<<(std::ostream &str, const Form &form)
{
    str << "name: " << form.getName() << \
          ", sign status: " << form.getSignStatus() <<\
          ", grade required to sign: " << form.getSignGrade() << \
          ", grade required to execute: " << form.getExecGrade();
    return str;
}
