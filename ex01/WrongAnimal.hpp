/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:54:15 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/01 14:41:01 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
  protected:
    
    std::string type;
    
  public:
  
    WrongAnimal();
    virtual ~WrongAnimal();
    
    void makeSound() const;
    
};

#endif