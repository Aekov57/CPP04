/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:25:14 by misimon           #+#    #+#             */
/*   Updated: 2023/05/10 16:55:33 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
	// const Animal* k = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete(j);
	delete(i);
	// delete(k);

	return 0;
}