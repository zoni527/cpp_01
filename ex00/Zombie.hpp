/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:33:05 by jvarila           #+#    #+#             */
/*   Updated: 2025/06/02 16:09:49 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie {

public:
	void	announce( void );

	Zombie ( std::string const &name );
	~Zombie( void );

private:
	std::string	const _name;
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );
