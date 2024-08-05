/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:51:33 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 20:09:25 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
  public:

    std::string ideas[100];
    
    Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &brain);
    ~Brain();
};

#endif