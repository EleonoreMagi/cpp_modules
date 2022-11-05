/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:53:10 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 23:04:23 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		Harl	harl;
		harl.complain(av[1]);
	}
	else if (ac != 2)
	{
		std::cout << "Wrong input. Please write a command like this: ./harlFilter <complain_level>" << std::endl;
		return (1);
	}

	return (0);
}
