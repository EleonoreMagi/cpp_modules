/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 03:02:50 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 03:13:22 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

int main(void)
{
    Data data;

    data.x = 123;
    data.y = 987;
    std::cout << "x: " << data.x << std::endl;
    std::cout << "y: " << data.y << std::endl;
    std::cout << "ptr: " << &data << std::endl;

    uintptr_t raw = serialize(&data);
    std::cout << "raw: " << raw << std::endl;
    Data* ptr = deserialize(raw);
    std::cout << "ptr: " << ptr << std::endl;

    std::cout << "x: " << ptr->x << std::endl;
    std::cout << "y: " << ptr->y << std::endl;
    std::cout << "ptr: " << ptr << std::endl;
}