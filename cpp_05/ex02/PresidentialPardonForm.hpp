/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:51:02 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/06 02:03:18 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    virtual void action() const;

public:
    PresidentialPardonForm();
    explicit PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm& a);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm& operator=(const PresidentialPardonForm&);
};

#endif