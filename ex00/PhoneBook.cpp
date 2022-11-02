/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:54:22 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/03 00:28:35 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->amount = 0;
}

PhoneBook::~PhoneBook()
{
}

void	search_entry(PhoneEntry phonebook[8], int entry_count)
{
	int		id;

	std::cout << "Displaying the phonebook..." << std::endl;
	for (int i = 0; i < entry_count; i++)
		(phonebook[i]).print_summary(i + 1);
	std::cout << "Which contact do you want to see? ";
	while (!(std::cin >> id) || id < 1 || id > entry_count)
	{
		std::cout << "Wrong input, please select an existing id: ";
		std::cin.clear();
		std::cin.ignore(10000,'\n');
	}
	phonebook[id - 1].print_info();
	std::cin.clear();
	std::cin.ignore(10000,'\n');
}

PhoneEntry	add_entry()
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
	return (new_friend);
}

std::string	welcome_prompt()
{
	std::string	input;

	std::cout << "Welcome to your personal phonebook." << std::endl
		<< "Use SEARCH to browse your contacts, ADD to add one, "
		<< "and EXIT to close the phonebook" << std::endl
		<< "How can I help you? ";
	getline(std::cin, input);
	return (input);
}
