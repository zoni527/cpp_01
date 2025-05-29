/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:49:20 by jvarila           #+#    #+#             */
/*   Updated: 2025/05/29 10:51:48 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void tests( void );

int main( int argc, char *argv[] ) {

	if (argc != 4) {
		std::cout << "Usage: ./sed_is_for_losers <filename> <s1> <s2>\n";
		std::cout << "\nRunning default test suite" << std::endl;
		return 0;
	}
	return 0;
}

static void tests( void ) {

}
