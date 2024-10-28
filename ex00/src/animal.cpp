/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:25:00 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/29 03:46:13 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal(void) : _type("default") {
	std::cout << "Animal default constructor initalised" << std::endl;
}


Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor initalised" << std::endl;
	*this = copy;
}

Animal::~Animal(void) {
		std::cout << "Animal deconstructor initalised" << std::endl;
}

void Animal::makeSound(void) const {
		std::cout << "This animal does not make a sound yet." << std::endl;
}

std::string Animal::getType() const {
	return (this->_type);
}
