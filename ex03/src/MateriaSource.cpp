/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:38:49 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/12 17:48:14 by gyong-si         ###   ########.fr       */
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
	if (!m) {
		std::cout << "cannot learn null materia" << std::endl;
		return ;
	}
	int	i = 0;
	while (i < slots) {
		if (!inventory[i]) {
			inventory[i] = m->clone();
			std::cout << "Learn Materia: " << m->getType() << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "No more slots left to learn new Materia" << std::endl;
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
	std::cout << "Sorry. " << type << " Materia is not found." << std::endl;
	return (NULL);
}
