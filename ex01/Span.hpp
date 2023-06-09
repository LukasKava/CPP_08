/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:09:00 by lkavalia          #+#    #+#             */
/*   Updated: 2023/06/09 12:50:16 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class	Span
{
	public:
		//Canonical form -----------------------------------
		Span(void);
		Span(unsigned int N);
		Span(const Span& other);
		
		Span&	operator=(const Span& other);
		
		~Span(void);

		//Members functions ---------------------------------
		void	addNumber(int add);
		int		shortestSpan(void);
		int		longestSpan(void);
	private:
		unsigned int		_N;
		std::vector<int>	_storage;
};

#endif