/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:08:27 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 23:52:46 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat a;
	std::cout << a << std::endl;

	Bureaucrat Eve("Eve");
	std::cout << Eve << std::endl;

	Bureaucrat c(10);
	std::cout << c << std::endl;
	try
    {
        Bureaucrat Jo("Jo", 160);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

	try
    {
        Bureaucrat Pi("Pi", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	std::cout << std::endl;

	int grade = 15;
    std::string name = "Lorah";

    Bureaucrat Lorah(name, grade);
    std::cout << Lorah << std::endl;
    Lorah.incrementGrade();
    std::cout << "increment: " << Lorah << std::endl;
    Lorah.decrementGrade();
    std::cout << "decrement: " << Lorah << std::endl;

    std::cout << "-----" << std::endl;
    try
    {
        Bureaucrat Karen(-1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat Karen(1);
        Karen.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat Karen(150);
        Karen.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
