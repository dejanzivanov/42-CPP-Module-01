/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:21:58 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/11 18:03:17 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:

	// HumanB(void);
	// HumanB(const HumanB &other); //copy constructor
	// HumanB& operator = (const HumanB &other); //
public:
	std::string name;
	Weapon *weapon2;
	HumanB(std::string p_name);
	~HumanB();
	// std::string get_name(void);
	// void set_name(std::string p_name);
	// Weapon get_weapon(void);
	void set_weapon(Weapon &p_weapon);
	void attack(void);
};

#endif