/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:54:22 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/03 22:29:33 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	this->_current = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string	resize(std::string content)
{
	if (content.length() > 10)
	{
		content.erase(content.begin() + 9, content.end());
		content.append(".");
	}
	return (content);
}

void	PhoneBook::display_contacts()
{
	std::cout << "Displaying the phonebook..." << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i < (int)this->_index; i++)
	{
		std::cout
		<< "|" << std::setw(10) << i + 1
		<< "|" << std::setw(10) << resize(_phonebook[i].get_first_name())
		<< "|" << std::setw(10) << resize(_phonebook[i].get_last_name())
		<< "|" << std::setw(10) << resize(_phonebook[i].get_nickname()) << "|"
		<< std::endl;
	}
}

void	PhoneBook::search_entry()
{
	unsigned int id;
	
	std::cout << "Displaying the phonebook..." << std::endl;
	display_contacts();
	std::cout << "Which contact do you want to see? " << std::endl;
	std::cout << "Enter The index: ";
	while (!(std::cin >> id) || id < 1 || id > this->_index)
	{
		std::cout << "Wrong input, please select an existing id: ";
		std::cin.clear();
		std::cin.ignore(10000,'\n');
	}
	std::cout << "First Name: " << this->_phonebook[id - 1].get_first_name() << std::endl;
	std::cout << "Last Name: " << this->_phonebook[id - 1].get_last_name() << std::endl;
	std::cout << "NickeName: " << this->_phonebook[id - 1].get_nickname() << std::endl;
	std::cout << "Phone Number: " << this->_phonebook[id - 1].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << this->_phonebook[id - 1].get_darkest_secret() << std::endl;
	std::cin.clear();
	std::cin.ignore(10000,'\n');
}

void	PhoneBook::add_entry()
{
	PhoneEntry		new_friend;
	std::string	tmp;

	std::cout << "Adding new entry to the phonebook..." << std::endl;
	std::cout << "First name: ";
	std::cin.clear();
	getline(std::cin, tmp);
	new_friend.set_first_name(tmp);
	std::cout << "Last name: ";
	getline(std::cin, tmp);
	new_friend.set_last_name(tmp);
	std::cout << "Nickname: ";
	getline(std::cin, tmp);
	new_friend.set_nickname(tmp);
	std::cout << "Phone number: ";
	getline(std::cin, tmp);
	new_friend.set_phone_number(tmp);
	std::cout << "Darkest secret: ";
	getline(std::cin, tmp);
	new_friend.set_darkest_secret(tmp);
	this->_phonebook[_current % 8] = new_friend;
	this->_current++;
	if (this->_current <= 8)
		this->_index = this->_current;
}

void	PhoneBook::welcome_prompt()
{
	std::cout << "Welcome to your personal phonebook." << std::endl
		<< "Use SEARCH to browse your contacts, " << std::endl
		<< "ADD to add one, " << std::endl
		<< "and EXIT to close the phonebook. " << std::endl
		<< "How can I help you? ";
}
