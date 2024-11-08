/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:26:51 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/08 15:38:50 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// default constructor
Ice::Ice() : AMateria("ice") {
	std::cout << "Ice AMateria created" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice AMateria destroyed" << std::endl;
}
