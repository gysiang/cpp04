/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:50:04 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/10 13:58:16 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria();
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);

};

#endif
