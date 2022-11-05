/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:08:44 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 03:21:20 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a;
    std::cout << "hitpoints: " << a.getHP() << std::endl;
    std::cout << "energyPoints: " << a.getEnergyPoints() << std::endl;
    std::cout << "attackDamage: " << a.getDamage() << std::endl;
    std::cout << std::endl;

    a.takeDamage(3);
    ScavTrap b(a);
    b.takeDamage(3);
    ScavTrap c;
    c = b;
    b.takeDamage(3);
    std::cout << std::endl;

    ScavTrap d("Pikachu");
    d.attack("Starmie");
    d.takeDamage(4);
    d.beRepaired(10);
    d.guardGate();
}