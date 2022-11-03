/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:35:39 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 00:31:24 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void 	announce(void);
	void	setName(std::string name);
private:
	std::string _name;
};


Zombie*	newZombie( std::string name );
void	randomChump( std::string name );


#endif