/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:57:14 by lkavalia          #+#    #+#             */
/*   Updated: 2023/06/10 16:30:31 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// int main()
// {
// 	MutantStack<int, std::vector<int> > checkstack;
	
// 	checkstack.push(1);
// 	checkstack.push(2);
// 	checkstack.push(3);

// 	MutantStack<int, std::vector<int> >::iterator it;
// 	for (it = checkstack.begin(); it != checkstack.end(); it++)
// 		std::cout << *it << " ";
// 	std::cout << std::endl;

// 	MutantStack<int, std::vector<int> >	check2(checkstack);
// 	std::cout << CYAN "check2" BLANK << std::endl;
// 	check2.push(-2);
// 	for (it = check2.begin(); it != check2.end(); it++)
// 	{
// 		(*it)++;
// 		std::cout << *it << " ";
// 	}
// 	std::cout << std::endl;
// 	std::cout << CYAN "checkstack" BLANK << std::endl;
// 	for (it = checkstack.begin(); it != checkstack.end(); it++)
// 		std::cout << *it << " ";
// 	std::cout << std::endl;
// 	return (0);
// }

// int main()
// {
// 	std::cout << CYAN "Main 1" BLANK << std::endl;
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }

int main()
{
	std::cout << RED "Main 2" BLANK << std::endl;
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	//std::stack<int> s(mstack);
	return 0;
}