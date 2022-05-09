/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:26:59 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/11 18:57:57 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string p_name)
{
	this->name = p_name;
}

void HumanB::set_weapon(Weapon &p_weapon)
{
	this->weapon2 = &p_weapon;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon2->get_type() << std::endl;
}

HumanB::~HumanB(void)
{

}