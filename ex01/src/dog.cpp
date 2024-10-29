/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:26:40 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/29 15:29:38 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor initialised" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Dog deconstructor initialised" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy) {
	std::cout << "Dog Copy constructor initialised" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog Assignation operator called" << std::endl;
	this->_type = src._type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof! Woof!" << std::endl;
}

