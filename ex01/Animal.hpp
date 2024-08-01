/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:09:44 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/01 12:00:59 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class Animal
{
protected:
  
  std::string type;

public:

  Animal();
  Animal(std::string _type);
  virtual ~Animal();
  const std::string& getType() const;
  const std::string& makesound() const;
  virtual void makeSound() const;
  
};

#endif