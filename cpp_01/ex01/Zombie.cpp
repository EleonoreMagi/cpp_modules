/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:35:58 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 00:31:25 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
	this->_name = "(no_name)";
	std::cout << _name << " was created" << std::endl; 
}

Zombie::Zombie(std::string name): _name(name)
{
    this->_name = name;
	std::cout << _name << " was created" << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << _name << " is no more!" << std::endl; 
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
