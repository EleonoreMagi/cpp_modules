/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:43:21 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 22:49:58 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);

public:
	Harl(void);
	~Harl(void);

	void complain(std::string level);

};


#endif
