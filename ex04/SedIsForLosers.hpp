/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:32:05 by jvarila           #+#    #+#             */
/*   Updated: 2025/05/29 14:37:32 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class SedIsForLosers {

public:
	int	run();

	SedIsForLosers(	std::string const &file,
					std::string const &s1,
					std::string const &s2);

private:
	std::string const	_file;
	std::string const	_s1;
	std::string const	_s2;
};
