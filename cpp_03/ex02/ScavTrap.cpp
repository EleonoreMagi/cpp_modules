/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:21:45 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 04:25:38 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap was created with default constructor." << std::endl;
    _hp = 100;
    _energy_points = 50;
    _damage = 20;
}

ScavTrap::ScavTrap(const std::string& name)
{
    this->_name = name;
    _hp = 100;
    _energy_points = 50;
    _damage = 20;
    std::cout << "ScavTrap " << _name << "was created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& a)
{
    std::cout << "ScavTrap was copied." << std::endl;
    *this = a;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " is no more!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& a)
{
    _name = a.getName();
    _hp = a.getHP();
    _energy_points = a.getEnergyPoints();
    _damage = a.getDamage();
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " point(s) of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " have entered in Gate keeper mode. (No way to check though.)" << std::endl;
}