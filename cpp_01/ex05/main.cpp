/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:53:10 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 22:54:20 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	std::string levels[5] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
		"else"
	};

	Harl	harl;

	for (long unsigned int i = 0; i < levels->length(); i++)
	{
		harl.complain(levels[i]);
	}
	return 0;
}
