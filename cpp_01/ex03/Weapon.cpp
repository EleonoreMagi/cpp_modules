/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:47:48 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 21:49:51 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
}


Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string& Weapon::getType()
{
	return (this->_type);
} 
