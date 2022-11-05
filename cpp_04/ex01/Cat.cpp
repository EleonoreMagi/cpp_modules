/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:46:12 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 18:51:31 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat created with a default constructor." << std::endl;
    _type = "Cat";
    try
    {
        _brain = new Brain();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        throw e;
    }
}

Cat::Cat(const Cat& a)
{
    std::cout << "Cat copied." << std::endl;
    try
    {
        _brain = new Brain();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        throw e;
    }
    *this = a;
}

Cat::~Cat()
{
    std::cout << "Cat destroyed." << std::endl;
    delete _brain;
}

Cat& Cat::operator=(const Cat& a)
{
    _type = a.getType();
    *_brain = *(a._brain);
    return *this;
}

const std::string& Cat::getBrainIdeas(int index) const
{
    return _brain->getIdeas(index);
}

void Cat::setBrainIdeas(int index, const std::string& str) const
{
    _brain->setIdeas(index, str);
}

void Cat::makeSound() const
{
    std::cout << "Cat makes a sound of nyaaaaaaaaaa!!" << std::endl;
}

