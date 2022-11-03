/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:40:18 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 00:19:56 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie z1 = Zombie("Plain Old Zombie");
	z1.announce();

	
	std::cout << std::endl << "Allocation through newZombie function: " << std::endl;
	Zombie* z2 = newZombie("New Zombie");
	z2->announce();
    std::cout << "_______" << std::endl;

	std::cout << std::endl << "Stack memory allocation through randomChump: " << std::endl;
	randomChump("Random Stupid Zombie");
    std::cout << "_______" << std::endl;

    delete z2;

	std::cout << std::endl << "Finish" << std::endl
			<< "_______" << std::endl;

	return 0;
}