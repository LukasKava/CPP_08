/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:09:00 by lkavalia          #+#    #+#             */
/*   Updated: 2023/06/09 16:18:25 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <exception>
# include <algorithm>

class	Span
{
	public:
		//Canonical form -----------------------------------
		Span(void);
		Span(unsigned int n);
		Span(const Span& other);
		
		Span&	operator=(const Span& other);
		
		~Span(void);

		//Members functions --------------------------------
		void	addNumber(int nbr_to_add);
		void	addManyNumbers(int ammount);
		int		shortestSpan(void);
		int		longestSpan(void);

		//Exceptions functions -----------------------------
		class	VectorIsFull: public std::exception
		{
			public:
				virtual const char	*what() const throw();	
		};

		class	VectorIsToSmall: public std::exception
		{
			public:
				virtual const char	*what() const throw();	
		};
	private:
		unsigned int		_N;
		std::vector<int>	_storage;
};

# define	BLANK "\033[0m"
# define	RED	"\033[0;31m"
# define	GREEN "\033[0;32m"
# define	YELL "\033[0;33m"
# define	CYAN "\033[0;36m"


#endif