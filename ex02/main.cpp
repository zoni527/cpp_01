/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:13:17 by jvarila           #+#    #+#             */
/*   Updated: 2025/05/28 17:17:00 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void ) {

	std::string msg = "HI THIS IS BRAIN";
	std::string *stringPTR = &msg;
	std::string &stringREF = msg;

	std::cout << "\nAddress of the string variable:		" << &msg << "\n";
	std::cout << "Memory address held by stringPTR:	" << stringPTR << "\n";
	std::cout << "Memory address held by stringREF:	" << &stringREF << "\n\n";

	std::cout << "Value of the string variable:		" << msg << "\n";
	std::cout << "Value pointed to by stringPTR:		" << *stringPTR << "\n";
	std::cout << "Value pointed to by stringREF:		" << stringREF << "\n";
	std::cout << std::endl;

	return 0;
}
