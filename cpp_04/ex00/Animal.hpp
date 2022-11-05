/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:43:00 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 04:47:42 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string _type;

public:
    Animal(void);
    Animal(const Animal& a);
    virtual ~Animal(void);

    Animal& operator=(const Animal& a);

    const std::string& getType(void) const;

    virtual void makeSound(void) const;
};

#endif