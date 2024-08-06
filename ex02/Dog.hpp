/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:25:31 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 15:28:31 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
  private:
  
    Brain* brain;
  
  public:

    Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &dog);
    ~Dog();
    void makeSound() const;
    
};

#endif