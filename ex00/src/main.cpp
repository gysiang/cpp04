/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:47:23 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/29 14:10:02 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int	main()
{
	const	Animal *meta = new Animal();
	const	Animal *j = new Dog();
	const	Animal *i = new Cat();
	const	WrongAnimal *zeta = new WrongAnimal();
	const	WrongAnimal *a = new WrongCat();

	std::cout <<"------------------ For Animal Class ---------------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout <<"------------------ For Wrong Animal Class ---------------" << std::endl;
	std::cout << a->getType() << " " << std::endl;
	a->makeSound();
	zeta->makeSound();
	delete meta;
	delete j;
	delete i;
	delete zeta;
	delete a;
	return (0);
}
