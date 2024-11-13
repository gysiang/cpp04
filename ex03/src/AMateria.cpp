/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:07:00 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/13 13:57:23 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() : type("default") {};

AMateria::AMateria(std::string const &type) : type(type) {
	std::cout << "AMateria " << type << " is created." << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria is destroyed" << std::endl;
}

AMateria::AMateria(AMateria const &copy) : type(copy.type) {
	std::cout << "AMateria constructed from copy" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &src) {
	if (this == &src)
		return (*this);
	type = src.type;
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->type);
}
/** *
void AMateria::use(ICharacter &target) {
	std::cout << "AMateria use aginst" << target.getName() << std::endl;
} **/
