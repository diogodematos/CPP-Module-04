/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:02:01 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 15:20:03 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
  type = "Cat";
  std::cout << "Cat Created" << std::endl;
}

Cat::Cat(const Cat &copy)
{
  *this = copy;
  std::cout << "Cat Copy Created" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
  if (this != &cat)
    type = cat.type;
  std::cout << "Cat Operation Copy Called" << std::endl;
  return *this;
}

Cat::~Cat()
{
  std::cout << "Cat Destroyed" << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Miau" << std::endl;
}