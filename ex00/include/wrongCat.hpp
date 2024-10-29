/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:01:44 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/29 14:02:35 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "wrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string _type;

	public:
		// constructor
		WrongCat();
		// deconstructor
		~WrongCat();
		// copy constructor
		WrongCat(const WrongCat &copy);
		// copy assignment operator
		WrongCat &operator=(const WrongCat &src);
		// public methods
		virtual void makeSound() const;
};

#endif