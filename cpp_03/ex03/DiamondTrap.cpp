/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 03:38:51 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 04:29:18 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::_name = "default_clap_name";
	std::cout << "DiamondTrap " << this->_name << " created with default constructor." << std::endl;
}
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), _name(name)
{
    this->_name = name;
	this->_hp = _hp;
	this->_energy_points = _energy_points;
	this->_damage = _damage;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& a): ClapTrap(a)
{
    this->_name = FragTrap::_name;
	this->_hp = FragTrap::_hp;
	this->_energy_points = ScavTrap::_energy_points;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap " << this->_name << " created with copy constructor." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " is no more!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& a)
{
    _name = a.getName();
    FragTrap::operator=(a);
    return *this;
}

void DiamondTrap::whoAmI()
{
    if (this->_hp <= 0)
		std::cout << "Cannot run whoAmI because: DiamondTrap " << this->_name << " is dead." << std::endl;
	else
        std::cout << "My name is " << _name << ", my parent's name is " << ClapTrap::_name << std::endl;
}