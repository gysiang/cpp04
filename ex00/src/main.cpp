/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:47:23 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/08 13:35:03 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/animal.hpp"
#include "../include/cat.hpp"
#include "../include/dog.hpp"
#include "../include/wrongAnimal.hpp"
#include "../include/wrongCat.hpp"

int	main()
{
	const	Animal *meta = new Animal();
	const	Animal *j = new Dog();
	const	Animal *i = new Cat();
	const	WrongAnimal *zeta = new WrongAnimal();
	const	WrongAnimal *a = new WrongCat();

	std::cout <<"\033[1;33m------------------ For Animal Class ---------------\033[0m" << std::endl;
	std::cout << j->getType() << " : ";
	j->makeSound();
	std::cout << i->getType() << " : ";
	i->makeSound();
	std::cout << meta->getType() << " : ";
	meta->makeSound();
	std::cout << std::endl;

	std::cout <<"\033[1;33m------------------ For Wrong Animal Class ---------------\033[0m" << std::endl;
	std::cout << a->getType() << " : ";
	a->makeSound();
	std::cout << zeta->getType() << " : ";
	zeta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete zeta;
	delete a;
	return (0);
}
