/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:25:14 by misimon           #+#    #+#             */
/*   Updated: 2023/05/10 17:20:36 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete(meta);
	delete(j);
	delete(i);
	std::cout << "==================================" << std::endl;
	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* WrongJ = new WrongCat();
	std::cout << WrongMeta->getType() << " " << std::endl;
	std::cout << WrongJ->getType() << " " << std::endl;
	WrongJ->makeSound();
	WrongMeta->makeSound();
	delete(WrongMeta);
	delete(WrongJ);

	return 0;
}