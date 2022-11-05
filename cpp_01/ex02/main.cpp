/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:32:04 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/04 21:41:21 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Address of:" << std::endl
		<< "- string: " << &string << std::endl
		<< "- stringPTR: " << stringPTR << std::endl
		<< "- stringREF: " << &stringREF << std::endl;

	std::cout << std::endl << "Value:" << std::endl
		<< "- of the string: " << string << std::endl
		<< "- pointed to by stringPTR: " << *stringPTR << std::endl
		<< "- pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}