/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:14:19 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 04:24:07 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename A,typename B, typename C>
void	iter(A first, B second, C third)
{
	for (size_t i = 0; i < second; i++)
	{
		third((*first)[i]);
	}
}

#endif