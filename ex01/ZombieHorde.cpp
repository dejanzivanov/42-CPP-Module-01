/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 20:33:09 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/11 10:31:47 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *hoard = new Zombie[N];
	Zombie *zombie;


	std::stringstream num;
	std::string result;

	for(int i = 0; i < N; i++)
	{
		zombie = new Zombie();
		num << name << i;
		result = num.str();
		zombie->set_name(result);
		zombie->announce();
		hoard[i] = *zombie;
		num.str("");
		result.clear();
		delete zombie;
	}
	return hoard;
}