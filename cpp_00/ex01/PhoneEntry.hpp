/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneEntry.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:45:58 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/03 22:16:02 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

class PhoneEntry {

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

public:
	PhoneEntry(void);
	~PhoneEntry(void);

	std::string get_first_name(void) const;
	bool		set_first_name(std::string first_name);

	std::string	get_last_name(void) const;
	bool		set_last_name(std::string last_name);

	std::string	get_nickname(void) const;
	bool		set_nickname(std::string nickname);

	std::string	get_phone_number(void) const;
	bool		set_phone_number(std::string phone_number);

	std::string	get_darkest_secret(void) const;
	bool		set_darkest_secret(std::string darkest_secret);

	std::string	trim_length(std::string info);
	void		print_info(void);
};