/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmillan <dmillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 05:01:21 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/07 05:20:36 by dmillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <stdexcept>
#include <set>
#include <climits>

class Span
{
private:
    std::multiset<int> multiset;
    unsigned int maxSize;

public:
    Span();
    explicit Span(unsigned int N);
    Span(const Span& span);
    ~Span();

    Span& operator=(const Span& span);

    const std::multiset<int>& getMultiset() const;
    unsigned int getMaxSize() const;

    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

    void addNumber(int v);

    template <typename InputIterator>
    void addNumber(InputIterator begin, InputIterator end)
    {
        std::size_t remain = maxSize - multiset.size();
        std::size_t dist = std::distance(begin, end);

        if (remain < dist)
        {
            throw std::logic_error("Error: cannot store any more numbers.");
        }
        multiset.insert(begin, end);
    }
};

#endif