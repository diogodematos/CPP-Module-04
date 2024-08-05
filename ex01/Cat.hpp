/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:49:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 15:27:55 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  private:
  
    Brain* brain;
    
  public:

    Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &cat);
    ~Cat();

    void makeSound() const;
};

#endif