/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:18:21 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/03 00:28:36 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneEntry.hpp"

class PhoneBook
{
private:
	PhoneEntry	phonebook[8];
	int		amount;
public:
	PhoneBook();
	virtual ~PhoneBook();

	void		search_entry(PhoneEntry phonebook[8], int entry_count);
	PhoneEntry	add_entry();
	std::string	welcome_prompt();
};
