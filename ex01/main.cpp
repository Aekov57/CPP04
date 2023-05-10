/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:25:14 by misimon           #+#    #+#             */
/*   Updated: 2023/05/10 16:48:11 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete(j);
	delete(i);
	std::cout << "===============================================" << std::endl;
	Dog	basic;
	Dog tmp;
	basic = tmp;
	std::cout << "===============================================" << std::endl;
	const Animal* animals[4] = { new Dog(), new Animal(), new Cat(), new Cat() };
	for ( int i = 0; i < 4; i++ ){
		std::cout << "<=>" << std::endl;
		animals[i]->makeSound();
		delete animals[i];
	}

	return 0;
}