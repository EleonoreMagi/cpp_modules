/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:44:35 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 21:57:21 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string type);
	~Weapon(void);

	void                setType(std::string type); 
	const std::string&  getType(void); 
};

#endif
