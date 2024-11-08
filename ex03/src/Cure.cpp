/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:26:46 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/08 15:34:59 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// default constructor
Cure::Cure() : AMateria("cure") {
	std::cout << "Cure AMateria created" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure AMateria destroyed" << std::endl;
}
