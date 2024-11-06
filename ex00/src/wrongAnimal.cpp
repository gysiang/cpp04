/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:57:35 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/06 15:37:22 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("default") {
	std::cout << "WrongAnimal default constructor initalised" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type) {
	std::cout << "WrongAnimal " << type << " constructor initalised" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal copy constructor initalised" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal(void) {
		std::cout << "WrongAnimal deconstructor initalised" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "This Wrong animal does not make a sound yet." << std::endl;
}

std::string WrongAnimal::getType() const {
	return (this->_type);
}
