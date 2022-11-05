/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:44:51 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 04:49:19 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& a);
    virtual ~Cat();

    Cat& operator=(const Cat& a);

    virtual void makeSound() const;
};

#endif