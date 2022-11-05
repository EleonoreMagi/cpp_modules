/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:44:51 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 18:51:32 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <cstdlib>

class Cat : public Animal
{
private:
    Brain* _brain;

public:
    Cat(void);
    Cat(const Cat& a);
    virtual ~Cat(void);

    Cat& operator=(const Cat& a);


    const std::string& getBrainIdeas(int index) const;
    void setBrainIdeas(int index, const std::string& str) const;

    virtual void makeSound() const;
};

#endif