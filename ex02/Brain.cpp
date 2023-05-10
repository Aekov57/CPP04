/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:16:47 by misimon           #+#    #+#             */
/*   Updated: 2023/05/10 15:48:50 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called !" << std::endl;
}

Brain::Brain(const Brain& copy) {
	std::cout << "Brain copy constructor called !" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = copy.ideas[i];
	}
}

Brain::~Brain() {
	std::cout << "Brain default destructor called !" << std::endl;
}

Brain& Brain::operator=(const Brain& copy) {
	std::cout << "Brain assignation operator called !" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return(*this);
}
