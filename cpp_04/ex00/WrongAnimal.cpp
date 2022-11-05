/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:02:55 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 17:17:35 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal created with a default constructor." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a)
{
    std::cout << "WrongAnimal copied." << std::endl;
    *this = a;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destroyed." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
    std::cout << "Assignment operator for WrongAnimal called." << std::endl;
    _type = a.getType();
    return *this;
}

const std::string& WrongAnimal::getType(void) const
{
    return _type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal makes a sound: ...(even less unrecognizable)..." << std::endl;
}