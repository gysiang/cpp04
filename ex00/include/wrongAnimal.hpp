/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:56:55 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/06 15:40:44 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>


class WrongAnimal
{
	protected:
		std::string _type;

	public:
		// constructor
		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal &copy);
		// deconstructor
		virtual ~WrongAnimal(void);
		// overload operator
		WrongAnimal &operator=(const WrongAnimal &src);
		// public method
		void makeSound() const;
		// getter
		std::string getType(void) const;
};

#endif
