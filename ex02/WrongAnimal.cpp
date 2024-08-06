/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:22:13 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 15:17:27 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default")
{
  std::cout << "WrongAnimal Created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
  std::cout << "WrongAnimal " << type << " Created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
  *this = copy;
  std::cout << "WrongAnimal Copy Created" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
  if (this != &wronganimal)
    type = wronganimal.type;
  return *this;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal Destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
  std::cout << "WrongAnimal Sound" << std::endl;
}