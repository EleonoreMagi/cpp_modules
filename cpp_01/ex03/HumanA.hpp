/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:44:13 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 21:55:55 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon&		_weapon;

public:
	HumanA(std::string name, Weapon &type);
	~HumanA();

	void    attack(void);
    void	setWeapon(Weapon weapon);
};

#endif
