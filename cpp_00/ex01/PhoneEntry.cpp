/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneEntry.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:48:38 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/03 22:16:14 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneEntry.hpp"

PhoneEntry::PhoneEntry(void)
{
}

PhoneEntry::~PhoneEntry(void)
{
}

std::string PhoneEntry::get_first_name(void) const
{
	return (this->_first_name);
}

bool		PhoneEntry::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
	return (true);
}

std::string	PhoneEntry::get_last_name(void) const
{
	return (this->_last_name);
}

bool		PhoneEntry::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
	return (true);
}

std::string PhoneEntry::get_nickname(void) const
{
	return (this->_nickname);
}

bool		PhoneEntry::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
	return (true);
}

std::string PhoneEntry::get_phone_number(void) const
{
	return (this->_phone_number);
}

bool		PhoneEntry::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
	return (true);
}

std::string PhoneEntry::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

bool		PhoneEntry::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
	return (true);
}

void	PhoneEntry::print_info()
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}