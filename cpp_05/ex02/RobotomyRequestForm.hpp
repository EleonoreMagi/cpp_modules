/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 02:08:29 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/06 02:24:53 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    virtual void action() const;

public:
    RobotomyRequestForm();
    explicit RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm& a);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm& operator=(const RobotomyRequestForm&);
};

#endif