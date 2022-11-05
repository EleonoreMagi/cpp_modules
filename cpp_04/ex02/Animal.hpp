/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:43:00 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 19:07:45 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    Animal(const Animal& a);
    virtual ~Animal();

    Animal& operator=(const Animal& a);

    const std::string&      getType() const;
    const std::string&      getBrainIdeas(int index) const;
    void                    setBrainIdeas(int index, const std::string& str) const;

    virtual void makeSound() const = 0;
};

#endif