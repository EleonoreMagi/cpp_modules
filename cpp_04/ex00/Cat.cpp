/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:46:12 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 18:30:28 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    _type = "Cat";
    std::cout << "Cat created with a default constructor." << std::endl;
}

Cat::Cat(const Cat& a)
{
    std::cout << "Cat copied." << std::endl;
    *this = a;
}

Cat::~Cat(void)
{
    std::cout << "Cat destroyed." << std::endl;
}

Cat& Cat::operator=(const Cat& a)
{
    _type = a.getType();
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat makes a sound of nyaaaaaaaaaa!!" << std::endl;
}

