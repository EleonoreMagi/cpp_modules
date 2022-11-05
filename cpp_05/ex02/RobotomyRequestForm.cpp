/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 02:08:49 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/06 02:25:29 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::action() const
{
    if (rand() % 2)
    {
        std::cout << "buzz-buzz... " << getTarget() << " has been robotomized successfully" << std::endl;
    }
    else
    {
        std::cout << "buzz-buzz... " << getTarget() << " has failed to make robotomized." << std::endl;
    }
}

RobotomyRequestForm::RobotomyRequestForm()
    : Form("RobotomyRequest", false, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : Form("RobotomyRequest", false, 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& a)
    : Form(a) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm&)
{
    return *this;
}