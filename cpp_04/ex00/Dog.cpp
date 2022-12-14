/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:46:27 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 17:18:11 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    _type = "Dog";
    std::cout << "Dog created with a default constructor." << std::endl;
}

Dog::Dog(const Dog& a)
{
    std::cout << "Dog copied." << std::endl;
    *this = a;
}

Dog::~Dog(void)
{
    std::cout << "Dog destroyed." << std::endl;
}

Dog& Dog::operator=(const Dog& a)
{
    _type = a.getType();
    return *this;
}

void Dog::makeSound(void) const
{
   std::cout << "Cat makes a sound of wooooof!!" << std::endl;
}