/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:08:44 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 03:34:45 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a;
    std::cout << "hitpoints: " << a.getHP() << std::endl;
    std::cout << "energyPoints: " << a.getEnergyPoints() << std::endl;
    std::cout << "attackDamage: " << a.getDamage() << std::endl;
    std::cout << std::endl;

    a.takeDamage(3);
    FragTrap b(a);
    b.takeDamage(3);
    FragTrap c;
    c = b;
    b.takeDamage(3);
    std::cout << std::endl;

    FragTrap d("Pikachu");
    d.attack("Eve");
    d.takeDamage(4);
    d.beRepaired(10);
    d.highFivesGuys();
}