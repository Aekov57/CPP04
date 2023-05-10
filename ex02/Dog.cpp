/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:44:50 by misimon           #+#    #+#             */
/*   Updated: 2023/05/10 16:54:52 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain()) {
	std::cout << "Dog default constructor called !" << std::endl;
}

Dog::Dog(const Dog& copy) {
	*this = copy;
	std::cout << "Dog copy constructor called !" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog default destructor called !" << std::endl;
	delete(brain);
}

Dog& Dog::operator=(const Dog& copy) {
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Dog assignation operator called !" << std::endl;
	return(*this);
}

void Dog::makeSound() const {
	std::cout << "* Wouf *" << std::endl;
}