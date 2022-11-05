/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:46:27 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 04:49:49 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& a)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = a;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& a)
{
    type = a.getType();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "makeSound: one!!" << std::endl;
}