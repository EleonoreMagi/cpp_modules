/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:08:25 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/06 23:24:04 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat
{
private:
    std::string const	_name;
    int                 _grade;

public:
    Bureaucrat(void);
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(std::string const & name);
    Bureaucrat(int grade);
    Bureaucrat(const Bureaucrat& b);
    virtual ~Bureaucrat(void);

    Bureaucrat const    &operator=(Bureaucrat const &b);

    std::string const   &getName(void) const;
    int const           &getGrade(void) const;

    void    incrementGrade();
    void    decrementGrade();

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
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &b);

#endif