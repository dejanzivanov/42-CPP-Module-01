/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:38:36 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/11 10:38:25 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{

	Zombie *Zombie_on_heap;

	Zombie_on_heap = NULL;
	Zombie_on_heap = Zombie_on_heap->newZombie("John Doe");
	Zombie_on_heap->announce();
	Zombie_on_heap->randomChump("Chuck Norris");
	Zombie_on_heap->randomChump("Chuck Kekss");
	delete Zombie_on_heap;
	return (0);
}