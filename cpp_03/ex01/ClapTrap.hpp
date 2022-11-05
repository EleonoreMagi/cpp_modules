/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:01:42 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 03:15:10 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		unsigned int	_hp;
		unsigned int	_energy_points;
		unsigned int	_damage;
	public:
		ClapTrap(void);
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap(void);
		
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		ClapTrap	&operator=(ClapTrap const &copy);

		std::string const			&getName(void) const;
		unsigned int const			&getHP(void) const;
		unsigned int const			&getEnergyPoints(void) const;
		unsigned int const			&getDamage(void) const;
		void						setName(std::string const &name);
		void						setHP(int const &value);
		void						setEnergyPoints(int const &value);
		void						setDamage(int const &value);
};

#endif