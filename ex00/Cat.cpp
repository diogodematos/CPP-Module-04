/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:02:01 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/01 12:41:37 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
  type = "Cat";
  std::cout << "Animal " << type << " Created" << std::endl;
}

Cat::~Cat()
{
  std::cout << "Animal " << type << " Destroyed" << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Miau" << std::endl;
}