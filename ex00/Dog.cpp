/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:44:50 by misimon           #+#    #+#             */
/*   Updated: 2023/05/09 17:55:08 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor called !" << std::endl;
}

Dog::Dog(const Dog& copy) {
	*this = copy;
	std::cout << "Dog copy constructor called !" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog default destructor called !" << std::endl;
}

Dog& Dog::operator=(const Dog& copy) {
	*this = copy;
	std::cout << "Dog assignation operator called" << std::endl;
	return(*this);
}

void Dog::makeSound() const {
	std::cout << "* Wouf *" << std::endl;
}