/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 01:25:54 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 02:27:21 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: you must only enter one argument." << std::endl;
		return (1);
	}
	if (argv[1][0] == '\0') {
		std::cout << "Error: no a valid argument, nothing to convert." << std::endl;
		return (2);
	}

    Scalar converter;
	converter.convert(argv[1]);
	return (0);
}