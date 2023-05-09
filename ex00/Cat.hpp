/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:53:44 by misimon           #+#    #+#             */
/*   Updated: 2023/05/09 17:01:03 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define	CAT_HPP

#include "Dog.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& copy);
		virtual ~Cat();

		Cat& operator=(const Cat& copy);

		virtual void makeSound() const;
};

#endif

