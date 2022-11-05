/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:51:58 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 01:54:46 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_value;
		static const int	_fract;
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);
		Fixed(Fixed const &copy);
		
		Fixed	&operator=(Fixed const &copy);
		Fixed	operator+(Fixed const &copy) const;
		Fixed	operator-(Fixed const &copy) const;
		Fixed	operator*(Fixed const &copy) const;
		Fixed	operator/(Fixed const &copy) const;
		bool	operator==(Fixed const &copy) const;
		bool	operator!=(Fixed const &copy) const;
		bool	operator<=(Fixed const &copy) const;
		bool	operator>=(Fixed const &copy) const;
		bool	operator<(Fixed const &copy) const;
		bool	operator>(Fixed const &copy) const;
		
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int value);
		Fixed	operator--(int value);
		
		static const Fixed	&min(Fixed const &copy1, Fixed const &copy2);
		static const Fixed	&max(Fixed const &copy1, Fixed const &copy2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif