/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:08:27 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/06 01:45:43 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
		Bureaucrat NoName;
		std::cout << NoName << std::endl;
    {
        Bureaucrat Ali("Ali", 10);
        std::cout << Ali << std::endl;
        Form vacationForm("vacationForm", 20);
        std::cout << vacationForm << std::endl;
        vacationForm.beSigned(Ali);
        std::cout << vacationForm << std::endl;
    }

    std::cout << "-----" << std::endl;

    {
        Bureaucrat Belle("Belle", 1);
        std::cout << Belle << std::endl;
        Form dismissalForm("dismissalForm", 11);
        std::cout << dismissalForm << std::endl;
        Belle.signForm(dismissalForm);
        std::cout << dismissalForm << std::endl;
    }

    std::cout << "-----" << std::endl;

    {
        Bureaucrat Kelly("Kelly", 10);
        std::cout << Kelly << std::endl;
        Form promotionForm("promotionForm", 5, 20);
        std::cout << promotionForm << std::endl;
        Kelly.signForm(promotionForm);
        std::cout << promotionForm << std::endl;
    }

    std::cout << "-----" << std::endl;

    try
    {
        Form form(-1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Form form(151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bureaucrat(100);
        Form form(1);
        form.beSigned(bureaucrat);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}