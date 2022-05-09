/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:33:44 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/12 12:07:14 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
std::cout << "Karen entered the store\n";
}

void Karen::complain(std::string level)
{
	std::string actions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*functionPointers[4])() = {&Karen::debug, &Karen::info,  &Karen::warning , &Karen::error};

	for (int i = 0; i < 4; i++)
	{
		if (actions[i] == level)
		{
			(this->*functionPointers[i])();
		}

	}

}

void Karen::debug(void)
{
	std::cout << "Level: DEBUG\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Karen::info(void)
{
	std::cout << "Level: INFO\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";

}

void Karen::warning(void)
{
	std::cout << "Level: WARNING\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Karen::error(void)
{
	std::cout << "Level: ERROR\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";

}

Karen::~Karen()
{
	std::cout << "Karen exited out of the store\n";
}