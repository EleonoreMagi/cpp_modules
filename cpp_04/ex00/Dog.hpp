/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:44:51 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 04:51:12 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& a);
    virtual ~Dog();

    Dog& operator=(const Dog& a);

    virtual void makeSound() const;
};

#endif