/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:40:12 by jvarila           #+#    #+#             */
/*   Updated: 2025/05/28 13:47:24 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

// -----------------------------------------------------------------------------

void Zombie:: announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie:: set_name( std::string const &name) {
	_name = name;
}

// -----------------------------------------------------------------------------

Zombie::Zombie (void) : _name("A zombie") {
	std::cout << _name << " has awoken!" << std::endl;
}

Zombie::Zombie( std::string const &name ) : _name(name) {
	std::cout << _name << " has awoken!" << std::endl;
}

// -----------------------------------------------------------------------------

Zombie::~Zombie( void ) {
	std::cout << _name << " is crawling back into the ground" << std::endl;
}
