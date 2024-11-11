/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:26:46 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/11 12:13:44 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

// default constructor
Cure::Cure() : AMateria("cure") {
	std::cout << "Cure AMateria created" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure AMateria destroyed" << std::endl;
}

Cure:: Cure(const Cure &copy) : type(copy.getType()) {
	std::cout << "Cure Copy Operator called." << std::endl;
}

Cure &Cure::operator=(const Cure &src) {
	if (this == &src)
		return (*this);
	std::cout << "Copy Assignment Operator from " << src.getType() << std::endl;
	return (*this);
}

Cure *Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
	std::cout << target.getName() << " heals its wounds."<< std::endl;
}

std::string const &Cure::getType() const {
	return (type);
}
