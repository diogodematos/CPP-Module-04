/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:19:03 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 20:24:38 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
  std::cout << "Brain Created" << std::endl;
}

Brain::Brain(const Brain &copy)
{
  *this = copy;
  std::cout << "Brain Copy Created" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
  if (this != &brain)
  {
    for(int i = 0; i < 100; i++)
      ideas[i] = brain.ideas[i];
  }
  std::cout << "Brain Operation Copy Called" << std::endl;
  return *this;
}

Brain::~Brain()
{
  std::cout << "Brain Destroyed" << std::endl;
}