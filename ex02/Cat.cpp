/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:02:01 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 22:18:18 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
  type = "Cat";
  std::cout << "Cat Created" << std::endl;
  brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
  brain = NULL;
  *this = copy;
  std::cout << "Cat Copy Created" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
  if (this != &cat)
    brain = new Brain(*cat.brain);
  std::cout << "Cat Operation Copy Called" << std::endl;
  return *this;
}

Cat::~Cat()
{
  delete brain;
  std::cout << "Cat Destroyed" << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Miau" << std::endl;
}