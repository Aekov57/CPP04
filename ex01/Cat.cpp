/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:54:54 by misimon           #+#    #+#             */
/*   Updated: 2023/05/10 17:08:36 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain()){
	std::cout << "Cat default constructor called !" << std::endl;
}

Cat::Cat(const Cat& copy) {
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Cat copy constructor called !" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat default destructor called !" << std::endl;
	delete(brain);
}

Cat& Cat::operator=(const Cat& copy) {
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Cat assignation operator called" << std::endl;
	return(*this);
}

void Cat::makeSound() const {
	std::cout << "* Meow *" << std::endl;
}