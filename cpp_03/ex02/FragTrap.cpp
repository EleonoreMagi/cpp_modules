/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 03:23:20 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 03:42:05 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap was created with default constructor." << std::endl;
    _hp = 100;
    _energy_points = 100;
    _damage = 30;
}

FragTrap::FragTrap(const std::string& name)
{
    this->_name = name;
    _hp = 100;
    _energy_points = 100;
    _damage = 30;
    std::cout << "FragTrap" << _name << "was created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& a)
{
    std::cout << "FragTrap was created with copy constructor." << std::endl;
    *this = a;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " is no more!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& a)
{
    _name = a.getName();
    _hp = a.getHP();
    _energy_points = a.getEnergyPoints();
    _damage = a.getDamage();
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _damage << " point(s) of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " gives everyone a HIGH FIVE! Life is awesome! " << std::endl;
}