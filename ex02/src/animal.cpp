/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:25:00 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/29 15:25:18 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal(void) : _type("default") {
	std::cout << "Animal default constructor initalised" << std::endl;
}

Animal::Animal(const std::string type) : _type(type) {
	std::cout << "Animal " << type << " constructor initalised" << std::endl;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor initalised" << std::endl;
	*this = copy;
}

Animal::~Animal(void) {
		std::cout << "Animal deconstructor initalised" << std::endl;
}

Animal &Animal::operator=(const Animal &src) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

void Animal::makeSound(void) const {
	std::cout << "This animal does not make a sound yet." << std::endl;
}

std::string Animal::getType() const {
	return (this->_type);
}
