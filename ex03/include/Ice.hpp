/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:19:30 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/11 12:14:30 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
	private:
		std::string type;
	public:
		Ice();
		~Ice();
		Ice(Ice const &copy);
		Ice &operator=(const Ice &src);
		// public methods
		std::string const &getType() const;
		void use(ICharacter &target);
		Ice *clone() const;
};

#endif
