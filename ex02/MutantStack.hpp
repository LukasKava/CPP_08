/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:15:02 by lkavalia          #+#    #+#             */
/*   Updated: 2023/06/10 16:30:08 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP
# define	MUTANTSTACK_HPP

# include	<stack>
# include	<list>
# include	<deque>
# include	<vector>
# include	<iostream>

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public:
		//Canonical form -----------------------------------
		MutantStack(void)	{};
		MutantStack(MutantStack& other) {	*this = other;};
		~MutantStack(void){};
		
		MutantStack&	operator=(MutantStack& other)
		{
			if (other.empty() == false)
			{
				if (this->empty() == false)
				{
					for (MutantStack<T, Container>::iterator it = this->end()--; it != this->begin(); it++)
						this->pop();
				}
				MutantStack<T, Container>::iterator it;
				//Creating a new clean stack
				for (it = other.begin(); it != other.end(); it++)
					this->push(*it);
			}
			return (*this);
		};
		
		//Iterators ----------------------------------------
		typedef typename	Container::iterator	iterator;
		
		iterator	begin(void)	{	return (this->c.begin());}
		
		iterator	end(void)	{	return	(this->c.end());}
};

# define	BLANK "\033[0m"
# define	RED	"\033[0;31m"
# define	GREEN "\033[0;32m"
# define	YELL "\033[0;33m"
# define	CYAN "\033[0;36m"

#endif