/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 01:26:17 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 02:57:13 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CLASS_HPP
# define SCALAR_CLASS_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include <limits>


class Scalar {

public:
	Scalar(void);
    Scalar(std::string str);
	Scalar(Scalar const &copy);
	virtual ~Scalar(void);

	Scalar		&operator=(Scalar const &rhs);

    void        convert(char *str);
	std::string	findType(std::string literal) const;
	void		print(char c) const;
	void		print(int i) const;
	void		print(float f) const;
	void		print(double i) const;
};

#endif