/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:25:03 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/11 10:21:14 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Bye bye, you filthy zombie: " << this->_name << std::endl;
}