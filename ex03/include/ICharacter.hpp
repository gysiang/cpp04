/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:01:41 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/08 15:49:52 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter
{
	public:
		const static int slots = 4;
		virtual ~ICharacter() {};
		virtual std::string const &getName() const = 0;
		virtual equip(AMateria *m) = 0;
		virtual unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;

	protected:
		std::string name;
		std::string inventory[slots];
};

#endif
