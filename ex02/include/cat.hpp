/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:32:36 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/08 13:33:57 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;

	public:
		// constructor
		Cat();
		// deconstructor
		~Cat();
		// copy constructor
		Cat(const Cat &copy);
		// copy assignment operator
		Cat &operator=(const Cat &src);
		// public methods
		void makeSound() const;
};

#endif
