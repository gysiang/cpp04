/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:07:00 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/10 13:59:20 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() : type("default") {};

AMateria::AMateria(std::string const &type) {
	std::cout << "AMateria " << type << " is created." << std::endl;
	this->type = type;
}

AMateria::~AMateria() {
	std::cout << "AMateria is destroyed" << std::endl;
}

std::string const &AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter &target) {
	std::cout << "AMateria use does something." << std::endl;
}
