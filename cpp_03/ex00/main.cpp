/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:08:44 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 02:19:46 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Bulbasaur");
    std::cout << "hitpoints: " << a.getHP() << std::endl;
    std::cout << "energyPoints: " << a.getEnergyPoints() << std::endl;
    std::cout << "attackDamage: " << a.getDamage() << std::endl;
    a.takeDamage(3);
    ClapTrap b("Charmander");
    b.takeDamage(3);
    ClapTrap c;
    c = b;
    b.takeDamage(3);

    ClapTrap d("Pikachu");
    d.attack("Starmie");
    d.takeDamage(4);
    d.beRepaired(10);
}