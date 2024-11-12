/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:20:23 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/12 16:13:34 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		const static int slots = 4;
		std::string name;
		AMateria *inventory[slots];
		AMateria *floor[slots];

	public:
		Character(std::string name);
		~Character();
		Character(const Character &copy);
		Character &operator=(const Character &src);
		// public methods that will overwrite ICharacter methods
		std::string const &getName() const;
		void setName(const std::string &str);
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

};

#endif
