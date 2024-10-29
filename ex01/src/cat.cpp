/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:36:05 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/29 14:31:50 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor initialised" << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Cat deconstructor initialised" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy) {
	std::cout << "Cat Copy constructor initialised" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat Assignation operator called" << std::endl;
	this->_type = src._type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}
