/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:30:04 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/13 14:11:00 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(std::string const name) : name(name) {
	// init the inventory slots to null to avoid undefined behavior
	int	i = 0;
	while (i < slots) {
		inventory[i] = NULL;
		i++;
	}
};

Character::~Character() {
	int	i = 0;
	while (i < slots) {
		if (inventory[i])
			delete inventory[i];
		i++;
	}
	std::cout << "Character " << name << " is destroyed." << std::endl;
};

Character::Character(const Character &copy) : name(copy.getName() + "_copy") {
	int	i = 0;
	while (i < slots) {
		if (copy.inventory[i])
			inventory[i] = copy.inventory[i]->clone();
		else
			inventory[i] = NULL;
		i++;
	}
	std::cout << "A character named " << name << " was created from a copy of " << copy.name << std::endl;
}

std::string const &Character::getName() const {
	return (name);
}

void Character::setName(const std::string &str) {
	name = str;
}

AMateria *Character::getMateriaFromInventory(int idx) {
	if (idx < 0 || idx > slots )
		return (NULL);
	return (inventory[idx]);
}

Character &Character::operator=(Character const &src) {
	if (this == &src)
		return (*this);
	int	i = 0;
	while (i < slots)
	{
		if (inventory[i])
			delete (inventory[i]);
		if (src.inventory[i])
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = NULL;
		i++;
	}
	return (*this);
}

void Character::equip(AMateria *m) {
	int		i = 0;

	if (!m) {
		std::cout << "Invalid AMateria. Cannot equip." << std::endl;
		return ;
	}
	while (i < slots) {
		if (!inventory[i]) {
			inventory[i] = m;
			std::cout << name << " equipped " << m->getType() << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "The equipment slots for " << name << " is full." << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > slots) {
		std::cout << "Invalid index provided." << std::endl;
		return ;
	}
	else if (!(inventory[idx])) {
		std::cout << name << " has nothing equipped." << std::endl;
	}
	else {
		AMateria *a = (inventory[idx]);
		inventory[idx] = NULL;
		std::cout << name << " unequipped " << a->getType() << " and left it on the floor." << std::endl;
		return ;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= 4 || !inventory[idx]) {
		std::cout << "Nothing found in index : " << idx << std::endl;
		return ;
	}
	inventory[idx]->use(target);
	std::cout << name << " used " << inventory[idx]->getType() << " on " << target.getName() << "." << std::endl;
}
