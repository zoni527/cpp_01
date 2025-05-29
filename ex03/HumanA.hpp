/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 09:31:36 by jvarila           #+#    #+#             */
/*   Updated: 2025/05/29 10:00:57 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA {

public:
	void	attack( void );

	HumanA( std::string const &str, Weapon const &weapon);
	~HumanA( void );

private:
	std::string	const	_name;
	Weapon const		&_weapon;
};
