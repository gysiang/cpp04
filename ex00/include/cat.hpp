/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:32:36 by gyong-si          #+#    #+#             */
/*   Updated: 2024/11/05 14:21:40 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
	private:
		std::string _type;

	public:
		// constructor
		Cat();
		// deconstructor
		virtual ~Cat();
		// copy constructor
		Cat(const Cat &copy);
		// copy assignment operator
		Cat &operator=(const Cat &src);
		// public methods
		virtual void makeSound() const;
};

#endif
