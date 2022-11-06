/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:08:27 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 00:33:28 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::srand(std::time(NULL));
    {
        PresidentialPardonForm pre("amnesty");
        Bureaucrat bureaucrat("bureaucrat Ann", 1);

        bureaucrat.signForm(pre);
        bureaucrat.executeForm(pre);
        std::cout << bureaucrat << std::endl;
        std::cout << pre << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        PresidentialPardonForm pre("amnesty");
        Bureaucrat bureaucrat("bureaucrat Bob", 10);

        bureaucrat.signForm(pre);
        bureaucrat.executeForm(pre);
        std::cout << bureaucrat << std::endl;
        std::cout << pre << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        PresidentialPardonForm pre("amnesty");
        Bureaucrat bureaucrat("bureaucrat Vincent", 1);

        pre.beSigned(bureaucrat);
        pre.execute(bureaucrat);
        std::cout << bureaucrat << std::endl;
        std::cout << pre << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        PresidentialPardonForm pre("amnesty");
        Bureaucrat bureaucrat("bureaucrat Robert", 1);

        bureaucrat.executeForm(pre);
        std::cout << bureaucrat << std::endl;
        std::cout << pre << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        RobotomyRequestForm rob("robotomization");
        Bureaucrat bureaucrat("bureaucrat Kevin", 1);

        bureaucrat.signForm(rob);
        bureaucrat.executeForm(rob);
        std::cout << bureaucrat << std::endl;
        std::cout << rob << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        RobotomyRequestForm rob("robotomization");
        Bureaucrat bureaucrat("bureaucrat Sarah", 1);

        bureaucrat.signForm(rob);
        bureaucrat.executeForm(rob);
        std::cout << bureaucrat << std::endl;
        std::cout << rob << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        RobotomyRequestForm rob("robotomization");
        Bureaucrat bureaucrat("bureaucrat Lorah", 1);

        bureaucrat.signForm(rob);
        bureaucrat.executeForm(rob);
        std::cout << bureaucrat << std::endl;
        std::cout << rob << std::endl;
    }

    std::cout << "------------" << std::endl;

    {
        ShrubberyCreationForm shr("treeDraw");
        Bureaucrat bureaucrat("bureaucrat Phil", 1);

        bureaucrat.signForm(shr);
        bureaucrat.executeForm(shr);
        std::cout << bureaucrat << std::endl;
        std::cout << shr << std::endl;
    }
}