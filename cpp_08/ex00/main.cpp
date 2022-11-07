/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:56:06 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 04:59:05 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int	main(void)
{
	int	* find;
	std::vector<int> arr;

	try
	{
		arr.push_back(10);
		arr.push_back(20);
		find = easyfind(arr, 20);
		std::cout << "Found int inside the container: number " << *find << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::vector<int> arr2(10, -1);
		find = easyfind(arr2, 3);
		std::cout << "Found int inside the container: number " << *find << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}