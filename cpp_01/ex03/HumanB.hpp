/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:46:06 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 21:56:55 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon		*_weapon;

public:
	HumanB(std::string name);
	~HumanB(void);

	void 	attack(void);
	void	setWeapon(Weapon &weapon);
};

#endif
