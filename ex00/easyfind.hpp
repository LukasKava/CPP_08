/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:48:25 by lkavalia          #+#    #+#             */
/*   Updated: 2023/06/08 20:28:39 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		EASYFIND_HPP
# define	EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <algorithm>
# include <exception>

class	ElementIsNotFound: public std::exception
{
	public:
		virtual const char	*what() const throw(){ return ("Element was not found!");};
};

template	<typename T>
typename T::iterator	easyfind(T& a, int b)
{
	typename T::iterator	check = std::find(a.begin(), a.end(), b);
	if (check == a.end())
		throw	ElementIsNotFound();
	return (check);
}

//Colors	===========================
# define	BLANK "\033[0m"
# define	RED	"\033[0;31m"
# define	GREEN "\033[0;32m"
# define	YELL "\033[0;33m"
# define	CYAN "\033[0;36m"

#endif