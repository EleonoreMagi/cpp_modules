/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:53:25 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 05:00:45 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

class VectorNotFound : public std::exception
{
	public:
		char const * what() const throw()
		{
			return "Could't find the int inside the container!";
		}
};

template <typename T>
int	* easyfind(T &container, int num)
{
	typename T::iterator it;

	if((it = std::find(container.begin(), container.end(), num)) == container.end())
		throw VectorNotFound();
	return (&(*it));
}
