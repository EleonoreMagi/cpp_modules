/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:11:28 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/06 23:24:09 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _isSigned;
    const int _signGrade;
    const int _execGrade;
    const std::string _target;
    virtual void action() const = 0;

public:
    class GradeTooHighException : public std::exception
    {
    private:
        const char* message;

    public:
        explicit GradeTooHighException(const char* message);
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    private:
        const char* message;

    public:
        explicit GradeTooLowException(const char* message);
        virtual const char* what() const throw();
    };

    Form();
    explicit Form(const std::string& name);
    explicit Form(int grade);
    Form(const std::string& name, int grade);
    Form(int signGrade, int execGrade);
    Form(const std::string& name, int signGrade, int execGrade);
    Form(const std::string& name, int signGrade, int execGrade, const std::string& target);
    Form(const Form& a);
    virtual ~Form();

    Form& operator=(const Form&);

    const std::string& getName() const;
    bool getSignStatus() const;
    int getSignGrade() const;
    int getExecGrade() const;
    const std::string& getTarget() const;

    void beSigned(const Bureaucrat& b);
    void execute(const Bureaucrat& executor) const;
};

std::ostream& operator<<(std::ostream& os, const Form &a);

#endif