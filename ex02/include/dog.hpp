/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:32:20 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/04 14:34:54 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;

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
		void getIdeas() const;
		void setIdea(int i, std::string idea);
};

#endif
