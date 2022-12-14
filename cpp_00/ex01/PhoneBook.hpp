/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:18:21 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/03 22:13:26 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
#include "PhoneEntry.hpp"

class PhoneBook
{
private:
	PhoneEntry		_phonebook[8];
	unsigned int	_index;
	unsigned int	_current;
public:
	PhoneBook(void);
	virtual ~PhoneBook(void);

	void		search_entry(void);
	void		add_entry(void);
	void		welcome_prompt(void);
	void		display_contacts(void);
};
