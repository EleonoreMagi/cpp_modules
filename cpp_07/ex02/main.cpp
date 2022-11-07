/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:33:21 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 04:50:29 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
#define MIN_VAL 30

int main(int argc, char** argv)
{
    std::cout << "----checking copying and saving-------" << std::endl;
    std::cout << std::endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	Array<int> tmp = numbers;
	Array<int> test(tmp);

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "Error: did not save the same value." << std::endl;
			return 1;
		}
	}
    std::cout << "Saving checked." << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
	{
		if (tmp[i] != test[i])
		{
			std::cerr << "Error: copying not done properly." << std::endl;
			return 1;
		}
	}
    std::cout << "Copying checked." << std::endl;
    std::cout << std::endl;
    std::cout << "----checking negative index-------" << std::endl;
    std::cout << "" << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << std::endl;
    std::cout << "-----checking max index (= MAX_VAL)-------" << std::endl;
    std::cout << std::endl;
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << std::endl;
    std::cout << "------check random fill of the array------" << std::endl;
    std::cout << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//

    std::cout << std::endl;
    std::cout << "------checking index bounds------" << std::endl;
    std::cout << std::endl;
	Array<int> numberstest(MIN_VAL);
	for (size_t i = 0; i <= MIN_VAL; i++)
	{
		try
		{
			numberstest[i] = MIN_VAL- i;
		}
		catch(const std::exception& e)
		{
			std::cerr << "This error is caused because we are trying to set index 30! " << e.what() << '\n';
		}
	}

    std::cout << std::endl;
    std::cout << "------exiting and filled array------" << std::endl;
    std::cout << std::endl;
	for (size_t i = 0; i < MIN_VAL; i++)
	{
		std::cout << "Value of numberstest[" << i << "] is: " << numberstest[i] << std::endl;
	}
	return (0);
}