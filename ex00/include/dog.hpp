/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:32:20 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/06 15:38:08 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../include/animal.hpp"

class Dog : public Animal
{
	private:
		std::string _type;

	public:
		// constructor
		Dog();
		// deconstructor
		virtual ~Dog();
		// copy constructor
		Dog(const Dog &copy);
		// copy assignment operator
		Dog &operator=(const Dog &src);
		// public methods
		void makeSound() const;
};

#endif
