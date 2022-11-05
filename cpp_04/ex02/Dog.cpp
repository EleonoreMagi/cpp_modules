/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:46:27 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 18:50:51 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog created with a default constructor." << std::endl;
    _type = "Dog";
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

Dog::Dog(const Dog& a)
{
    std::cout << "Dog copied." << std::endl;
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

Dog::~Dog()
{
    std::cout << "Dog destroyed." << std::endl;
    delete _brain;
}

Dog& Dog::operator=(const Dog& a)
{
    _type = a.getType();
    *_brain = *(a._brain);
    return *this;
}

const std::string& Dog::getBrainIdeas(int index) const
{
    return _brain->getIdeas(index);
}

void Dog::setBrainIdeas(int index, const std::string& str) const
{
    _brain->setIdeas(index, str);
}

void Dog::makeSound() const
{
    std::cout <<  "Dog makes a sound of woof!!" << std::endl;
}