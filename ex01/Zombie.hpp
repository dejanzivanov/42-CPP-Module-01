/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:24:10 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/04 21:39:57 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <string>



class Zombie{
	std::string _name;
	public:
		void set_name(std::string name);
		void    announce(void);
		~Zombie(void);
};
Zombie *zombieHorde( int N, std::string name );
#endif
