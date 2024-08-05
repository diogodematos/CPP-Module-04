/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:35:24 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 15:20:19 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
  type = "Dog";
  std::cout << "Dog Created" << std::endl;
}

Dog::Dog(const Dog &copy)
{
  *this = copy;
  std::cout << "Animal Dog Copy Created" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
  if (this != &dog)
    type = dog.type;
  std::cout << "Dog Operation Copy Called" << std::endl;
  return *this;
}

Dog::~Dog()
{
  std::cout << "Dog Destroyed" << std::endl;
}

void Dog::makeSound() const
{
  std::cout << "Au Au" << std::endl;
}
