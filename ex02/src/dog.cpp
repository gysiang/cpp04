/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:26:40 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/04 14:56:38 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain()) {
	std::cout << "Dog default constructor initialised" << std::endl;
}

Dog::~Dog(void) {
	delete(_brain);
	std::cout << "Dog deconstructor initialised" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy) {
	std::cout << "Dog Copy constructor initialised" << std::endl;
	this->_type = copy._type;
	if (copy._brain != NULL)
		this->_brain = new Brain(*copy._brain);
	else
		this->_brain = NULL;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->_type = src._type;
	delete (_brain);
	this->_brain = new Brain(*src._brain);
	if (this->_brain == NULL)
	{
		perror("Dog brain allocation failed");
		std::cerr << "Exiting process" << std::endl;
		exit(1);
	}
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << this->getType() << ": Woof! Woof! Woof!" << std::endl;
}

void Dog::getIdeas(void) const {
	int	i = 0;

	while (i < 3) {
		std::cout << "Idea " << i << " from " << this->_brain->getIdea(i) << std::endl;
		i++;
	}
}

void Dog::setIdea(int i, std::string idea) {
	this->_brain->setIdea(i, idea);
}
