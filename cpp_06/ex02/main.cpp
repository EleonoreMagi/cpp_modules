/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 03:21:19 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 03:56:26 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identifier.hpp"


int main()
{
    std::srand(std::time(NULL));
    Identifier typecheck;
    Base* base = typecheck.generate();
    Base non_inherit;
    std::cout << std::endl;

    typecheck.identify(base);
    typecheck.identify(NULL);
    typecheck.identify(&non_inherit);
    std::cout << std::endl;
    typecheck.identify(*base);
    typecheck.identify(&non_inherit);
    delete base;

    std::cout << "------------------------------------"<< std::endl;
	srand(time(NULL));

	for (int i = 0; i < 20; i++)
	{
		Base *o = typecheck.generate();
		std::cout << "Test " << i + 1 << ": ";
		typecheck.identify(o);
		typecheck.identify(*o);
		std::cout << std::endl;
		delete o;
	}

	return (0);
}