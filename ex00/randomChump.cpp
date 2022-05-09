/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:39:34 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/04 19:39:44 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
	Zombie zombie;
	zombie._name = name;
	std::cout << zombie._name << ": BraiiiiiiinnnzzzZ...\n";
}