/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:44:51 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 18:50:49 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <cstdlib>

class Dog : public Animal
{
private:
    Brain* _brain;

public:
    Dog();
    Dog(const Dog& a);
    virtual ~Dog();

    Dog& operator=(const Dog& a);

    const std::string& getBrainIdeas(int index) const;
    void setBrainIdeas(int index, const std::string& str) const;

    virtual void makeSound() const;
};

#endif