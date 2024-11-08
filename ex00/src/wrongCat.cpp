/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:02:56 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/08 13:11:56 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor initialised" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat deconstructor initialised" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy) {
	std::cout << "WrongCat Copy constructor initialised" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
	if (this != &src) {
		std::cout << "WrongCat Assignation operator called" << std::endl;
		this->_type = src._type;
	}
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Meow! Wrong Meow! Wrong Meow!" << std::endl;
}
