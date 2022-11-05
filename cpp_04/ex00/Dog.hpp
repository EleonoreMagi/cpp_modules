/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:44:51 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 18:30:28 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog(void);
    Dog(const Dog& a);
    virtual ~Dog(void);

    Dog& operator=(const Dog& a);

    virtual void makeSound(void) const;
};

#endif