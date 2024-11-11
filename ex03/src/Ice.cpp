/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:26:51 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/11 15:11:46 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"
#include "../include/ICharacter.hpp"

// default constructor
Ice::Ice() : AMateria("ice") {
	std::cout << "Ice AMateria created\n" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice AMateria destroyed\n" << std::endl;
}

std::string const &Ice::getType	() const {
	return (type);
}

Ice::Ice(Ice const &copy) : AMateria(copy) {
	std::cout << type << " constructed from copy\n";
}

Ice &Ice::operator=(const Ice &src) {
	if (this == &src)
		return (*this);
	std::cout << "Copy Assignment Operator from " << src.getType() << std::endl;
	return (*this);
}

Ice *Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter &target) {
	std::cout << target.getName() << " heals its wounds."<< std::endl;
}
