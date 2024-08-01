/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:02:01 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/01 15:27:19 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
  type = "Cat";
  brain = new Brain();
  std::cout << "Animal " << type << " Created" << std::endl;
}

Cat::~Cat()
{
  delete brain;
  std::cout << "Animal " << type << " Destroyed" << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Miau" << std::endl;
}