/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:49:54 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 00:41:19 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}


void Harl::complain( std::string level ) {
	void (Harl::*ptr_complain[4])(void) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};

	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	long unsigned int	i = 0;

	while (i < levels->length() && levels[i] != level)
		i++;

	switch (i)
	{
		case 0:
			(this->*ptr_complain[0])();
			std::cout << std::endl;
		case 1:
			(this->*ptr_complain[1])();
			std::cout << std::endl;
		case 2:
			(this->*ptr_complain[2])();
			std::cout << std::endl;
		case 3:
			(this->*ptr_complain[3])();
			std::cout << std::endl;
			break;

		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
			break;
	}

}

void Harl::_debug( void ) {
	std::cout
		<< "[ DEBUG ]"<< std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl;

}

void Harl::_info( void ) {
	std::cout
		<< "[ INFO ]"<< std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn’t put"
		<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl;
}

void Harl::_warning( void ) {
	std::cout
	<< "[ WARNING ]"<< std::endl
		<< "I think I deserve to have some extra bacon for free."
		<< "I’ve been coming for years whereas you started working here since last month."
		<< std::endl;
}

void Harl::_error( void ) {
	std::cout
		<< "[ ERROR ]"<< std::endl
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;	
}
