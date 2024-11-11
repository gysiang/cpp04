/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:38:49 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/11 13:43:00 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/AMateria.hpp"

MateriaSource::MateriaSource() {
	int	i = slots;
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
			delete (inventory[i]);
	}
	std::cout << "Materia Source was destroyed." << std::endl;
}
