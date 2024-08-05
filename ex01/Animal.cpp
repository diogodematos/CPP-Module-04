/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:14:35 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 10:26:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default")
{
  std::cout << "Animal Default Created" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
  std::cout << "Animal " << type << " Created" << std::endl;
}

Animal::Animal(const Animal &copy)
{
  *this = copy;
  std::cout << "Animal Copy Created" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
  if (this != &animal)
    type = animal.type;
  std::cout << "Animal Operation Copy Called" << std::endl;
  return *this;
}

Animal::~Animal()
{
  std::cout << "Animal Destroyed" << std::endl;
}

const std::string& Animal::getType() const
{
  return type;
}

void Animal::makeSound() const
{
  std::cout << "Animal Sound" << std::endl;
}
