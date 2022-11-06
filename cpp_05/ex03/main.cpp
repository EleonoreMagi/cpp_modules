/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 00:16:07 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 00:35:22 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    std::srand(std::time(NULL));
    Bureaucrat headBureaucrat("Head Bureaucrat", 1);

    {
        Intern someRandomIntern;
        Form* rrf;

        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        if (rrf)
        {
            std::cout << (*rrf).getName() << " form was successfully created ny an Intern." << std::endl;
            headBureaucrat.signForm(*rrf);
            headBureaucrat.executeForm(*rrf);
            delete rrf;
        }
         else
            std::cout << (*rrf).getName() << " form couldn't be created." << std::endl;
    }

    {
        Intern promisingIntern;
        Form* rrf;

        rrf = promisingIntern.makeForm("robotomy request", "Bender");
        if (rrf)
        {
            std::cout << (*rrf).getName() << " form was successfully created ny an Intern." << std::endl;
            headBureaucrat.signForm(*rrf);
            headBureaucrat.executeForm(*rrf);
            delete rrf;
        }
         else
            std::cout << (*rrf).getName() << " form couldn't be created." << std::endl;
    }

    {
        Intern diligentIntern;
        Form* rrf;

        rrf = diligentIntern.makeForm("presidential pardon", "Bender");
        if (rrf)
        {
            std::cout << (*rrf).getName() << " form was successfully created ny an Intern." << std::endl;
            headBureaucrat.signForm(*rrf);
            headBureaucrat.executeForm(*rrf);
            delete rrf;
        }
         else
            std::cout << (*rrf).getName() << " form couldn't be created." << std::endl;
    }

    {
        Intern lazyIntern;
        Form* rrf;

        rrf = lazyIntern.makeForm("a", "Bender");
        if (rrf)
        {
            std::cout << (*rrf).getName() << " form was successfully created ny an Intern." << std::endl;
            headBureaucrat.signForm(*rrf);
            headBureaucrat.executeForm(*rrf);
            delete rrf;
        }
        else
            std::cout << "The form couldn't be created by the intern." << std::endl;
    }
}