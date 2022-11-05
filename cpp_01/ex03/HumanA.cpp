/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:47:14 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 21:56:39 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
    std::cout << "HumanA " << name << " created wielding ";
	std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA " << this->_name << " is no more!" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his/her "
		<< this->_weapon.getType() << std::endl; 
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}
