/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:08:44 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 04:30:35 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a;
    std::cout << "hitpoints: " << a.getHP() << std::endl;
    std::cout << "energyPoints: " << a.getEnergyPoints() << std::endl;
    std::cout << "attackDamage: " << a.getDamage() << std::endl;
    std::cout << std::endl;

    a.takeDamage(3);
    DiamondTrap b(a);
    b.takeDamage(3);
    DiamondTrap c;
    c = b;
    b.takeDamage(3);
    std::cout << std::endl;

    DiamondTrap d("Pikachu");
    d.attack("Eve");
    d.takeDamage(4);
    d.beRepaired(10);
    d.highFivesGuys();
    d.whoAmI();
}