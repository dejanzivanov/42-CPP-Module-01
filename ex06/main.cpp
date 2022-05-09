/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:43:00 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/12 12:17:02 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Is Karen Broken? Please try again" << std::endl;
		return -1;
	}

	int choice = 0;
	int i = 0;
	Karen karen;
	std::string choices[4] = {"DEBUG", "INFO", "WARNING", "LEVEL"};

	while (i < 4)
	{
		if (choices[i] == argv[1])
		{
			choice = i;
			switch (choice)
			{
				case 0:
					karen.complain("DEBUG");
					karen.complain("INFO");
					karen.complain("WARNING");
					karen.complain("ERROR");
					break;
				case 1:
					karen.complain("INFO");
					karen.complain("WARNING");
					karen.complain("ERROR");
					break;
				case 2:
					karen.complain("WARNING");
					karen.complain("ERROR");
					break;
				case 3:
					karen.complain("ERROR");
					break;
				default:
					std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
					break;
			}
			break;
		}
		i++;
	}
	if(i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;



	// Karen karen;

	// karen.complain("DEBUG");
	// karen.complain("ERROR");
	// karen.complain("INFO");
	// karen.complain("WARNING");
	return 0;
}