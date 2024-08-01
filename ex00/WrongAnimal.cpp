/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:22:13 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/01 14:27:21 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default")
{
  std::cout << "WrongAnimal " << type << " Created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal Default Destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
  std::cout << "WrongAnimal Sound" << std::endl;
}