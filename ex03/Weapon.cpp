/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:46:54 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/11 16:18:07 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string string)
{
	this->set_type(string);
	// std::cout << "Weapon has been constructed" << std::endl;
}

const std::string& Weapon::get_type(void)
{
	std::string& string_ref = this->type;
	return (string_ref);
}

void Weapon::set_type(std::string p_type)
{
	this->type = p_type;
}

Weapon::~Weapon(void)
{
	// std::cout << "Weapon has been destroyed" << std::endl;
}

