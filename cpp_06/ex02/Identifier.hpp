/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 03:41:05 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 03:49:32 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFIER_HPP
# define IDENTIFIER_HPP

# include <iostream>
# include <random>
#include <ctime>
#include <cstdlib>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Identifier
{
public:
    Identifier();
    ~Identifier();
    Base* generate(void);
    void identify(Base* p);
    void identify(Base& p);
};
#endif