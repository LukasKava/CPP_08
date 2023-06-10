/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkavalia <lkavalia@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:08:52 by lkavalia          #+#    #+#             */
/*   Updated: 2023/06/10 11:44:11 by lkavalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int	main(void)
// {
// 	Span	sp(5);
// 	//Checking the information about the sp
// 	std::cout << YELL "SP:" BLANK << std::endl;
// 	std::cout << "ammout it can store: " << sp.getNumber() << std::endl; 
// 	std::cout << "size:                " << sp.getSize() << std::endl << std::endl;
// 	Span	sp1;
// 	std::cout << YELL "SP1:" BLANK << std::endl;
// 	std::cout << "ammout it can store: " << sp1.getNumber() << std::endl; 
// 	std::cout << "size:               " << sp1.getSize() << std::endl << std::endl;
	
// 	sp.addManyNumbers(5);
	
// 	//Checking assigment operator overload
// 	std::cout << GREEN "TESTING: assigment operator overload!" BLANK << std::endl;
// 	std::cout << "sp1 = sp" << std::endl;
// 	sp1 = sp;
// 	std::cout << YELL "SP1:" BLANK << std::endl;
// 	std::cout << "ammout it can store: " << sp1.getNumber() << std::endl; 
// 	std::cout << "size:                " << sp1.getSize() << std::endl;
// 	sp1.printVector();
// 	std::cout << std::endl;

// 	Span	sp2(10);
// 	sp2.addNumber(0);
// 	sp2.addNumber(3);
// 	sp2.addNumber(6);
// 	sp2.addNumber(9);
// 	sp2.addNumber(12);
// 	sp2.addNumber(15);
// 	sp2.addNumber(18);
// 	sp2.addNumber(21);
// 	sp2.addNumber(24);
// 	//sp2.addNumber(8);
	
// 	//Checking sp2
// 	std::cout << YELL "SP2:" BLANK << std::endl;
// 	std::cout << "ammout it can store: " << sp2.getNumber() << std::endl; 
// 	std::cout << "size:                " << sp2.getSize() << std::endl;
// 	sp2.printVector();
// 	std::cout << std::endl;
// 	//Checking assigment operator overload
// 	std::cout << GREEN "TESTING: assigment operator overload!" BLANK << std::endl;
// 	std::cout << "sp1 = sp2" << std::endl;
// 	sp1 = sp2;
// 	std::cout << YELL "SP1:" BLANK << std::endl;
// 	std::cout << "ammout it can store: " << sp1.getNumber() << std::endl; 
// 	std::cout << "size:                " << sp1.getSize() << std::endl;
// 	sp1.printVector();
// 	std::cout << std::endl;
	
// 	sp2.addNumber(8);

// 	//Testing if its a deep or a shallow copy
// 	std::cout << RED "TESTING: are they shallow or deep copies?" BLANK << std::endl;
// 	std::cout << YELL "SP2:" BLANK << std::endl;
// 	std::cout << "ammout it can store: " << sp2.getNumber() << std::endl; 
// 	std::cout << "size:                " << sp2.getSize() << std::endl;
// 	sp2.printVector();
// 	std::cout << std::endl;
// 	std::cout << YELL "SP1:" BLANK << std::endl;
// 	std::cout << "ammout it can store: " << sp1.getNumber() << std::endl; 
// 	std::cout << "size:                " << sp1.getSize() << std::endl;
// 	sp1.printVector();
// 	std::cout << std::endl;
	
// 	//Testing VectorIsFull exception
// 	std::cout << RED "TESTING: Overfilling the span2" BLANK << std::endl;
// 	try {	sp2.addNumber(-2);}
// 	catch (Span::VectorIsFull& e)
// 	{
// 		std::cout << RED << e.what() << BLANK << std::endl << std::endl; 
// 	}
	
// 	// Vector is too small exception
// 	std::cout << RED "TESTING: Calling shortestSpan on too small of a vector" BLANK << std::endl;
// 	Span	tmp(1);

// 	tmp.addNumber(-1);
// 	try	{tmp.shortestSpan();}
// 	catch	(Span::VectorIsToSmall& e)
// 	{
// 		std::cout << RED << e.what() << BLANK << std::endl << std::endl;
// 	}

// 	// Testing Shortest Span
// 	std::cout << GREEN "TESTING: Calling shortestSpan" BLANK << std::endl;
// 	std::cout << YELL "SP2:" BLANK << std::endl;
// 	std::cout << "ammout it can store: " << sp2.getNumber() << std::endl; 
// 	std::cout << "size:                " << sp2.getSize() << std::endl;
// 	sp2.printVector();
// 	std::cout << "Shortest span:       " << sp2.shortestSpan() << std::endl;
// 	std::cout << "Longest span:        " << sp2.longestSpan() << std::endl;
// 	std::cout << std::endl;

// 	// Testing 10000 numbers
// 	std::cout << CYAN "TESTING: 10000 numbers" BLANK << std::endl;
// 	Span	sp10(10000);
	
// 	sp10.addManyNumbers(10000);
// 	std::cout << YELL "SP10:" BLANK << std::endl;
// 	std::cout << "ammout it can store: " << sp10.getNumber() << std::endl; 
// 	std::cout << "size:                " << sp10.getSize() << std::endl;
// 	sp10.printVector();
// 	std::cout << "Shortest span:       " << sp10.shortestSpan() << std::endl;
// 	std::cout << "Longest span:        " << sp10.longestSpan() << std::endl;
// 	std::cout << std::endl;

// 	// Testing 50000 numbers
// 	std::cout << CYAN "TESTING: 50000 numbers" BLANK << std::endl;
// 	Span	sp50(50000);
	
// 	sp50.addManyNumbers(50000);
// 	std::cout << YELL "SP10:" BLANK << std::endl;
// 	std::cout << "ammout it can store: " << sp50.getNumber() << std::endl; 
// 	std::cout << "size:                " << sp50.getSize() << std::endl;
// 	sp50.printVector();
// 	std::cout << "Shortest span:       " << sp50.shortestSpan() << std::endl;
// 	std::cout << "Longest span:        " << sp50.longestSpan() << std::endl;
// 	std::cout << std::endl;
// 	return (0);
// }

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}