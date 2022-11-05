/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:51:04 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/06 02:30:39 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::action() const
{
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm()
    : Form("PresidentialPardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    :Form("PresidentialPardon", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& a)
    : Form(a) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm&)
{
    return *this;
}