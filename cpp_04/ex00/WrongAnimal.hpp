/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:02:20 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 13:24:46 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal(void);
    WrongAnimal(const WrongAnimal& a);
    virtual ~WrongAnimal(void);

    WrongAnimal& operator=(const WrongAnimal& a);

    const std::string& getType(void) const;

    void makeSound(void) const;
};

#endif