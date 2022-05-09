/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:24:10 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/04 21:07:57 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	std::string _name;
	public:
		Zombie*    newZombie( std::string name );
		void    randomChump( std::string name );
		void    announce(void);
		~Zombie(void);
};

#endif