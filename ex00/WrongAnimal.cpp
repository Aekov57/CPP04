/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:01:36 by misimon           #+#    #+#             */
/*   Updated: 2023/05/10 15:00:14 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("") {
	std::cout << "Wrong Animal Default constructor called !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	*this = copy;
	std::cout << "Wrong Animal copy constructor called !" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type) {
	std::cout << "Wrong Animal constructor called !" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal Default destructor called !" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
	*this = copy;
	std::cout << "Wrong Animal assignation operator called" << std::endl;
	return(*this);
}

std::string WrongAnimal::getType() const {
	return(this->type);
}

void WrongAnimal::makeSound() const {
	std::cout << "* Wrong Animal random noise *" << std::endl;
}