/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:01:44 by misimon           #+#    #+#             */
/*   Updated: 2023/05/10 14:21:17 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Wrong Cat default constructor called !" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) {
	*this = copy;
	std::cout << "Wrong Cat copy constructor called !" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat default destructor called !" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
	*this = copy;
	std::cout << "Wrong Cat assignation operator called" << std::endl;
	return(*this);
}

void WrongCat::makeSound() const {
	std::cout << "* Meow *" << std::endl;
}