/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:01:54 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 17:18:36 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    _type = "WrongCat";
    std::cout << "WrongCat created with a default constructor." << std::endl;
}

WrongCat::WrongCat(const WrongCat& a)
{
    std::cout << "WrongCat copied." << std::endl;
    *this = a;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destroyed." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& a)
{
    std::cout << "Assignment operator for WrongCat called." << std::endl;
    _type = a.getType();
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat makes a sound of kyaaa!!" << std::endl;
}