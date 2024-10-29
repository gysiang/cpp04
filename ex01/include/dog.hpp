/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:32:20 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/29 14:30:36 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal
{
	private:
		std::string _type;
		Brain *brain;

	public:
		// constructor
		Dog();
		// deconstructor
		~Dog();
		// copy constructor
		Dog(const Dog &copy);
		// copy assignment operator
		Dog &operator=(const Dog &src);
		// public methods
		void makeSound() const;
};

#endif
