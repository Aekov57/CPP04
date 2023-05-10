/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:51:13 by misimon           #+#    #+#             */
/*   Updated: 2023/05/10 15:46:53 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("") {
	std::cout << "Animal Default constructor called !" << std::endl;
}

Animal::Animal(const Animal& copy) {
	*this = copy;
	std::cout << "Animal copy constructor called !" << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
	std::cout << "Animal constructor called !" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal Default destructor called !" << std::endl;
}

Animal& Animal::operator=(const Animal& copy) {
	*this = copy;
	std::cout << "Animal assignation operator called" << std::endl;
	return(*this);
}

std::string Animal::getType() const {
	return(this->type);
}

void Animal::makeSound() const {
	std::cout << "* Animal random noise *" << std::endl;
}