/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:36:05 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/02 15:28:21 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain()) {
	std::cout << "Cat default constructor initialised" << std::endl;
}

Cat::~Cat(void) {
	delete(_brain);
	std::cout << "Cat deconstructor initialised" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy) {
	std::cout << "Cat Copy constructor initialised" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this != &src)
		return (*this);
	this->_type = src._type;
	delete (_brain);
	this->_brain = new Brain(*src._brain);
	if (this->_brain == NULL)
	{
		perror("Cat brain allocation failed");
		std::cerr << "Exiting process" << std::endl;
		exit(1);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << this->getType() << ": Meow! Meow! Meow!" << std::endl;
}