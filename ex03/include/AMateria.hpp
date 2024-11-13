/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:50:04 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/13 13:57:13 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(AMateria const &copy);
		AMateria &operator=(AMateria const &src);
		// public method
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target) = 0;

};

#endif
