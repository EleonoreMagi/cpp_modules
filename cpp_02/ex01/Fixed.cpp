/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:52:44 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 01:33:16 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fract = 8;

static	float ft_pow(float base, int exp)
{
	float	result;

	if (!exp)
		return (1);
	if (exp < 0)
	{
		base = 1 / base;
		exp *= -1;
	}
	result = base;
	while (--exp)
		result *= base;
	return (result);
}

Fixed::Fixed(void): _value(0)
{
	std::cout << "Fixed object created with default constructor" << std::endl; 
}

Fixed::Fixed(const int value): _value(value * ft_pow(2, this->_fract))
{  
	std::cout << "Fixed object created with int constructor" << std::endl; 
} 

Fixed::Fixed(const float value): _value(value * ft_pow(2, this->_fract))
{  
	std::cout << "Fixed object created with float constructor" << std::endl; 
} 

Fixed::~Fixed(void)
{
	std::cout << "Fixed object destroyed" << std::endl;
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Fixed object copied" << std::endl;
	*this = copy;
}

float	Fixed::toFloat(void) const
{
	return (this->_value * ft_pow(2, -this->_fract));
}

int	Fixed::toInt(void) const
{
	return (this->_value * ft_pow(2, -this->_fract));
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_value = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}
