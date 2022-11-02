/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneEntry.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:48:38 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/03 00:28:38 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneEntry.hpp"

std::string PhoneEntry::get_first_name(void) const
{
	return (this->first_name);
}

bool		PhoneEntry::set_first_name(std::string first_name)
{
	this->first_name = first_name;
	return (true);
}

std::string	PhoneEntry::get_last_name(void) const
{
	return (this->last_name);
}

bool		PhoneEntry::set_last_name(std::string last_name)
{
	this->last_name = last_name;
	return (true);
}

std::string PhoneEntry::get_nickname(void) const
{
	return (this->nickname);
}

bool		PhoneEntry::set_nickname(std::string nickname)
{
	this->nickname = nickname;
	return (true);
}

std::string PhoneEntry::get_phone_number(void) const
{
	return (this->phone_number);
}

bool		PhoneEntry::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
	return (true);
}

std::string PhoneEntry::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}

bool		PhoneEntry::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
	return (true);
}

std::string	PhoneEntry::trim_length(std::string info)
{
	if (info.length() >= 10)
		info = info.substr(0, 9).append(".");
	return (info);
}

void	PhoneEntry::print_summary(int id)
{
	std::cout << std::setfill(' ') << std::setw(10) << id;
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << trim_length(first_name);
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << trim_length(last_name);
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << trim_length(nickname);
	std::cout << " |";
	std::cout << std::endl;
}

void	PhoneEntry::print_info()
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}