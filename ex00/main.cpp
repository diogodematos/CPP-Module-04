/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:22:56 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/01 15:33:43 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
  const Animal* Joli = new Animal();
  const Animal* jol = new Dog();
  const Animal* Fol = new Cat();
  std::cout << jol->getType() << std::endl;
  std::cout << Joli->getType() << std::endl;
  std::cout << Fol->getType() << std::endl;
  jol->makeSound();
  Joli->makeSound();
  Fol->makeSound();
  delete Fol;
  delete jol;
  delete Joli;
  
}