/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:35:24 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 22:17:38 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
  type = "Dog";
  std::cout << "Dog Created" << std::endl;
  brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
  brain = NULL;
  *this = copy;
  std::cout << "Animal Dog Copy Created" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
  if (this != &dog)
    brain = new Brain(*dog.brain);
  std::cout << "Dog Operation Copy Called" << std::endl;
  return *this;
}

Dog::~Dog()
{
  delete brain;
  std::cout << "Dog Destroyed" << std::endl;
}

void Dog::makeSound() const
{
  std::cout << "Au Au" << std::endl;
}
