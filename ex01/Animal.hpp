/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:09:44 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 20:57:19 by dcarrilh         ###   ########.fr       */
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
  Animal(const Animal &copy);
  Animal &operator=(const Animal &animal);
  virtual ~Animal();
  
  const std::string& getType() const;
  virtual void makeSound() const;
  
};

#endif