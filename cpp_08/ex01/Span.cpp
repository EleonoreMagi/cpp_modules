/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 05:02:14 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 05:27:49 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <string>

Span::Span() : maxSize(0) {}

Span::Span(unsigned int N) : maxSize(N) {}

Span::Span(const Span& span) : multiset(span.getMultiset()), maxSize(span.getMaxSize()) {}

Span::~Span() {}

Span& Span::operator=(const Span& span)
{
    multiset = span.getMultiset();
    maxSize = span.getMaxSize();
    return *this;
}

const std::multiset<int>& Span::getMultiset() const
{
    return multiset;
}

unsigned int Span::getMaxSize() const
{
    return maxSize;
}

unsigned int Span::shortestSpan() const
{
    if (multiset.size() <= 1)
    {
        throw std::logic_error("error: cannot calculate a span, less then two numbers stored.\n Please add more numbers.");
    }

    std::multiset<int>::iterator beforeIt = multiset.begin();
    unsigned int shotSpan = UINT_MAX;
    for (std::multiset<int>::iterator it = multiset.begin(); it != multiset.end(); ++it)
    {
        if (it == multiset.begin())
            continue;
        shotSpan = std::min(shotSpan, static_cast<unsigned int>(*it - *beforeIt));
        beforeIt = it;
    }
    return shotSpan;
}

unsigned int Span::longestSpan() const
{
    if (multiset.size() <= 1)
    {
        throw std::logic_error("error: cannot calculate a span, less then two numbers stored.\n Please add more numbers.");
    }
    return *multiset.rbegin() - *multiset.begin();
}

void Span::addNumber(int v)
{
    if (multiset.size() == maxSize)
    {
        throw std::logic_error("error: cannot store any more numbers.");
    }
    multiset.insert(v);
}