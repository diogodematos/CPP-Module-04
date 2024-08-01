/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:14:35 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/01 14:26:01 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default")
{
  std::cout << "Animal " << type << " Created" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
  std::cout << "Animal " << type << " Created" << std::endl;
}

Animal::~Animal()
{
  std::cout << "Animal Default Destroyed" << std::endl;
}

const std::string& Animal::getType() const
{
  return type;
}

void Animal::makeSound() const
{
  std::cout << "Animal Sound" << std::endl;
}
