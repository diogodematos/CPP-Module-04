/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:22:56 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 22:29:45 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// int main()
// {
//   const Animal* Joli = new Animal();
//   const Animal* jol = new Dog();
//   const Animal* Fol = new Cat();
//   std::cout << jol->getType() << std::endl;
//   std::cout << Joli->getType() << std::endl;
//   std::cout << Fol->getType() << std::endl;
//   jol->makeSound();
//   Joli->makeSound();
//   delete Fol;
//   delete jol;
//   delete Joli;
// }

// int main()
// {
//   const Animal* Joli[10];
//   int x = 0;

//   while(x < 10)
//   {
//     if (x % 2 == 0)
//       Joli[x] = new Cat();
//     else
//       Joli[x] = new Dog();
//     x++;
//   }
//   x = 0;
//   while (x < 10)
//   {
//     Joli[x]->makeSound();
//     x++;
//   }
//   x = 0;
//   while(x < 10)
//   {
//     delete Joli[x];
//     x++;
//   }
// }

int main()
{
  Dog basic;
		{
			Dog tmp = basic;
			std::cout << std::endl;
      std::cout << std::endl;
      Dog tmp2 (basic);
		}
		std::cout << std::endl;

  std::cout << std::endl;

  // Animal *Lo = new Dog();
  // delete Lo;
}