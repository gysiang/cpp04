/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:07:00 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/08 15:36:58 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const &type) {
	std::cout << "AMateria is created" << std::endl;
	this->type = type;
}

AMateria::~AMateria() {
	std::cout << "AMateria is destroyed" << std::endl;
}
