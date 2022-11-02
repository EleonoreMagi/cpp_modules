/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:54:17 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/03 00:18:52 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.cpp"

int		main(void)
{
	std::string	input;
	PhoneEntry	friends[8];
	int		friend_count;
	int		replacement_count;

	input = welcome_prompt();
	friend_count = 0;
	replacement_count = 0;
	while (input != "EXIT")
	{
		if (input == "ADD" && friend_count >= 8)
		{
			std::cout << "You can't add any more entries to the phonebook. The oldest entry will be replaced by a new one." << std::endl;
			friends[replacement_count++] = add_entry();
			if (replacement_count == 8)
				replacement_count = 0;

		}
		else if (input == "ADD")
			friends[friend_count++] = add_entry();
		else if (input == "SEARCH" && friend_count > 0)
			search_entry(friends, friend_count);
		else if (input == "SEARCH")
			std::cout << "No entries in the phonebook. Add some first." << std::endl;
		else
			std::cout << "Command not recognised. Please write ADD, SEARCH or EXIT." << std::endl;
		std::cout << "What's next? ";
		getline(std::cin, input);
	}
	std::cout << "Closing the phonebook... See you later!" << std::endl;
}