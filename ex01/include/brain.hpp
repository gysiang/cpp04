/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:16:48 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/29 14:33:08 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

	private:
		std::string ideas[100];

	private:
		Brain();
		~Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &src);
};

#endif
