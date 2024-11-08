/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:16:01 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/08 13:39:27 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"

int	main()
{
	/**
	const Animal *animal = new Animal();
	animal->makeSound();
	**/


	const	Animal *array[10];
	int		i = 0;

	// create a array of animal objects
	// half dog and half cats
	while (i < 10)
	{
		if (i < 5)
		{
			array[i] = new Cat();
			if (array[i] == NULL)
			{
				perror("Cat failed to allocate");
				std::cerr << "Exiting" << std::endl;
				exit(1);
			}
		}
		else
		{
			array[i] = new Dog();
			if (array[i] == NULL)
			{
				perror("Dog failed to allocate");
				std::cerr << "Exiting" << std::endl;
				exit(1);
			}
		}
		i++;
	}
	std::cout << std::endl;
	std::cout << "\033[33mArray of animals constructed\033[0m" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << std::endl;
	i = 0;
	while (i < 10)
	{
		array[i++]->makeSound();
	}
	i = 0;
	while (i < 10)
	{
		delete(array[i++]);
	}
	std::cout << std::endl;
	std::cout << "\033[33mTest for deep copy\033[0m" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << std::endl;

	Dog *a = new Dog;
	Dog *b = new Dog(*a);

	std::cout << "Setting new idea into B" << std::endl;
	// Change one of the ideas in B then compare.
	// For it to be deep copy, idea 0 will be different
	b->setIdea(0, "This is a brand new idea");
	std::cout << std::endl;
	std::cout << "Idea from A" << std::endl;
	a->getIdeas();
	std::cout << "Idea from B" << std::endl;
	b->getIdeas();

	delete(a);
	delete(b);
}
