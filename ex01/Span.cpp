/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:08:57 by lkavalia          #+#    #+#             */
/*   Updated: 2023/06/09 16:35:31 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): _N(0), _storage(0)
{
	std::cout << "Default constructor: empty vector" << std::endl;
}

Span::Span(unsigned int n): _N(n), _storage(0)
{
	std::cout << "Constructor: _N: " << n << std::endl;
}

Span::Span(const Span& other)
{
	*this = other;
}

Span&	Span::operator=(const Span& other)
{
	this->_N = other._N;
	if (this->_storage.empty() == false)
		this->_storage.clear();
	this->_storage.assign(other._storage.begin(), other._storage.end());
	return (*this);
}

Span::~Span(void)
{
	std::cout << "Destructor has been called!" << std::endl;
}

void	Span::addNumber(int	nbr_to_add)
{
	if (_storage.size() == _N)
		throw VectorIsFull();
	_storage.push_back(nbr_to_add);
}

void	Span::addManyNumbers(int ammount)
{
	if (ammount + _storage.size() >= _N)
		throw VectorIsFull();
	
	std::vector<int>			tmp(ammount);
	for (std::vector<int>::iterator	it = tmp.begin(); it != tmp.end(); it++)
		*it = *it;
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
		_storage.push_back(*it);
}

int	Span::shortestSpan(void)
{
	if (_storage.size() <= 1)
		throw VectorIsToSmall();
	int					min;
	std::vector<int>	tmp;
	tmp.assign(_storage.begin(), _storage.end());
	min = INT_MAX;
	std::sort(tmp.begin(), tmp.end());
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
	{
		if (it + 1 != tmp.end() && *(it + 1) - *it < min)
			min = *(it + 1) - *it;
	}
	return (min);
}

int	Span::longestSpan(void)
{
	if (_storage.size() <= 1)
		throw VectorIsToSmall();
	int	min = *std::min_element(_storage.begin(), _storage.end());
	int max = *std::max_element(_storage.begin(), _storage.end());
	return (max - min);
}

// Exceptions --------------------------------------
const char 	*Span::VectorIsFull::what() const throw()
{
	return ("Exception: Vector is already full!");
}

const char 	*Span::VectorIsToSmall::what() const throw()
{
	return ("Exception: Vector has to be more than 1 element!");
}