/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:27:32 by lkavalia          #+#    #+#             */
/*   Updated: 2023/06/08 21:29:32 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main(void)
{
	std::cout << YELL "VECTOR TEST: =================================" BLANK << std::endl;
	{
		std::vector<int> vec;
		std::cout << "size: " << vec.size() << std::endl;
		
		for (int i =  0; i < 5; i++)
			vec.push_back(i);
		std::vector<int>::iterator it = vec.begin();
		while (it != vec.end())
		{
			std::cout << *it << std::endl;
			it++;
		}
		
		std::vector<int>::iterator check;
		try {check == easyfind(vec, -1);}
		catch (ElementIsNotFound& e)
		{
			std::cout << RED << e.what() << BLANK << std::endl;
		}
		check = easyfind(vec, 1);
		std::cout << "It has found: " << *check << std::endl;
	}

	std::cout << YELL "DEQUE TEST: ==================================" BLANK << std::endl;
	{
		std::deque<int>	d;
				
		for (int i =  0; i < 5; i++)
			d.push_front(i);
		
		std::deque<int>::iterator it = d.begin();
		while (it != d.end())
		{
			std::cout << *it << std::endl;
			it++;
		}
		std::deque<int>::iterator check;
		try {check == easyfind(d, -1);}
		catch (ElementIsNotFound& e)
		{
			std::cout << RED << e.what() << BLANK << std::endl;
		}
		check = easyfind(d, 2);
		std::cout << "It has found: " << *check << std::endl;
		std::cout << d[3] << std::endl;
	}

	std::cout << YELL "LIST TEST: ===================================" BLANK << std::endl;
	{
		std::list<int>	l;
				
		for (int i =  0; i < 5; i++)
			l.push_front(i);
		
		std::list<int>::iterator it = l.begin();
		while (it != l.end())
		{
			std::cout << *it << std::endl;
			it++;
		}
		std::list<int>::iterator check;
		try {check == easyfind(l, -1);}
		catch (ElementIsNotFound& e)
		{
			std::cout << RED << e.what() << BLANK << std::endl;
		}
		check = easyfind(l, 1);
		std::cout << "It has found: " << *check << std::endl;
	}
}