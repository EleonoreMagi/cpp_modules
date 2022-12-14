/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:30:11 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 21:28:48 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	size;

	size = 20;
	Zombie *horde = zombieHorde(size, "Bob");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	
	delete [] horde;
	return	(0);
}