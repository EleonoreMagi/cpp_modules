/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 05:12:35 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 05:38:28 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <algorithm>
# include <iterator>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T> {

public:
	typedef typename std::deque<T>::iterator iterator;

	MutantStack() : std::stack<T>() { };
	MutantStack(MutantStack &copy) : std::stack<T>() {*this = copy;};
	virtual ~MutantStack() { };

	MutantStack	&operator=(MutantStack &rhs) {std::stack<T>::operator=(rhs); return (*this);};

	iterator	end() {return(this->c.end());};
	iterator	begin() {return(this->c.begin());};
};

#endif
