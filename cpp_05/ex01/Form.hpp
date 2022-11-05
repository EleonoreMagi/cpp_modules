/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:55:42 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/06 01:41:01 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#pragma once 
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	private:
		std::string const   _name;
		bool                _isSigned;
		int const			_signGrade;
		int const			_execGrade;

	public:
		Form(void);
		Form(const std::string& name);
		Form(int grade);
		Form(const std::string& name, int grade);
		Form(const std::string &name, int const signGrade, int const execGrade);
		Form(const std::string &name, bool signStatus, int const signGrade, int const execGrade);
		Form(const Form& form);
		virtual ~Form(void);

		Form const    &operator=(Form const &form);

		std::string const   &getName(void) const;
		bool				getSignStatus(void) const;
		int           		getSignGrade(void) const;
		int           		getExecGrade(void) const;

		void	beSigned(const Bureaucrat &b);

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

std::ostream&	operator<<(std::ostream &str, const Form &form);

#endif