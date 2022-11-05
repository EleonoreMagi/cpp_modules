/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:43:16 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 18:39:14 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal created with a default constructor." << std::endl;
}

Animal::Animal(const Animal& a)
{
    std::cout << "Animal copied." << std::endl;
    *this = a;
}

Animal::~Animal(void)
{
    std::cout << "Animal destroyed." << std::endl;
}

Animal& Animal::operator=(const Animal& a)
{
    std::cout << "Assignment operator for Animal called." << std::endl;
    _type = a.getType();
    return *this;
}

const std::string& Animal::getType(void) const
{
    return (this->_type);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal makes a sound: ...(unrecognizable)..." << std::endl;
}