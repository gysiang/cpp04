/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:38:49 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/11 16:28:45 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/AMateria.hpp"

MateriaSource::MateriaSource() {
	int	i = 0;
	while (i < slots) {
		inventory[i] = NULL;
		i++;
	}
	std::cout << "Materia Source was created." << std::endl;
}

MateriaSource::~MateriaSource() {
	int i = 0;
	while (i < slots) {
		if (inventory[i])
			delete inventory[i];
		i++;
	}
	std::cout << "Materia Source was destroyed." << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy) {
	int	i = 0;
	while (i < slots) {
		if (copy.inventory[i])
			inventory[i] = copy.inventory[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src) {
	int i = 0;
	while (i < slots) {
		if (inventory[i])
			delete (inventory[i]);
		if (src.inventory[i])
			inventory[i] = src.inventory[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	int	i = 0;

	while (inventory[i] != NULL && i < slots) {
		i++;
	}
	if (i >=4) {
		std::cout << "Exceed the limit of 4 Materia." << std::endl;
		return ;
	}
	inventory[i] = m;
	std::cout << "Materia " << m->getType() << " learned." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	// loop through the slots looking for a match
	int i = 0;
	while (i < slots) {
		if (inventory[i] && inventory[i]->getType() == type) {
			AMateria *m = inventory[i]->clone();
			std::cout << "Materia " << m->getType() << " created."<< std::endl;
			return (m);
		}
		i++;
	}
	std::cout << "Sorry. Materia is not found." << std::endl;
	return (NULL);
}
