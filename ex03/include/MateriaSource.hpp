/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:33:29 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/11 14:15:13 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		static const int slots = 4;
		AMateria *inventory[slots];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource (const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &src);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const &type);
};

#endif
