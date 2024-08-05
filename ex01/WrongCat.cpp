/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:37:24 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 20:37:10 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
  std::cout << "WrongCat Created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
  *this = copy;
  std::cout << "WrongCat Copy Created" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
  if (this != &wrongcat)
    type = wrongcat.type;
  std::cout << "WongCat Operation Copy Called" << std::endl;
  return *this;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat Destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
  std::cout << "PSSSSSS" << std::endl;
} 