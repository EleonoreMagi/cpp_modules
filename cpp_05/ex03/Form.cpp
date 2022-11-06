/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:55:48 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 00:08:52 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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

Form::Form()
    : _name("(nameless)"), _isSigned(false),
     _signGrade(150), _execGrade(150),
      _target("no_target") {}

Form::Form(const std::string& name)
    : _name(name), _isSigned(false),
      _signGrade(150), _execGrade(150),
      _target("no_target") {}

Form::Form(int grade)
    : _name("(nameless)"), _isSigned(false),
      _signGrade(grade), _execGrade(grade),
      _target("no_target")
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

Form::Form(const std::string& name, int grade)
    : _name(name), _isSigned(false),
      _signGrade(grade), _execGrade(grade),
      _target("no_target")
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

Form::Form(int signGrade, int execGrade)
    : _name("(nameless)"), _isSigned(false),
      _signGrade(signGrade),
      _execGrade(execGrade),
      _target("no_target")
{
    if (signGrade > 150 || execGrade > 150)
    {
        throw GradeTooLowException("Exception in constructor. The grade is too low");
    }
    if (signGrade < 1 || execGrade < 1)
    {
        throw GradeTooHighException("Exception in constructor. The grade is too high");
    }
}

Form::Form(const std::string& name, int signGrade, int execGrade)
    : _name(name), _isSigned(false),
      _signGrade(signGrade),
      _execGrade(execGrade),
      _target("no_target")
{
    if (signGrade > 150 || execGrade > 150)
    {
        throw GradeTooLowException("Exception in constructor. The grade is too low");
    }
    if (signGrade < 1 || execGrade < 1)
    {
        throw GradeTooHighException("Exception in constructor. The grade is too high");
    }
}

Form::Form(const std::string& name, int signGrade, int execGrade, const std::string& target)
    : _name(name), _isSigned(false),
      _signGrade(signGrade),
      _execGrade(execGrade),
      _target(target)
{
    if (signGrade > 150 || execGrade > 150)
    {
        throw GradeTooLowException("Exception in constructor. The grade is too low");
    }
    if (signGrade < 1 || execGrade < 1)
    {
        throw GradeTooHighException("Exception in constructor. The grade is too high");
    }
}

Form::Form(const Form& a)
    : _name(a.getName()), _isSigned(false),
      _signGrade(a.getSignGrade()),
      _execGrade(a.getExecGrade()),
      _target(a.getTarget()) {}

Form::~Form() {}

Form& Form::operator=(const Form&)
{
    return *this;
}

const std::string& Form::getName() const
{
    return _name;
}

bool Form::getSignStatus() const
{
    return _isSigned;
}

int Form::getSignGrade() const
{
    return _signGrade;
}

int Form::getExecGrade() const
{
    return _execGrade;
}

const std::string& Form::getTarget() const
{
    return _target;
}

void Form::beSigned(const Bureaucrat& b)
{
    if (_isSigned)
    {
        return;
    }
    if (_signGrade < b.getGrade())
    {
        throw GradeTooLowException("Exception in beSigned. The grade is too low");
    }
    _isSigned = true;
}

void Form::execute(const Bureaucrat& executor) const
{
    if (!_signGrade)
    {
        throw std::runtime_error("It hasn't been signed yet");
    }
    if (_execGrade < executor.getGrade())
    {
        throw std::runtime_error("The grade is too low");
    }
    action();
}

std::ostream& operator<<(std::ostream& os, const Form &a)
{
    os << "name: " << a.getName() << \
          ", isSigned: " << a.getSignStatus() <<\
          ", gradeRequiredInSign: " << a.getSignGrade() << \
          ", gradeRequiredInExecute: " << a.getExecGrade() << \
          ", target: " << a.getTarget();
    return os;
}
