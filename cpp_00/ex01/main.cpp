/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:54:17 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/03 22:22:00 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"

int		main(void)
{
	std::string	input;
	PhoneBook	friends;
	int		friend_count;

	friends.welcome_prompt();
	getline(std::cin, input);
	friend_count = 0;
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			if (friend_count >= 8)
				std::cout << "You can't add any more entries to the phonebook. The oldest entry will be replaced by a new one." << std::endl;
			friends.add_entry();
			friend_count++;
		}
		else if (input == "SEARCH" && friend_count > 0)
			friends.search_entry();
		else if (input == "SEARCH")
			std::cout << "No entries in the phonebook. Add some first." << std::endl;
		else
			std::cout << "Command not recognised. Please write ADD, SEARCH or EXIT." << std::endl;
		std::cout << "What's next? ";
		getline(std::cin, input);
	}
	std::cout << "Closing the phonebook... See you later!" << std::endl;
}