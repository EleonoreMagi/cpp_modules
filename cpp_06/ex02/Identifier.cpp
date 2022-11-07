/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 03:41:38 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 03:49:51 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identifier.hpp"

Identifier::Identifier() {}

Identifier::~Identifier() {}

Base* Identifier::generate(void)
{
    int randam_value = std::rand() % 3;
    Base* base;

    switch (randam_value)
    {
    case 0:
        base = new A;
        break;
    case 1:
        base = new B;
        break;
    case 2:
        base = new C;
        break;
    default:
        base = NULL;
    }
    return base;
}

void Identifier::identify(Base* p)
{
    std::cout << "Pointer identified as: ";
    if (dynamic_cast<A*>(p))
    {
        std::cout << "A" << std::endl;
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "C" << std::endl;
    }
    else
        std::cout << "type unknown" << std::endl;
}

void Identifier::identify(Base& p)
{
    std::cout << "Reference identified as: ";
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch(std::exception &e) { }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch(std::exception &e) { }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
   catch(std::exception &e) { }
   std::cout << "type unknown" << std::endl;
}