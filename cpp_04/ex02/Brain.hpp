/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:58:37 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/05 18:16:01 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

#define IDEA_NUM 100

class Brain
{
private:
    std::string ideas[IDEA_NUM];
    bool checkIndex(int index) const;

public:
    Brain();
    Brain(const Brain& a);
    ~Brain();

    Brain& operator=(const Brain& a);

    const std::string& getIdeas(int index) const;
    void setIdeas(int index, const std::string& str);
};

#endif