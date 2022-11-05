/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:01:40 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 04:27:08 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("(no_name)"), _hp(10), _energy_points(10), _damage(0)
{
	std::cout << "ClapTrap " << this->_name << " was created with default constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hp(10), _energy_points(10), _damage(0)
{
	std::cout << "ClapTrap " << this->_name << " was created." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " is no more!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "ClapTrap " << this->_name << " was copied." << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energy_points && this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacked " << target << ", causing " << this->_damage << " point(s) of damage!" << std::endl;
		this->_energy_points--;
	}
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead! You'll be remembered!" << std::endl;
	else if (!this->_energy_points)
		std::cout << "ClapTrap " << this->_name << " is out of energy points! No more attacking for now." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
		this->_hp -= amount;
	}
	else
		std::cout << "Stop right now! ClapTrap " << this->_name << " is already dead, that's cruel!" << std::endl;
	if (this->_hp < 0)
		this->_hp = 0;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp > 0 && this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name << " is healed by " << amount << " point(s)." << std::endl;
		this->_hp += amount;
		this->_energy_points--;
	}
	if (this->_hp <= 0)
		std::cout << "Cannot heal because ClapTrap " << this->_name << " is already dead." << std::endl;
	else if (!this->_energy_points)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Assignment operator for ClapTrap called." << std::endl;
	this->_name = copy.getName();
	this->_hp = copy.getHP();
	this->_energy_points = copy.getEnergyPoints();
	this->_damage = copy.getDamage();
	return (*this);
}

std::string const	&ClapTrap::getName(void) const
{
	return (_name);
}

unsigned int const	&ClapTrap::getHP(void) const
{
	return (_hp);
}

unsigned int const	&ClapTrap::getEnergyPoints(void) const
{
	return (_energy_points);
}

unsigned int const	&ClapTrap::getDamage(void) const
{
	return (_damage);
}

void	ClapTrap::setName(std::string const &name)
{
	this->_name = name;
}

void	ClapTrap::setHP(int const &value)
{
	this->_hp = value;
}

void	ClapTrap::setEnergyPoints(int const &value)
{
	this->_energy_points = value;
}

void	ClapTrap::setDamage(int const &value)
{
	this->_damage = value;
}