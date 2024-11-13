/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:47:33 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/13 14:12:09 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"
#include "../include/ICharacter.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"

int	main() {
	{
		std::cout << "Example from pdf" << std::endl;
		std::cout << "---------------------------------" << std::endl;
		std::cout << std::endl;

		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");

		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter *bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);
		me->use(-2, *bob);
		me->use(8, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl;
		std::cout << "Test for deep copy" << std::endl;
		std::cout << "---------------------------------" << std::endl;
		std::cout << std::endl;

		AMateria *Floor[10] = {NULL};
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);

		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter *cass = new Character(*dynamic_cast<Character*>(me));
		cass->setName("cass");

		AMateria *a = cass->getMateriaFromInventory(0);
		Floor[0] = a;
		cass->unequip(0);
		cass->use(0, *me);
		me->use(0, *cass);

		delete me;
		delete cass;
		delete src;
		// delete everything in the floor
		for (int i = 0; i < 10; ++i)
		{
			if (Floor[i]) {
				delete Floor[i];
			}
		}
	}
	{
		std::cout << std::endl;
		std::cout << "Test max Materia - Learn more than 4 Materia" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << std::endl;

		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		AMateria *mat = new Cure();
		src->learnMateria(mat);
		std::cout << std::endl;
		delete src;
		delete mat;
	}
	{
		std::cout << std::endl;
		std::cout << "Test create unknown materia and try to equip" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << std::endl;

		IMateriaSource* src = new MateriaSource();
		AMateria *tmp;
		ICharacter *s = new Character("me");
		tmp = src->createMateria("fire");
		s->equip(tmp);
		delete src;
		delete s;
	}
	return (0);
}
