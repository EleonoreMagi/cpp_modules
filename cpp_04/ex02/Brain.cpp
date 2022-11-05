/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:58:40 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 18:17:06 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created with a default constructor." << std::endl;
}

Brain::Brain(const Brain& a)
{
    std::cout << "Brain copied." << std::endl;
    *this = a;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain& Brain::operator=(const Brain& a)
{
    std::cout << "Assignment operator for Animal called." << std::endl;
    for (int i = 0; i < IDEA_NUM; ++i)
    {
        this->setIdeas(i, a.getIdeas(i));
    }
    return *this;
}

bool Brain::checkIndex(int index) const
{
    if (index < 0 || index >= IDEA_NUM)
    {
        std::cerr << "The value of index is out of range." << std::endl;
        return false;
    }
    return true;
}

const std::string& Brain::getIdeas(int index) const
{
    if (checkIndex(index))
    {
        return ideas[index];
    }
    return ideas[0];
}

void Brain::setIdeas(int index, const std::string& str)
{
    if (checkIndex(index))
    {
        ideas[index] = str;
    }
}