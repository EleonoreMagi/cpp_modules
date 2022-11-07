/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 03:02:21 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 03:10:46 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>

struct Data
{
    int x;
    int y;
};

uintptr_t serialize(Data* ptr);

Data      *deserialize(uintptr_t raw);

#endif