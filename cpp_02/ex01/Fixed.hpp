/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:51:58 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 01:24:51 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_value;
		static const int	_fract;
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const &copy);
		~Fixed(void);

		Fixed	&operator=(Fixed const &copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &a);

#endif