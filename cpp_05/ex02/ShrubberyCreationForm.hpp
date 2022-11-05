/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 02:09:24 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/06 02:13:38 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    virtual void action() const;

public:
    ShrubberyCreationForm();
    explicit ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& a);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
};

#endif