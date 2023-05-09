/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:54:54 by misimon           #+#    #+#             */
/*   Updated: 2023/05/09 17:55:16 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor called !" << std::endl;
}

Cat::Cat(const Cat& copy) {
	*this = copy;
	std::cout << "Cat copy constructor called !" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat default destructor called !" << std::endl;
}

Cat& Cat::operator=(const Cat& copy) {
	*this = copy;
	std::cout << "Cat assignation operator called" << std::endl;
	return(*this);
}

void Cat::makeSound() const {
	std::cout << "* Meow *" << std::endl;
}