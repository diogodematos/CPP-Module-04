/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:35:24 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/01 12:41:40 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
  type = "Dog";
  std::cout << "Animal " << type << " Created" << std::endl;

}

Dog::~Dog()
{
  std::cout << "Animal " << type << " Destroyed" << std::endl;
}

void Dog::makeSound() const
{
  std::cout << "Au Au" << std::endl;
}
