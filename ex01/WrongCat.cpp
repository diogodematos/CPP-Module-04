/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:37:24 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/01 14:42:27 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
  std::cout << "WrongCat Created" << std::endl;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat Destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
  std::cout << "PSSSSSS" << std::endl;
} 