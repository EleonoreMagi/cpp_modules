/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:46:44 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 00:08:55 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern&);
    ~Intern();

    Intern& operator=(const Intern&);

    Form* makeShrubberyCreation(const std::string& target) const;
    Form* makeRobotomyRequest(const std::string& target) const;
    Form* makePresidentialPardon(const std::string& target) const;
    Form* makeForm(const std::string& form, const std::string& target) const;
};

#endif