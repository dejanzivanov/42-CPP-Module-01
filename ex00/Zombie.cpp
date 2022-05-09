/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:25:03 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/04 19:39:59 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie(void)
{
	std::cout << "Bye bye, you filthy zombie: " << _name << "\n";
}