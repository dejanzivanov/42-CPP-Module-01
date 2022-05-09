/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:26:59 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/11 18:57:47 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string p_name, Weapon &p_weapon):name(p_name), weapon1(p_weapon)
{
	
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << weapon1.get_type() << std::endl;
}

HumanA::~HumanA(void)
{

}