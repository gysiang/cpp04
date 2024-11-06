/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:01:44 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/06 15:40:13 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "../include/wrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string _type;

	public:
		// constructor
		WrongCat();
		// deconstructor
		virtual ~WrongCat();
		// copy constructor
		WrongCat(const WrongCat &copy);
		// copy assignment operator
		WrongCat &operator=(const WrongCat &src);
		// public methods
		void makeSound() const;
};

#endif
