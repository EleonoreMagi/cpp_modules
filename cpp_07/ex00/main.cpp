/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:02:31 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 04:12:05 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main()
{
    {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    }
    std::cout << "------" << std::endl;
    {
        std::string c = "word1";
        std::string d = "word2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    std::cout << "------" << std::endl;
    {
        int a = 1;
        int b = 2;
        std::cout << "a: " << a << ", b: " << b << std::endl;
        swap(a, b);
        std::cout << "After a swap: ";
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
    std::cout << "------" << std::endl;
    {
        double a = 1;
        double b = 2;
        std::cout << "a: " << a << ", b: " << b << std::endl;
        swap(a, b);
        std::cout << "After a swap: ";
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
    std::cout << "------" << std::endl;
    {
        std::string a = "first word";
        std::string b = "last word";
        std::cout << "a: " << a << ", b: " << b << std::endl;
        swap(a, b);
        std::cout << "After a swap: ";
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
    std::cout << "------" << std::endl;
    {
        int a = 1;
        int b = 2;
        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "a ptr: " << &a << ", b ptr: " << &b << std::endl;
        std::cout << "min: " << min(a, b) << std::endl;
        std::cout << "min ptr: " << &min(a, b) << std::endl;
    }
    std::cout << "------" << std::endl;
    {
        double a = 1;
        double b = 1;
        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "a ptr: " << &a << ", b ptr: " << &b << std::endl;
        std::cout << "min: " << min(a, b) << std::endl;
        std::cout << "min ptr: " << &min(a, b) << std::endl;
    }
    std::cout << "------" << std::endl;
    {
        int a = 1;
        int b = 2;
        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "a ptr: " << &a << ", b ptr: " << &b << std::endl;
        std::cout << "max: " << max(a, b) << std::endl;
        std::cout << "max ptr: " << &max(a, b) << std::endl;
    }
    std::cout << "------" << std::endl;
    {
        double a = 1;
        double b = 1;
        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "a ptr: " << &a << ", b ptr: " << &b << std::endl;
        std::cout << "max: " << max(a, b) << std::endl;
        std::cout << "max ptr: " << &max(a, b) << std::endl;
    }
}