/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:24:32 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/05 14:29:39 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal
{
	protected:
		std::string _type;

	public:
		// constructor
		Animal();
		Animal(const std::string type);
		Animal(const Animal &copy);
		// deconstructor
		virtual ~Animal(void);
		// overload operator
		Animal &operator=(const Animal &src);
		// public method
		virtual void makeSound() const;
		// getter
		std::string getType(void) const;
};

#endif
